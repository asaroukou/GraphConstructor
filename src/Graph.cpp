#include "../include/Graph.h"
#include <vector>
#include <boost/algorithm/string.hpp>
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

Graph::Graph(string path)
{
    file2graph(path);
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
        adjMatrix.push_back(vector<float>(graphSize));
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
        adjMatrix.push_back(vector<float>(graphSize));
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

void Graph::file2graph(string path){
    ifstream fichier(path, ios::in);  // on ouvre le fichier en lecture
    if(fichier)  // si l'ouverture a réussi
    {
        char type;
        char representation;
        string ligne;
        int ln = 0;
        int i = 0;
        while(getline(fichier, ligne)){
            ln++;
            if(ln == 1)
                this->graphSize = stoi(ligne);
            else if(ln == 2)
                type = ligne[0];
            else if(ln == 3)
                representation = ligne[0];
            else
            {
                if(representation == 'M')
                {
                    vector<string> results;
                    boost::split(results, ligne, [](char c){return c == ',';});
                    adjMatrix.push_back(vector<float>(graphSize));
                    for(int j = 0; j < adjMatrix.size(); j++){
                        adjMatrix[i][j] = stof(results[j]);
                    }
                    i++;
                }
                else ;
            }




        }
        fichier.close();
        this->showAdjMatrix(); // on ferme le fichier
    }
    else  // sinon
        cerr << "Impossible d'ouvrir le fichier !" << endl;
}
