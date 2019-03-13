package basicGUITemplate;

import javax.swing.JFrame;

public class BasicGUIApp {

	public static void main(String[] args) {
		JFrame myFrame = new JFrame();
		myFrame.setSize(400, 400);
		myFrame.setLocationRelativeTo(null);
		myFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		myFrame.setTitle("MyPanel");
		myFrame.add(new BackgroundChanger());
		myFrame.setVisible(true);

	}

}
