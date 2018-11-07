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
    if(this->representation == 'M')
    {
        for(int i = 0; i<adjMatrix.size(); i++)
        {
            for(int j = 0; j<adjMatrix[i].size(); j++)
            {
                if(adjMatrix[i][j] != 0)
                {
                    Edge *e = new Edge(verticesList[i], verticesList[j], adjMatrix[i][j]);
                    edgesList.push_back(*e);
                }
            }
        }
    }
}


void Graph::matrixToList()
{

    for(int i = 0; i<adjMatrix.size(); i++)
    {
        adjList.push_back(vector<int>(graphSize));
        for(int j = 0; j<adjMatrix[i].size(); j++)
        {
            if(adjMatrix[i][j] != 0)
            {
                adjList[i][j] = j+1;
            }
        }
    }
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
    cout << endl << "Liste des vertex"<< endl;
    for(int i = 0; i < this->verticesList.size() ; i++)
    {
        this->verticesList[i].showItem();
        cout << endl;
    }
}

void Graph::showAdjMatrix()
{
    cout << endl << "Matrice d'adjacence : taille : " << adjMatrix.size() << endl;
    for(int i = 0; i < adjMatrix.size(); i++)
    {
        for(int j = 0; j < adjMatrix[i].size(); j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
    cout << endl;
    }
}

void Graph::showAdjList()
{
    cout << endl << "Liste d'adjacence"<< endl;
    for(int i = 0; i < adjList.size(); i++)
    {
        cout << i+1 << " : ";
        for(int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << "-";
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
    cout << endl << "Liste des edges"<< endl;
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

        string ligne;
        int ln = 0;
        int i = 0;
        while(getline(fichier, ligne)){
            ln++;
            if(ln == 1)
                this->graphSize = stoi(ligne);
            else if(ln == 2)
                this->type = ligne[0];
            else if(ln == 3)
                this->representation = ligne[0];
            else
            {
                if(this->representation == 'M')
                {
                    vector<string> results;
                    boost::split(results, ligne, [](char c){return c == ',';});
                    adjMatrix.push_back(vector<float>(graphSize));
                    for(int j = 0; j < adjMatrix[i].size(); j++){
                        adjMatrix[i][j] = stof(results[j]);
                    }
                    i++;
                }
                else ;
            }


        }
        fichier.close(); // on ferme le fichier
    }
    else  // sinon
        cerr << "Impossible d'ouvrir le fichier !" << endl;
}
