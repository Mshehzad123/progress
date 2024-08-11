class Node {
    int data;
    Node left;
    Node right;
    Node(int val) {
        this.data = val;
        left = right = null;
    }
}
public class graphfinelmain {
    public static Node insertNode(int val, Node root) {
        if (root == null) {
            return new Node(val); // Create a new node when the root is null
        }
        if (val > root.data) {
            root.right = insertNode(val, root.right);
        } else {
            root.left = insertNode(val, root.left);
        }
        return root;
    }

    public static void inorder(Node root) {
        if (root != null) {
            inorder(root.left);
            System.out.print(root.data);
            inorder(root.right);
        }
    }
    public static Node delNode(Node root,int key){
        if (key>root.data){
            root.right=delNode(root.right, key);
        }
        else if (key<root.data){
            root.left=delNode(root.left, key);
        }
        else{
        //case 1 root.data=data;
        if (root.left==null&&root.right==null){
            return null;
        }
        //case 2
        if (root.left==null){
            return root.right;
        }
        else if (root.left==null){
            return root.right;
        }
            //   case 3
            Node is=inSuccesorNode(root.right);
            root.data=is.data;
            root.right=delNode(root.right, is.data);

        }
        return root;
    }
public static Node inSuccesorNode(Node root){
    while (root.left!=null) {
        root=root.left;
        
    }
    return root;
}
    public static void main(String[] args) {
        int arr[] = {6,5,4,3,2,1};
        Node rootNode = null;
        for (int i = 0; i < arr.length; i++) {
            rootNode = insertNode(arr[i], rootNode);
        }
        inorder(rootNode);
        // delNode(rootNode, );
        System.out.println();
        inorder(rootNode);
    }
}
