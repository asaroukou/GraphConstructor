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
    src->show();
    cout << " --------" << weight << "----------> ";
    dest->show();
    cout << endl;

}
Edge::~Edge()
{
    //dtor
}
