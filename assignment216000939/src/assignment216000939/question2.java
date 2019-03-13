package assignment216000939;

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import javax.swing.JOptionPane;

public class question2 {
	 public static String processUserInput(String input) {
	        
	        String response = "";
	        
	        if(input.matches(".*all.*")) {
	            response = "IN WHAT WAY?";
	            
	        } else if(input.matches(".*always.*")) {
	            response = "CAN YOU THINK OF A SPECIFIC EXAMPLE?";
	            
	        } else if(input.matches("no")) {
	            response = "you need to open up to me";
	            
	        } else if(input.matches(".*my.*")) {
	            
	            response = input.substring(input.indexOf("my")).replaceAll("my", "YOUR").toUpperCase() + "?"; 
	            response = response.replaceAll(" ME ", " YOU ");
	            
	        } else if(input.matches(".*(depressed|sad|unhappy).*")) {
	            
	            Pattern p = Pattern.compile("(.*)(depressed|sad|unhappy)(.*)");
	            Matcher m = p.matcher(input);
	            String feeling = "";
	            
	            if(m.find()) {
	                feeling = m.group(2).toUpperCase();
	            }
	            
	            response = "I'M SORRY TO HEAR YOU ARE " +feeling;
	            
	        } else if(input.matches(".*unhappy.*")) {
	            response = "DO YOU THINK COMING HERE WILL HELP YOU NOT BE UNHAPPY?";
	            
	        } else if(input.matches(".*help.*")) {
	            response = "WHAT WOULD IT MEAN TO YOU IF YOU GOT SOME HELP?";
	            
	        } else if(input.matches(".*(mother|father|brother|sister) takes care.*")) {
	            response = "WHO ELSE IN YOUR FAMILY TAKES CARE OF YOU?";
	            
	        } else if(input.matches("^My (mother|father|brother|sister|)")) {
	            response = "YOUR " + input.substring(input.indexOf("My ")+3).toUpperCase() + "?";
	            
	        } else if(input.matches(".*(mother|father|brother|sister|).*")) {
	            response = "TELL ME MORE ABOUT YOUR FAMILY?";  
	        }
	        else if(input.compareTo("Q")==0) {
	        	System.exit(0);
	        }
	        
	        return response;
	    }
	    
	    /**
	     * @param args the command line arguments
	     */
	    public static void main(String[] args) {
	        
	        Scanner scanner = new Scanner(System.in);
	        String input;
	        
	        do {
	            
	            input = JOptionPane.showInputDialog("enter");
	            System.out.println(processUserInput(input));
	            
	        }  while(!input.equalsIgnoreCase("Q"));
	    }
}
