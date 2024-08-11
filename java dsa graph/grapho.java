class Node{
    int data;
    Node left;
    Node right;
    Node(int val){
        data=val;
        left=right=null;
    }

}
public class grapho {

    public static Node newNode(int val)
    {
return new Node (val);
    }
    public static void inOrder(Node root){
        if (root!=null){
            inOrder(root.left);
            System.out.println(root.data);
            inOrder(root.right);
        }
    }
    public static void predorder(Node root){
        if (root!=null){
            System.out.println(root.data);
            predorder(root.left);
            predorder(root.right);
        }
    }
    public static Node insNode(Node root,int key){
        if (root==null){
            return newNode(key);
        }
        if (key<root.data){
            root.left=insNode(root.left, key);
        }else if (key>root.data){
            root.right=insNode(root.right, key);
        }
        return root;
    }
    public static void main(String[] args) {
        Node root=newNode(1);
         root.left=newNode(2);
         root.right=newNode(3);
         System.out.println(root.data);
         System.out.println(root.left.data);
         System.out.println(root.right.data);
         inOrder(root);
         predorder(root);
         insNode(root, 6);
         inOrder(root);
    }
}