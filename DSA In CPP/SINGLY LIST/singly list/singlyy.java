public class  singlyy{
class Node{
    String data;
    Node next;
    Node(String data){
        this.data=data;
        this.next=null;
    }
}
//insert at first 
public void First(String data){
Node newNode = new Node(data);
    if (head==null){
        head=newNode;
        return;

    }
    newNode.next=head;
    head=newNode;
}
public static void main(String[] args) {
    singlyy list = new singlyy();
    list.First("a");
    System.out.println(list);
    
}
}