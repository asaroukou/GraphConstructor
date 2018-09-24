#ifndef GRAPH_H
#define GRAPH_H
#include "Edge.h"
#include "Vertex.h"



using namespace std;

class Graph
{
    public:
        Edge    *listEdge;
        Vertex  *listVertex;
        int     **adj;
        int     n;
        Graph(int n);
        void showVertex();
        int getRand(int rMin, int rMax);
        void populateVertex(int n);
    private:

};

#endif // GRAPH_H
