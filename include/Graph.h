#ifndef GRAPH_H
#define GRAPH_H


class Graph
{
    public:
        Graph()
        {

        };

    private:
        Edge    *listEdge;
        Vertex  *listVertex;
        double  **mapper;
};

class Edge
{
    public:
        Edge();
    private
        Vertex src;
        Vertex dest;
        double weight;
};


class  Vertex
{
    public:
        Vertex(double x, double y, int id)
        {

        };
    private:
        //static int i;
        double x;
        double y;
        int id;
};
#endif // GRAPH_H
