#ifndef EDGE_H
#define EDGE_H
#include "Vertex.h"

class Edge
{
    public:
        Vertex *src;
        Vertex *dest;
        double weight;

        Edge(Vertex *src, Vertex *dest, double weight);
        void show();
        virtual ~Edge();

    protected:

    private:
};

#endif // EDGE_H
