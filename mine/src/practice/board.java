package practice;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.GridLayout;
import java.awt.List;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.Stack;
import java.util.TreeSet;

import javax.swing.JPanel;

public class board {
 public static void main(String[]args) {
	 Stack<String> s1 = new Stack<String>();
	 s1.add("B");
	 s1.add("E");
	 s1.add("A");
	 s1.add("C");
	 s1.add("D");
	 sortStack(s1);
	 

 }
 public static <E extends Comparable<E>> void sortStack(Stack<E> stack){
	 Stack<E> s1 = new Stack<>();
	 int count;
	 E stackObject ;
	 E x;
     for( count = 0; !stack.isEmpty(); count++)
	    s1.push(stack.pop());
	 while(!s1.isEmpty())
	    stack.push(s1.pop());
	 for(count--;count>0; count--){
        stackObject = stack.pop();
	    s1.push(stackObject);
	    for(int j = count; j>0; j--){
	        x = stack.pop();
	        if(stackObject.compareTo(x)>0)
	        stackObject = x;
	        s1.push(x);
	     }
	 stack.push(stackObject);
	 while( !s1.isEmpty() ){
	   x=s1.pop();
	   if(!x.equals(stackObject))
	      stack.push(x);
	 }
	  }
 System.out.println(stack);
	  }

}
