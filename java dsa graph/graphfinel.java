class Node{
    int data;
    Node left;
    Node right;
    Node(int val){
        data=val;
        left=right=null;
    }
}
public class graphfinel {
    public static Node newNode(int val){
        return new Node (val);
    }
    public static void inOrder(Node root){
        if (root!=null){
            inOrder(root.left);
            System.out.println(root.data + " ");
            inOrder(root.right);
        }
    }
    public static void postOrder(Node root){
if (root!=null){
            postOrder(root.left);
            postOrder(root.right);
            System.out.println(root.data+" ");
        }
    }
    public static void preOrder(Node root){
        if (root!=null){
            System.out.println(root.data);
            preOrder(root.left);
            postOrder(root.right);
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
        Node root = newNode(5);
        root.left=newNode(3);
        root.right=newNode(10);
        root.left.left=newNode(12);
        System.out.println(root.data);
        System.out.println(root.left.data);
        System.out.println(root.right.data);
        System.out.println("inorder");
inOrder(root);
System.out.println();
System.out.println("predorder");
preOrder(root);
System.out.println();
System.out.println("post ");
postOrder(root);
System.out.println();
System.out.println("insertion of element at last");
insNode(root, 78);
insNode(root, 80);
insNode(root, 80);
insNode(root, 8);


inOrder(root);

    }
}

