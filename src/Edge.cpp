#include "../include/Edge.h"
#include <iostream>


using namespace std;
Edge::Edge(Vertex *src, Vertex *dest, double weight)
{
    this->src = src;
    this->dest = dest;
    this->weight = weight;
}

void Edge::show()
{
    src->showItem();
    cout << " --------" << weight << "----------> ";
    dest->showItem();
    cout << endl;

}
Edge::~Edge()
{
    //dtor
}
