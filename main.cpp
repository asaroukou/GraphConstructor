#include <iostream>
#include "include/Graph.h"
#include "include/Vertex.h"


using namespace std;

int main()
{

/*
    Vertex *src = new Vertex(1, 10, 1);
    Vertex *dest = new Vertex(1, 2, 2);
    Edge *e1 = new Edge(src, dest, 15);
    e1->show();
*/

    Graph *g1 = new Graph(4);
    Vertex *v = new Vertex();
    g1->addVertex(*v);

    g1->showVertices();
    g1->showEdges();
    g1->addEdge(g1->verticesList[0], g1->verticesList[1], 18.5);
    g1->addEdge(g1->verticesList[2], g1->verticesList[3], 5.5);
    g1->addEdge(g1->verticesList[1], g1->verticesList[4], 0.5);
    g1->showEdges();

    return 0;
}
