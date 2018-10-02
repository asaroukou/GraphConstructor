#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include "Edge.h"
#include "Vertex.h"


using namespace std;
class Graph
{
    public:

        vector<Edge>    listEdge;
        vector<Vertex>  listVertex;
        vector<vector<int>> adjMatrix;

        Graph(int n);

        void showVertex();
        void addItem(Vertex v);
        void addItem(Edge e);

        int getRand(int rMin, int rMax);
        void populateVertex(int n);
    private:

};

#endif // GRAPH_H
