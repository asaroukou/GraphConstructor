#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include "Edge.h"
#include "Vertex.h"


using namespace std;
class Graph
{
    public:

        vector<Edge>    edgesList;
        vector<Vertex>  verticesList;
        vector<vector<int>> adjMatrix;

        Graph(int n);

        void showVertices();
        void showEdges();

        void addVertex(Vertex v);
        void addEdge(Vertex src, Vertex dest, double weight);
        void addEdge(Edge e);

        int getRand(int rMin, int rMax);
        void populateVertex(int n);
    private:

};

#endif // GRAPH_H
