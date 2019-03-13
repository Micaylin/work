package basicGUITemplate;

import java.awt.Graphics;

import javax.swing.JPanel;

public class MyPanel extends JPanel {
	public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.drawString( "Hello World!", 20, 30 );
        g.draw3DRect(5, 5, 130, 130, true);
        
     }
}
