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
        map <string, bool> config{
        {"IS_ORIENTED", true},
        {"ALLOW_SELF_LOOP",  true},
    };
        int graphSize;

        Graph(int n, map<string, bool> setup);
        Graph(string path);

        void showVertices();
        void showEdges();
        void showAdjMatrix();

        int findVertexById(int id);

        void addVertex(Vertex v);
        void addEdge(Vertex src, Vertex dest, double weight);
        void addEdge(Edge e);

        int getRand(int rMin, int rMax);

        void populateVertices();
        void populateEdges();
        void populateUGMatrix();
        void populateDGMatrix(bool self_loop);
        void matrixToEdgeList();
        void file2graph(string path);

    private:

};

#endif // GRAPH_H
