#include "../include/Graph.h"
//#include <random>

#include <iostream>
#include <cstdlib>
using namespace std;
Graph::Graph(int n)
{
    this->n = n;
    //this->listVertex = new Vertex[n];
    //listVertex = new Vertex[n];
    listVertex = (Vertex*)malloc(sizeof(Vertex) * n);
    populateVertex(n);
}

int Graph::getRand(int rMin, int rMax)
{
    return rand() % 1000 ;//+ rMax;
}

void Graph::populateVertex(int n)
{

    for(int i = 0; i<n; i++)
    {
        int x = getRand(0, 100);
        int y = getRand(0, 100);
        //Vertex *v = new Vertex(fRand(0, 100), fRand(0, 100), i);
        Vertex *v = new Vertex(x, y, i+1);
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
