#include "../include/Vertex.h"
#include <iostream>


using namespace std;
Vertex::Vertex(int x, int y, int id)
{
    this->x = x;
    this->y = y;
    this->id = id;
}

void Vertex::show()
{
    cout  << id << " : " << "("<< x << ", " << y << ")";
}

Vertex::~Vertex()
{
    //dtor
}
