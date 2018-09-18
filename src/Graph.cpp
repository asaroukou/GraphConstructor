#include "../include/Graph.h"
#include <random>
#include <iostream>

using namespace std;
Graph::Graph(int n)
{
    this->n = n;
    //this->listVertex = new Vertex[n];
    Vertex *listVertex = new Vertex[n];
    generateVertex(n);
}

int Graph::fRand(int fMin, int fMax)
{

    return 1.0;
}

void Graph::generateVertex(int n)
{

    for(int i = 0; i<n; i++)
    {
        Vertex *v = new Vertex();
        listVertex[i] = *v;
    }

}

void Graph::showVertex()
{
    for(int i = 0; i < this->n ; i++)
    {
        this->listVertex[i].show();
        cout << endl;
    }

}
