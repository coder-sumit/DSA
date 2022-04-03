#include<bits/stdc++.h>
using namespace std;


// DFS - Depth First Search
void graph_dfs(int **edges, int n, int sv, bool *visited){

      cout<<sv<<" ";
      visited[sv] = true;

      // checking for connected & not visited vertices to sv
      for(int i =0; i<n; i++){
          if(edges[sv][i] == 1 && visited[i] == false){
              graph_dfs(edges, n, i, visited);
          }
      }
}

// BFS - Bredth First Search
void graph_bfs(int **edges, int n, bool *visited){
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while (q.size() != 0)
    {
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        // checking for front's connected & not visited vertices
        for(int i =0; i<n; i++){
            if(edges[front][i] == 1 && visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
    
}

int main(){

    int v,e;
    cin>>v>>e;

    // creating 2D array for adjacency matrix
    int **edges = new int*[v];
    for(int i =0; i<v; i++){
        edges[i] = new int[v];
        for(int j =0; j<v; j++){
            edges[i][j] = 0;
        }
    }

    // entering edges
    for(int i =0; i<e; i++){
        int f,e;
        cin>>f>>e;
        edges[f][e] = 1;
        edges[e][f] = 1;
    }

    // creating visited array to have a track of visited vertex
    bool *visited = new bool[v];
    for(int i =0; i<v; i++){
        visited[i] = false;
    }

    graph_dfs(edges, v, 0, visited);


    // resetting values of visited
    for(int i =0; i<v; i++){
        visited[i] = false;
    }
    cout<<endl;
    graph_bfs(edges, v, visited);

    // deleting memony
    delete [] visited;
    for(int i =0; i<v; i++){
        delete [] edges[i];
    }
    delete [] edges;

   return 0;
}