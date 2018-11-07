#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include "Edge.h"
#include "Vertex.h"
#include <map>

using namespace std;
class Graph
{
    public:

        vector<Edge>    edgesList;
        vector<Vertex>  verticesList;
        vector<vector<float>> adjMatrix;
        vector<vector<int>> adjList;
        map <string, bool> config{
        {"IS_ORIENTED", true},
        {"ALLOW_SELF_LOOP",  true},
    };
        int graphSize;
        char type;
        char representation;

        Graph(int n, map<string, bool> setup);
        Graph(string path);

        void showVertices();
        void showEdges();
        void showAdjMatrix();
        void showAdjList();

        int findVertexById(int id);

        void addVertex(Vertex v);
        void addEdge(Vertex src, Vertex dest, double weight);
        void addEdge(Edge e);

        int getRand(int rMin, int rMax);

        void populateVertices();
        void populateEdges();
        void matrixToList();
        void file2graph(string path);

    private:

};

#endif // GRAPH_H
