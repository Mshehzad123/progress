package GraphInDsa;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
public class GraphsKaSubGraphs {
    static class Edge {
        int src;
        int dest;
        public Edge(int s, int d) {
            this.src = s;
            this.dest = d;
        }
    }
    public static void createGraph(ArrayList<Edge> graph[]) {
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>();
        }
        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));

        graph[1].add(new Edge(1, 0));
        graph[1].add(new Edge(1, 3));

        graph[2].add(new Edge(2, 0));
        graph[2].add(new Edge(2, 4));

        graph[3].add(new Edge(3, 4));
        graph[3].add(new Edge(3, 5));
        graph[3].add(new Edge(3, 1));

        graph[4].add(new Edge(4, 2));
        graph[4].add(new Edge(4, 3));
        graph[4].add(new Edge(4, 5));

        graph[5].add(new Edge(5, 3));
        graph[5].add(new Edge(5, 4));
        graph[5].add(new Edge(5, 6));

        graph[6].add(new Edge(6, 5));

    }
    public static void bfss(ArrayList<Edge> graph[], int v,boolean visitor[],int start ){
        Queue<Integer> q = new LinkedList<>();
        q.add(start);
        while (!q.isEmpty()) {
            int curr=q.remove();
            if (visitor[curr]==false){
                System.out.print(curr + " ");
                visitor[curr] =true;
                for (int i=0;i<graph[curr].size();i++){
                    Edge e = graph[curr].get(i);
                    q.add(e.dest);
                }
            }
            
        }
    }

    public static void main(String[] args) {
        int V = 7;
/*
   1---3 
 /      | \
0       |   5----6
 \      |  /   
   2---4
 */

        ArrayList<Edge> graph[] = new ArrayList[V];
        createGraph(graph);
        boolean visitor[] = new boolean[V];
        for (int i=0;i<V;i++){
            if (visitor[i]==false){
                bfss(graph, V,visitor,i);
            }
        }
System.out.println();
    }
}