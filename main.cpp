#include <iostream>
#include <algorithm>
#include "include/Graph.h"
#include "include/Vertex.h"
#include <vector>

using namespace std;

int main()
{

    vector <vector<int>>matrix(10, vector<int>(10));




     for(int i = 0; i < matrix.size(); i++)
        for(int j = 0; j < matrix[i].size(); j++)
        {
            if(i > j){
                matrix[i][j] = matrix[j][i];
            } else if(i < j){
                rand() % 2 == 0 ? matrix[i][j] = 0 : matrix[i][j] = 1;
            }else {
                matrix[i][j] = 0;
            }
        }



    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
    cout << endl;
    }

/*
    Vertex *src = new Vertex(1, 10, 1);
    Vertex *dest = new Vertex(1, 2, 2);
    Edge *e1 = new Edge(src, dest, 15);
    e1->show();
*/
/*
    Graph *g1 = new Graph(4);
    Vertex *v = new Vertex();
    g1->addVertex(*v);

    g1->showVertices();
    g1->showEdges();
    g1->addEdge(g1->verticesList[0], g1->verticesList[1], 18.5);
    g1->addEdge(g1->verticesList[2], g1->verticesList[3], 5.5);
    g1->addEdge(g1->verticesList[1], g1->verticesList[4], 0.5);
    g1->showEdges();
*/
    //Vertex *i = find(g1->verticesList.begin(), g1->verticesList.end(), g1->verticesList[0]);
    //cout <<

    return 0;
}
