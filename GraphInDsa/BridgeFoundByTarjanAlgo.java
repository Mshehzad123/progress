package GraphInDsa;
import java.util.ArrayList;
public class BridgeFoundByTarjanAlgo {
    static class Edge {
int src;
int dest;
public Edge(int s, int d) {
this.src = s;
this.dest = d;
}
}
public static void createGraph(ArrayList<Edge> graph[]) {
for(int i=0; i<graph.length; i++) {
graph[i] = new ArrayList<Edge>();
}
graph[0].add(new Edge(0, 1));
graph[0].add(new Edge(0, 2));
graph[0].add(new Edge(0, 3));
graph[1].add(new Edge(1, 0));
graph[1].add(new Edge(1, 2));
graph[2].add(new Edge(2, 1));
graph[2].add(new Edge(2, 0));
graph[3].add(new Edge(3, 4));
graph[3].add(new Edge(3, 0));
graph[3].add(new Edge(3, 5));
graph[4].add(new Edge(4, 3));
graph[4].add(new Edge(4, 5));
graph[5].add(new Edge(5, 3));
graph[5].add(new Edge(5, 4));
}
public static void dfs(ArrayList<Edge> graph[], int curr, int par, boolean vis[], int
dt[], int low[], int time) {
vis[curr] = true;
dt[curr] = low[curr] = ++time;
for(int i=0; i<graph[curr].size(); i++) {
Edge e = graph[curr].get(i);
if(e.dest == par)
continue;
if(vis[e.dest]) {
low[curr] = Math.min(low[curr], dt[e.dest]);
} else {
dfs(graph, e.dest, curr, vis, dt, low, time);
low[curr] = Math.min(low[curr], low[e.dest]);
if(dt[curr] < low[e.dest]) {
System.out.println("BRIDGE : " + curr + "---" + e.dest);
}
}
}
}
public static void getBridge(ArrayList<Edge> graph[], int V) {
    int dt[] = new int[V];
    int low[] = new int[V];
    int time = 0;
    boolean vis[] = new boolean[V];
    for(int i=0; i<V; i++) {
    if(!vis[i]) {
    dfs(graph, i, -1, vis, dt, low, time);
    }
    }
    }
    public static void main(String[] args) {
        int v=6;
        ArrayList<Edge> graph[] = new ArrayList[v];
        createGraph(graph);
        getBridge(graph, v);
    }    
}

