#include "../include/Graph.h"
#include <vector>

#include <iostream>
#include <cstdlib>
using namespace std;
Graph::Graph(int n)
{
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
        this->listVertex.push_back(*v);
    }
}

void Graph::addItem(Vertex v)
{
    this->listVertex.push_back(v);
}

void Graph::addItem(Edge v)
{

}
void Graph::showVertex()
{
    for(int i = 0; i < this->listVertex.size() ; i++)
    {
        this->listVertex[i].showItem();
        cout << endl;
    }

}
