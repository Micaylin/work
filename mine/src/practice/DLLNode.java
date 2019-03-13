package practice;

public class DLLNode<E> {
E value;
DLLNode<E> next;
DLLNode<E> previous;


  public DLLNode() {
	  
  }
  
  public DLLNode(E e , DLLNode<E> nxt , DLLNode<E> prev) {
	  this.value = e;
	  this.next = nxt;
	  this.previous = prev;
  }
}
