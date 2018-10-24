#include <iostream>
#include <algorithm>
#include "include/Graph.h"
#include "include/Vertex.h"
#include <vector>
#include <map>

using namespace std;

int main()
{

 Graph *g1 = new Graph("/home/users/ambyassa/g1.txt");
/*
    Vertex *src = new Vertex(1, 10, 1);
    Vertex *dest = new Vertex(1, 2, 2);
    Edge *e1 = new Edge(src, dest, 15);
    e1->show();


    map <string, bool>SETUP{
        {"ORIENTED", true},
        {"SELF_LOOP",  true},
    };


    Graph *g1 = new Graph(4, SETUP);
    Vertex *v = new Vertex();
    g1->addVertex(*v);

    g1->showVertices();
    g1->showEdges();
    g1->addEdge(g1->verticesList[0], g1->verticesList[1], 18.5);
    g1->addEdge(g1->verticesList[2], g1->verticesList[3], 5.5);
    g1->addEdge(g1->verticesList[1], g1->verticesList[4], 0.5);
    g1->showEdges();
    cout << g1->findVertexById(2) << endl << g1->findVertexById(4) << endl << g1->findVertexById(8) <<endl;
    g1->showAdjMatrix();
*/

    //Vertex *i = find(g1->verticesList.begin(), g1->verticesList.end(), g1->verticesList[0]);
    //cout <<

    return 0;
}
