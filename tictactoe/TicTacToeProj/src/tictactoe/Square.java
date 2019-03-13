package tictactoe;

import java.awt.Graphics;
import java.awt.Image;
import java.io.File;
import java.io.IOException;

import javax.imageio.ImageIO;

public class Square {
	public static int EMPTY = 0;
	public static int NOUGHT = 1;
	public static int CROSS = 2;
	
	private int state = EMPTY; //0,1,2
	private int size = 60;
	private int x,y;
	
	public Square(int row , int col){
		this.x = row * size;
		this.y = col * size;
		this.state = EMPTY;
	}
	
	public void draw(Graphics g){
		g.drawRect(x, y, size, size);
		Image i = null;
		try {
			if(state == CROSS){
				i = ImageIO.read(new File("images/cross.png"));
				g.drawImage(i,x+5, y+5, size-10, size-10,null);
			}
			else if (state == NOUGHT){
				i = ImageIO.read(new File("images/nought.png"));
				g.drawImage(i,x+5, y+5, size-10, size-10,null);
			}
		}
		catch (IOException e){
			
		}
		
	}
	
	public boolean isSelected(int x, int y){
		if (x >= this.x && x <= this.x + size &&
			y >= this.y && y <= this.y + size){
			return true;
		}
		else
			return false;
	}
	
	public void changeState(int state){
		if(this.state == EMPTY){
			this.state = state;
		}
		
	}
	
	public int getState(){
		return this.state;
	}
}
