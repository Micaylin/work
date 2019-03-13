package basicGUITemplate;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JPanel;

public class BackgroundChanger extends JPanel {
	JPanel canvas = null;
	
	public BackgroundChanger(){
		
		JPanel buttonPanel = new JPanel();
		
		//Button
		JButton jbtChangeColor = new JButton("Change Color");
		jbtChangeColor.addActionListener(new BackgroundListener());
		buttonPanel.add(jbtChangeColor);
		
		JButton jbtShapeDrawer = new JButton("draw");
		
		jbtShapeDrawer.addActionListener(new ActionListener(){

			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				int red = (int)(Math.random() * 255);
				int green = (int)(Math.random() * 255);
				int blue = (int)(Math.random() * 255);
				Color mycolor = new Color(red,green,blue);
				
				Graphics g = canvas.getGraphics();
				g.setColor(mycolor);
				g.fillOval(30, 30, 200, 200);
			}
			
			}
		);
		buttonPanel.add(jbtShapeDrawer);
		
		canvas = new JPanel();
		this.setLayout(new BorderLayout());
		this.add(canvas, BorderLayout.CENTER);
		this.add(buttonPanel,BorderLayout.SOUTH);
	}
	
	//Event Listener
	//inner class
	class BackgroundListener implements ActionListener {

		@Override
		public void actionPerformed(ActionEvent arg0) {
			int red = (int)(Math.random() * 255);
			int green = (int)(Math.random() * 255);
			int blue = (int)(Math.random() * 255);
			Color mycolor = new Color(red,green,blue);
			canvas.setBackground(mycolor);
		}	
	}
	
	
	
}
