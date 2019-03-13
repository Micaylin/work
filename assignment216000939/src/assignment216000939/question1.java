package assignment216000939;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;




public class question1 {
  
public static String getPrices(Scanner scanner) {
        
        String prices = "";
        
        while(scanner.hasNext()) {
            
            String token = scanner.next();
           
            
            if(token.matches("\\$\\d+[,]?\\d+[\\.]?(\\d+)?") ) {
            	
              if(token.compareToIgnoreCase("$12.99")!= 0) {
            	if(!prices.contains(token)) { 
				 prices += token + "\n";
            	}
              }
			}
        }
        scanner.close();
        return prices;
    }
    
    public static String getProcessors(Scanner scanner) {
        
        String processors = "";
        
        while(scanner.hasNextLine()) {
            
            String line = scanner.nextLine();
            
            if(line.matches(".* Processor.*")) {
                
                processors += line + "\n";
            }
        }
        
        scanner.close();
        return processors;
    }
    
    public static String getBrands(Scanner scanner) {
        
        String brands = "";
        
        while(scanner.hasNext()) {
            
            String line = scanner.next();
            
            if(line.matches("Acer|HP|Dell|Apple|Asus|Alienware") && !brands.contains(line)) {
                
                brands += line + "\n";
            }
        }
        
        scanner.close();
        return brands;
    }
    
    public static String getNewLaptops(Scanner scanner) {
        
        String newLap = "";
        
        while(scanner.hasNextLine()) {
            
            String line = scanner.nextLine();
            
            if(line.matches("[0-9]+ new.*")) {
                newLap += line.substring(0, line.indexOf("n")) + "\n";
            }
        }
        
        scanner.close();
        
        return newLap;
    }
    
    public static String getNoReviews(Scanner scanner) {
        
        String numReviews = "";
        
        while(scanner.hasNextLine()) {
            
            String line = scanner.nextLine();
            
            if(line.matches("[0-9]+ customer reviews.*")) {
                numReviews += line.substring(0, line.indexOf("c")) + "\n";
            }
        }
        
        scanner.close();
        
        return numReviews;
    }
    
    public static Scanner loadScanner() {
        
        Scanner scanner = null;
        
        try {
            scanner = new Scanner(new BufferedReader(new FileReader( "Laptops.txt")));
                        
        } catch (FileNotFoundException ex) {
        	Logger.getLogger(question1.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        return scanner;
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
     
        String prices = getPrices(loadScanner());
        System.out.println("Prices: \n" + prices + "\n");
        
        String processors = getProcessors(loadScanner());
        System.out.println("Processors: \n" + processors + "\n");
        
        String brands = getBrands(loadScanner());
        System.out.println("Brands: \n" + brands + "\n");
        
        String newLaps = getNewLaptops(loadScanner());
        System.out.println("No of new laptops: \n" + newLaps + "\n");
        
        String numReviews = getNoReviews(loadScanner());
        System.out.println("No of reviews: \n" + numReviews + "\n");
    }
    
}
