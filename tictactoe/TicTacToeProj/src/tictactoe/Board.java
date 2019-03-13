package tictactoe;

import java.awt.Graphics;
import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;

import javax.swing.JPanel;

public class Board extends JPanel implements MouseListener {

	Square[][] grid = new Square[3][3];
	int turn; //1 -> cross // 2 -> nought
	
	public Board(){
		for(int r = 0; r < grid.length; r++){
			for (int c = 0; c <grid[0].length; c++){
				grid[r][c] = new Square(r,c);
			}
		}
		turn = Square.CROSS;
		//create an object of the mOuselistener clas
		//add that object to this panel
		//usin g the addMouseListener
		this.addMouseListener(this);
	}
	
	public void paintComponent(Graphics g){
		for(int r = 0; r < grid.length; r++){
			for (int c = 0; c <grid[0].length; c++){
				grid[r][c].draw(g);
			}
		}
	}
	
	public int checkWinner(){
		
		
		return 2;
	}
		
	@Override
	public void mouseClicked(MouseEvent e) {
		// TODO Auto-generated method stub
		int row = 0;
		int col = 0;
		if (e.getX() >= 0 && e.getX() <=180 &&
				e.getX() >= 0 && e.getX() <=180){
			 col = e.getX() / 60;
			 row = e.getY() / 60;
		}
		System.out.println(row + "" + col);
		if (turn == Square.CROSS ){
			grid[row][col].changeState(Square.CROSS);
			turn = Square.NOUGHT;
		} else if (turn == Square.NOUGHT){
			grid[row][col].changeState(Square.NOUGHT);
			turn = Square.CROSS;
		}
		if (checkWinner() == Square.CROSS)
		repaint();
	}

	@Override
	public void mouseEntered(MouseEvent arg0) {
		// TODO Auto-generated method stub

	}

	@Override
	public void mouseExited(MouseEvent arg0) {
		// TODO Auto-generated method stub

	}

	@Override
	public void mousePressed(MouseEvent arg0) {
		// TODO Auto-generated method stub

	}

	@Override
	public void mouseReleased(MouseEvent arg0) {
		// TODO Auto-generated method stub

	}

}
