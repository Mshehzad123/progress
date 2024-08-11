public class preOrderBineryTree {
    static class Node {
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
            this.left=right=null;
        }
    }
        static class bineryTree {
            static int idx=-1;
            public static Node builTree(int nodes[]){
idx++;
if (nodes[idx]==-1){
    return null;
}
Node newNode=new Node(nodes[idx]);
newNode.left=builTree(nodes);
newNode.right=builTree(nodes);
return newNode;
        
            }    
        }
    public static void main(String[] args) {
        int nodes[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        bineryTree tree=new bineryTree();
        Node root=tree.builTree(nodes);
        System.out.println(root.data);
    }
}