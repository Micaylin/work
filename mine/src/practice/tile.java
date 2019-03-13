package practice;

import java.awt.Color;
import java.awt.Graphics;

public class tile {
 
public static int Empty = 0;
public static int filled = 1;
public static int blank =2;
public int x = 0;
public int y = 0;
public int length = 60;
public int row = x* length;
public int col = y * length;
public String face;


public tile(int x , int y , String face) {
	
	col = this.y * length;
	row = this.x * length;
	face = this.face;
}



public void draw(Graphics g) {
	// TODO Auto-generated method stub
	g.setColor(Color.BLACK);
	g.drawRect(x, y, 60, 60);
	g.drawString(face,x+(60/2),y+(60/2));
}





}
