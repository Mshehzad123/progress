import java.util.ArrayList;
public class binerySearchTree {
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
        }        
    }
    public static Node insert(Node root, int key){
        if (root==null){
            root= new Node(key);
            return root;
        }
        if (root.data>key){
            //go to left
            root.left=insert(root.left, key);
        }else{
            root.right=insert(root.right, key);
        }
        return root;

    }
    public static void inorder(Node root){
        if (root==null){
            return;
        }
        inorder(root.left);
        System.out.println(root.data + " ");
        inorder(root.right);
    }
    public static boolean search(Node root, int key){
        if (root==null){
            return false;
        }
         if (root.data>key){
            return search(root.left, key);
        }
        else if (root.data==key){
            return true;
        }
        else{
            return search(root.right, key);

        }
    }
    public static Node DeleteNode(Node root,int key){
        if (root==null){
            return null;
        }
        if (root.data>key){
            root.left=DeleteNode(root.left, key);
        }
        else if (root.data<key){
            root.right=DeleteNode(root.right, key);
        }
        else{
            // root.data==key
            //case 1 when 0 child having parent
            if (root.left==null && root.right==null){
                return null;
            }
            //case 2 when 1 child having parent
if (root.left==null){
    return root.right;
}else if (root.right==null){
    return root.left;
}
//case three when two childs having parent 
// for this well first find inOrder Successor
else{


Node IS= InOrderSuccessor(root.right);
root.data=IS.data;
root.right= DeleteNode(root.right, IS.data);
        }
    }
    return root;
            }
    public static Node InOrderSuccessor(Node root){
        while (root.left!=null) {
            root=root.left;
        }
        return root;

    }
   public static void printRange(Node root,int x,int y){
    if(root==null){
        return;
    }
    if (root.data>=x &&root.data<=y){
        printRange(root.left, x, y);
        System.out.print(root.data + " ");
        printRange(root.right, x, y);
    }else if (root.data>=y){
        printRange(root.left, x, y);

    }
    else{
        printRange(root.right, x, y);
    }
   }
   public static void printPath(ArrayList<Integer> path){
    for (int i=0;i<path.size();i++){
        System.out.print(path.get(i) + " ->");
    }
    System.out.println();
   }
   public static void printRoadToLeaf(ArrayList<Integer> path,Node root){
    if (root==null){
        return;
    }
    path.add(root.data);
    //for leaf node
    if (root.left==null&&root.right==null){
        printPath(path);
    }
    else{
        printRoadToLeaf(path, root.left);
        printRoadToLeaf(path, root.right);

    }
    path.remove(path.size()-1);
   }
    public static void main(String[] args) {
    int arr[] = {8,5,3,1,4,6,10,11,14};
    
        Node root= null;
        for (int i=0;i<arr.length;i++){
            root=insert(root, arr[i]);
        }
        inorder(root);    
        if (search(root, 9)){
            System.out.println("found ");
        }    else{
            System.out.println("not found ");
        }
        DeleteNode(root, 3);
        inorder(root);
        System.out.println();
        printRange(root, 6, 10);
        printRoadToLeaf(new ArrayList<>(), root);
    }
}
