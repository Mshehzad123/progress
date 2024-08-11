package GraphInDsa;
import java.util.ArrayList;
import java.util.PriorityQueue;
public class DijkstrasAlgo {
static class Edge{
    int src;
    int dest;
    int weight;
    public Edge(int s, int d, int w){
        this.dest=d;
        this.src=s;
        this.weight=w;
    }
}
public static void CreateGraph(ArrayList<Edge> graph[]){
    for (int i=0;i<graph.length;i++){
        graph[i] = new ArrayList<>();
    }
    graph[0].add(new Edge(0, 1, 2));
graph[0].add(new Edge(0, 2, 4));
graph[1].add(new Edge(1, 3, 7));
graph[1].add(new Edge(1, 2, 1));
graph[2].add(new Edge(2, 4, 3));
graph[3].add(new Edge(3, 5, 1));
graph[4].add(new Edge(4, 3, 2));
graph[4].add(new Edge(4, 5, 5));
}
static class Pair implements Comparable<Pair>{
    int n;
    int path;
    public Pair(int n, int p){
        this.path=p;
        this.n=n;
    }
    @Override
    public int compareTo(Pair p2){
        return this.path - p2.path;
    }
}
public static void distance(ArrayList<Edge> garph[] , int src , int V){
    PriorityQueue<Pair>  pq = new PriorityQueue<>();
    boolean visitor[] = new boolean[garph.length];
    int dist[] = new int[garph.length];
    for (int i=0;i<garph.length;i++){
        if (i != src){
            dist[i] = Integer.MAX_VALUE;
        }
    }
pq.add(new Pair(src, 0));
while (!pq.isEmpty()) {
    Pair curr = pq.remove();
    if (!visitor[curr.n]){
        visitor[curr.n] = true;
    
    for (int i=0;i<garph[curr.n].size();i++){
        Edge e = garph[curr.n].get(i);
        int u = e.src;
        int v = e.dest;
        if (!visitor[v] && dist[u] + e.weight < dist[v]){
            dist[v] = dist[u] + e.weight;
            pq.add(new Pair(v, dist[v]));
        }
    }
}
}
for (int i=0;i<V;i++){
    System.out.println(dist[i] +  " ");
}
System.out.println();
}
    public static void main(String[] args) {
        int v=6;
        ArrayList<Edge> graph[] = new ArrayList[v];
        CreateGraph(graph);
        // int src = 0;
        // int dsit[] = distance(graph, src);
        // for (int i=0;i<dsit.length;i++){
        //     System.out.println(dsit[i] +  " ");
        // }
        distance(graph, 0, v);
    }
}