import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.ListIterator;
import java.util.Properties;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import edu.stanford.nlp.ling.CoreAnnotations;
import edu.stanford.nlp.ling.CoreLabel;
import edu.stanford.nlp.ling.CoreAnnotations.TextAnnotation;
import edu.stanford.nlp.ling.CoreAnnotations.TokensAnnotation;
import edu.stanford.nlp.pipeline.Annotation;
import edu.stanford.nlp.pipeline.StanfordCoreNLP;
import edu.stanford.nlp.util.ArrayCoreMap;
import edu.stanford.nlp.util.CoreMap;

public class NGram {
	/**
	 * 
	 * @param str : the input string (atleast 1 word)
	 * @param gramSize : maximum gram size (min = 1)
	 * @return a set of n-grams up to gramSize for the sentence
	 */
	public static List<String> generateNGrams(String str, int gramSize) {
		List<String> sentence = Arrays.asList(str.split("\\W"));
		
		List<String> ngrams = new ArrayList<String>();
		int N = 0;
		StringBuilder build = null;
		
		for(ListIterator<String> iterator = sentence.listIterator(); iterator.hasNext();) {
			String w = (String) iterator.next();
			
			build = new StringBuilder(w);
			ngrams.add(w);
			N = 1;
			iterator.previous();
			
			while(iterator.hasPrevious() && N<gramSize) {
				build.insert(0, ' ');
				build.insert(0, iterator.previous());
				ngrams.add(build.toString());
				N++;
			}
			
			while(N>0) {
				N--;
				iterator.next();
			}
		}
		return ngrams;
	}
	/**
	 * 
	 * @param ngrams
	 * @param gramSize
	 * @return list of relevant grams
	 */
	public static List<String> assureGram(List<String> ngrams, int gramSize) {
		List<String> finalGramList = new ArrayList<String>();
		for(String g: ngrams) {
			if(g.split("\\W").length==(gramSize-1)||g.split("\\W").length==gramSize) {
				finalGramList.add(g);
			}
		}
		return finalGramList;
	}
	/**
	 * 
	 * @param ngrams - Arraylist containing ngrams
	 * @param gramSize - maximum ngram size
	 * @return Hashmap with K,V pairs of NGram, Count
	 */
	public static HashMap<String, Integer> createMap(List<String> ngrams, int gramSize) {
		HashMap<String, Integer> gramCounts = new HashMap<>();
		for(String gram: ngrams) {
			gramCounts.put(gram, 0);
		}
		return gramCounts;
	}
/**
 * Counts the gram occurences in corpus
 * @param allGram
 * @param nGram
 * @return
 */
	public static HashMap<String, Integer> getCounts(List<String> allGram, HashMap<String, Integer> nGram) {
		HashMap<String, Integer> finalCountMap = new HashMap<String, Integer>();
		finalCountMap = nGram;
		for(String ref: allGram) {
			for(String key: finalCountMap.keySet()) {
				if(ref.equals(key)) {
					finalCountMap.put(key, finalCountMap.get(key)+1);
				}
			}
		}
		return finalCountMap;
	}
	// NOTE FIX
//	public static HashMap<String, Double> probabilities(HashMap<String, Integer> nGrams, String inputString, int gramSize, int V) {
//		double prob = 0.0;
//		HashMap<String,Double> probMap = new HashMap<>();
//		for(String key: nGrams.keySet()) {
//			for(String keyInner: nGrams.keySet()) {
//				if((keyInner.contains(key) && keyInner.split("\\W").length<key.split("\\W").length)) {
//					prob = ((double) nGrams.get(key) + 1)/( (double) nGrams.get(keyInner)+Math.pow(V, gramSize));
//					probMap.put(key, prob);
//				} else {
//					prob = nGrams.get(key) / V;
//					probMap.put(key, prob);
//				}
//			}
//		}
//		return probMap;
//		 
//	}
	/**
	 * Returns the size of the vocabulary
	 * @param corpus
	 * @return
	 */
	public static int vocabSize(Annotation corpus) {
		HashSet<String> uniqueWords = new HashSet<>();
		List<CoreMap> sentences = corpus.get(CoreAnnotations.SentencesAnnotation.class);
		for(CoreMap sent: sentences) {
			for(CoreLabel k: sent.get(TokensAnnotation.class)) {
				uniqueWords.add(k.get(TextAnnotation.class));
			}
		}
		return uniqueWords.size();
	}
	public static void main (String [] args) throws FileNotFoundException {
		List<String> allGrams = new ArrayList<>();
		String fullText = "";
		int V = 0;
		Scanner in = new Scanner(System.in);
		System.out.println("Enter input text: ");
		String input = in.nextLine();
		System.out.println("Enter maximum gram size: ");
		int size = in.nextInt();
		Scanner scanner = new Scanner(new File("C:\\Users\\Shivan\\Desktop\\UKZN\\2018 Semester 1\\316\\science.txt"));
		String text = "";
		while(scanner.hasNextLine())
			text= text +scanner.nextLine();
		Properties props = new Properties();
		props.put("annotators", "tokenize, ssplit");
		StanfordCoreNLP pipeline = new StanfordCoreNLP(props);
		Annotation corpus = new Annotation(text);
		pipeline.annotate(corpus);
		
		List<CoreMap> sentences = corpus.get(CoreAnnotations.SentencesAnnotation.class);
		for(CoreMap sentence: sentences) {
			fullText += " " + sentence;
		}
		V = vocabSize(corpus);
		allGrams = generateNGrams(fullText, size);
		System.out.println("Vocabulary: "+V);
		//for(String x: allGrams) System.out.println(x);
		HashMap<String,Integer> grams = getCounts(allGrams, createMap(generateNGrams(input, size), size));
		// NOTE FIX HashMap<String, Double> probs = probabilities(grams, input, size, V);
		for(String key: grams.keySet()) System.out.println(key+" "+grams.get(key));
		// NOTE FIXfor(String key2: probs.keySet()) System.out.println(key2+" "+probs.get(key2));
		in.close();
	}
	
}
