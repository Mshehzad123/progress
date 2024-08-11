class Node{
    int data;
    Node left;
    Node right;
    Node(int key){
        data=key;
        left=right=null;
    }
}
public class graphhh {
    public static Node newNode(int data){
return new Node(data);
    }
     public static void inOrder(Node root){
        if (root!=null){
            inOrder(root.left);
            System.out.print(root.data);
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
    public static void postOrder(Node root){
        if (root!=null){
            postOrder(root.left);
            postOrder(root.right);
            System.out.println(root.data);
        }
    }
    public static Node  insNode(int key,Node root){
        if (root==null){
            return root;
        }
        if (key>root.data){
            root.right=insNode(key, root.right);
        }else{
            root.left=insNode(key, root.left);
        }
        return root;
    }
    //deletion
    public static Node delNode(Node root,int val){
        if (val<root.data){
            root.left= delNode(root.left, val);
        }else if (val>root.data){
            root.right=delNode(root.right, val);
        }else{
            //root.data=val;
    //case 1 for deletion
    if (root.left==null&&root.right==null){
        return null;
    }
    //case 2;
    if (root.left==null){
        return root.right;
    }
    else if (root.right==null){
        return root.left;
    }
    //case three
    Node inorderSuccesor= inorderSuccesor(root.right);
    root.data=inorderSuccesor.data;
    root.right=delNode(root.right, inorderSuccesor.data);


        }
        return root;
    }
    public static Node inorderSuccesor(Node root){
        while (root.left!=null) {
            root=root.left;
        }
        return root;

    }
    public static void main(String[] args) {
       int arr[]={1,2,3,4,5,6,7};
       Node rootNode=null;
       for (int i=0;i<arr.length;i++){
        rootNode=insNode(arr[i], rootNode);
       }
        // System.out.println(rootNode.left.data);

        // System.out.println(rootNode.data);
        // System.out.println(rootNode.right.data);
        // System.out.println("in order ");
        // inOrder(rootNode);
        // System.out.println("post order ");
        // postOrder(rootNode);
        // System.out.println("pre order ");
        // predorder(rootNode);
        // System.out.println("insert element is ");
        // insNode(90, rootNode);
        inOrder(rootNode);
        System.out.println();
delNode(rootNode, 3);
inOrder(rootNode);
    }
}