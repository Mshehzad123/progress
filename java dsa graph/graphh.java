class Node {
    int data;
    Node left, right;

    Node(int val) {
        data = val;
        left = right = null;
    }
}

public class graphh {

    // Method to create a new node
    public static Node newNode(int val) {
        return new Node(val);
    }

    // Method to insert a value into the BST
    public static Node insert(Node root, int val) {
        if (root == null) {
            root = newNode(val);
            return root;
        }
        if (val < root.data) {
            root.left = insert(root.left, val);
        } else if (val > root.data) {
            root.right = insert(root.right, val);
        }
        return root;
    }

    // In-order traversal to display the tree (for testing purposes)
    public static void inorder(Node root) {
        if (root != null) {
            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }
    }

    public static void main(String[] args) {
        Node root = newNode(10);
        root.left = newNode(5);
        root.right = newNode(15);
        root.left.left = newNode(3);
        root.left.right = newNode(8);

        System.out.println("Initial tree (in-order): ");
        inorder(root);
        System.out.println();

        // Insert new values into the BST
        insert(root, 12);
        insert(root, 20);
        insert(root, 1);

        System.out.println("Tree after insertion (in-order): ");
        inorder(root);
        System.out.println();
    }
}
