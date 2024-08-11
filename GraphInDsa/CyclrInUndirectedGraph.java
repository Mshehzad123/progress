// Cycle Detection (Undirected Graph)
package GraphInDsa;
import java.util.ArrayList;
public class CyclrInUndirectedGraph {
    static class Edge {
        int src;
        int dest;
        
        public Edge(int s, int d) {
            this.src = s;
            this.dest = d;
        }
    }
    public static void CreateGraph(ArrayList<Edge>[] graph) {
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }
        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));
        graph[0].add(new Edge(0, 3));
        graph[1].add(new Edge(1, 0));
        graph[2].add(new Edge(2, 0));
        graph[3].add(new Edge(3, 0));
    }
    public static boolean isCyclic(ArrayList<Edge>[] graph, boolean[] visited, int curr, int parent) {
        visited[curr] = true;
        for (int i = 0; i < graph[curr].size(); i++) {
            Edge e = graph[curr].get(i);
            if (!visited[e.dest]) {
                if (isCyclic(graph, visited, e.dest, curr)) {
                    return true;
                }
            } else if (e.dest != parent) {
                return true;
            }
        }
        return false;
    }

    public static boolean hasCycle(ArrayList<Edge>[] graph) {
        boolean[] visited = new boolean[graph.length];
        for (int i = 0; i < graph.length; i++) {
            if (!visited[i]) {
                if (isCyclic(graph, visited, i, -1)) {
                    return true;
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int v = 4;
        ArrayList<Edge>[] graph = new ArrayList[v];
        CreateGraph(graph);
        System.out.println(hasCycle(graph));
    }
}
