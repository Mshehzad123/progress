package GraphInDsa;

import java.util.ArrayList;

public class AdjacencyList {
    static class Edge{
        int src;
        int dest;
        int weight;
        // for waited graph 
        public Edge(int s, int d,int weight){
            this.src=s;
            this.dest=d;
            this.weight=weight;
        }
    }
    public static void createGraph(ArrayList<Edge> graph[]){
        for (int i=0;i<graph.length;i++){
            graph[i]= new ArrayList<>();
        }
        graph[0].add(new Edge(0, 2,2));
        graph[1].add(new Edge(1, 2,2));
        graph[1].add(new Edge(1, 3,3));
        graph[2].add(new Edge(2, 0,0));
        graph[2].add(new Edge(2, 3,3));
        graph[2].add(new Edge(2, 1,1));
        graph[3].add(new Edge(3, 2,2));
        graph[3].add(new Edge(3, 1,1));
    }
    public static void main(String[] args) {
        int V= 4;
        ArrayList<Edge> graph[] = new ArrayList[V];
        //print the neighbours of 2?
        createGraph(graph);
        for (int i=0;i<graph[2].size();i++){
            Edge  e = graph[2].get(i);
            System.out.println(e.dest + " ,"+ e.weight);
        }
    }


}