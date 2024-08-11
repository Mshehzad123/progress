package GraphInDsa;
// Topological Sorting
import java.util.*;
public class TopologySort {
    static class Edge {
        int src;
        int dest;
        public Edge(int s, int d) {
            this.src = s;
            this.dest = d;
        }
    }
    static void createGraph(ArrayList<Edge>[] graph) {
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }
        graph[2].add(new Edge(2, 3));
        graph[3].add(new Edge(3, 1));
        graph[4].add(new Edge(4, 0));
        graph[4].add(new Edge(4, 1));
        graph[5].add(new Edge(5, 0));
        graph[5].add(new Edge(5, 2));
    }
    public static void topoSortUtil(ArrayList<Edge>[] graph, int curr, boolean[] vis, Deque<Integer> s) {
        vis[curr] = true;
        for (int i = 0; i < graph[curr].size(); i++) {
            Edge e = graph[curr].get(i);
            if (!vis[e.dest]) {
                topoSortUtil(graph, e.dest, vis, s);
            }
        }
        s.addFirst(curr); // Add to the front of the deque (similar to push in stack)
    }

    // O(V+E)
    public static void topoSort(ArrayList<Edge>[] graph) {
        boolean[] vis = new boolean[graph.length];
        Deque<Integer> s = new ArrayDeque<>();
        for (int i = 0; i < graph.length; i++) {
            if (!vis[i]) {
                topoSortUtil(graph, i, vis, s);
            }
        }
        while (!s.isEmpty()) {
            System.out.print(s.removeFirst() + " "); // Remove from the front of the deque (similar to pop in stack)
        }
    }

    public static void main(String[] args) {
        int V = 6;
        ArrayList<Edge>[] graph = new ArrayList[V];
        createGraph(graph);
        topoSort(graph);
    }
}
