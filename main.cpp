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
    Graph *g1 = new Graph(5);
    g1->showVertex();
    return 0;
}
