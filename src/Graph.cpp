#include "../include/Graph.h"
#include <random>
#include <iostream>

using namespace std;
Graph::Graph(int n)
{
    this->n = n;
    //this->listVertex = new Vertex[n];
    this->listVertex = this->generateVertex(n);
}

int Graph::fRand(int fMin, int fMax)
{

    return 1.0;
}

Vertex* Graph::generateVertex(int n)
{
    Vertex *vertices[n];
    for(int i = 0; i<n; i++)
    {
        vertices[i] = new Vertex(0, 0, 0);
    }
    return *vertices;
}

void Graph::showVertex()
{
    for(int i = 0; i < this->n ; i++)
    {
        this->listVertex[i].show();
        cout << endl;
    }

}
