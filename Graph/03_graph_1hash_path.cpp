#include<bits/stdc++.h>
using namespace std;

bool hashpath(int **edges, int n, int v1, int v2, bool *visited){

    // base case
    if(v1 == v2){
        return true;
    }
    if(edges[v1][v2] == 1){
        return true;
    }

    visited[v1] = true;
    for(int i =0; i<n; i++){
          if(edges[v1][i] == 1 && visited[i] == false){
              if(hashpath(edges, n, i, v2, visited)){
                  return true;
              }
          }
    }

    return false;
   
}

int main(){
   int v,e;
   cin>>v>>e;

   int **edges = new int*[v];
   for(int i =0; i<v; i++){
       edges[i] = new int[v];
       for(int j =0; j<v; j++){
           edges[i][j] =0;
       }
   }

   for(int i =0; i<e; i++){
       int f,e;
       cin>>f>>e;
       edges[f][e] = 1;
       edges[e][f] = 1;
   }

   // visited
   bool *visited = new bool[v];
   for(int i =0; i<v; i++){
       visited[i] = false;
   }
   cout<<"starting and ending vertex\n";
   int v1, v2;
   cin>>v1>>v2;

   
   hashpath(edges, v, v1, v2, visited)?cout<<"true":cout<<"false";


   return 0;
}