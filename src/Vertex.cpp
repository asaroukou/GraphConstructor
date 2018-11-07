#include "../include/Vertex.h"
#include <iostream>


using namespace std;
Vertex::Vertex(int x, int y, int id)
{
    this->x = x;
    this->y = y;
    this->id = id;
}

void Vertex::showItemDetail()
{
    cout  << id << " : " << "("<< x << ", " << y << ")";
}

void Vertex::showItem()
{
    cout  << "["<< id << "]";
}

Vertex::~Vertex()
{
    //dtor
}
