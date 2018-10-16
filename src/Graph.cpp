#include "../include/Graph.h"
#include <vector>

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
Graph::Graph(int n, map <string, bool> setup)
{
    config = setup;
    graphSize = n;
    populateVertices();
    //populateUGMatrix();
    populateDGMatrix(true);
}


int Graph::getRand(int rMin, int rMax)
{
    return rand() % 1000 ;//+ rMax;
}

void Graph::populateVertices()
{
    for(int i = 0; i<graphSize; i++)
    {
        int x = getRand(0, 100);
        int y = getRand(0, 100);
        Vertex *v = new Vertex(x, y, i+1);
        this->verticesList.push_back(*v);
    }
}

void Graph::populateEdges()
{
    for(int i = 0; i<graphSize; i++)
    {
        int x = getRand(0, 100);
        int y = getRand(0, 100);
        Vertex *v = new Vertex(x, y, i+1);
        this->verticesList.push_back(*v);
    }
}

void Graph::populateUGMatrix()
{
    for(int i = 0; i < graphSize; i++)
    {
        adjMatrix.push_back(vector<int>(graphSize));
        for(int j = 0; j < graphSize; j++)
        {
            if(i > j){
                adjMatrix[i][j] = adjMatrix[j][i];
            } else if(i < j){
                rand() % 2 == 0 ? adjMatrix[i][j] = 0 : adjMatrix[i][j] = 1;
            }else {
                adjMatrix[i][j] = 0;
            }
        }
    }
}

void Graph::populateDGMatrix(bool self_loop)
{
    for(int i = 0; i < graphSize; i++)
    {
        adjMatrix.push_back(vector<int>(graphSize));
        for(int j = 0; j < graphSize; j++)
        {
            if((i == j) && self_loop)
                adjMatrix[i][j] = 1;
            else
                rand() % 2 == 0 ? adjMatrix[i][j] = 0 : adjMatrix[i][j] = 1;
        }
    }
}

void Graph::matrixToEdgeList()
{

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

void Graph::showAdjMatrix()
{
    cout << "Matrice d'adjacence : taille : " << adjMatrix.size() << endl;
    for(int i = 0; i < adjMatrix.size(); i++)
    {
        for(int j = 0; j < adjMatrix[i].size(); j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
    cout << endl;
    }
}

int Graph::findVertexById(int id)
{
    for(int i = 0; i < verticesList.size(); i++)
        if(verticesList[i].id == id)
            return i;
    return -1;
}

void Graph::showEdges()
{
    for(int i = 0; i < this->edgesList.size() ; i++)
    {
        this->edgesList[i].show();
        cout << endl;
    }
}

void Graph::file2graph(){

}
