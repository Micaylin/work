package practice;

import javax.swing.JFrame;



public class guiapp {
	
	public static void main(String[] args) {
		JFrame myFrame = new JFrame();
		myFrame.setSize(400, 400);
		myFrame.setLocationRelativeTo(null);
		myFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		myFrame.setTitle("Movable Circle");
		myFrame.add(new board());
		myFrame.setVisible(true);

	}


}
