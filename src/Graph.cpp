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
        this->verticesList.push_back(*v);
    }
}

void Graph::addVertex(Vertex v)
{
    this->verticesList.push_back(v);
}

void Graph::addEdge(Edge e)
{
    this->edgesList.push_back(e);
}

void Graph::addEdge(Vertex src, Vertex dest, double weight)
{
    Edge *e = new Edge(src, dest, weight);
    this->edgesList.push_back(*e);
}

void Graph::showVertices()
{
    for(int i = 0; i < this->verticesList.size() ; i++)
    {
        this->verticesList[i].showItem();
        cout << endl;
    }
}

void Graph::showEdges()
{
    for(int i = 0; i < this->edgesList.size() ; i++)
    {
        this->edgesList[i].show();
        cout << endl;
    }
}
