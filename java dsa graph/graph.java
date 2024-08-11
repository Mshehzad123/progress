class Node {
    int data;
    Node left, right;

    // Constructor to initialize the node
    Node(int val) {
        data = val;
        left = right = null;
    }
}

public class graph {
    // Method to create a new node
    public static Node createNode(int val) {
        return new Node(val);
    }

    public static void main(String[] args) {
        // Create root node
        Node root = createNode(10);
        // Create other nodes
        root.left = createNode(5);
        root.right = createNode(15);
        root.left.left = createNode(3);
        root.left.right = createNode(7);

        // Print the tree data
        System.out.println("Root Node: " + root.data);
        System.out.println("Left Child of Root: " + root.left.data);
        System.out.println("Right Child of Root: " + root.right.data);
        System.out.println("Left Child of Left Child: " + root.left.left.data);
        System.out.println("Right Child of Left Child: " + root.left.right.data);
    }
}
