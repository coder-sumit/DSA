#include<bits/stdc++.h>
using namespace std;


  void isConnected(int **edges, int n, int sv, bool *visited){
      // base case
      visited[sv] = true;
      if(n <= 1){
          return;
      }
      for(int i =0; i<n; i++){
          if(edges[sv][i] && !visited[i]){
             isConnected(edges, n, i, visited);
          }
      }
  }

int main(){
   int v, e;
   cin>>v>>e;

   int **edges = new int *[v];
   for(int i =0; i<v; i++){
       edges[i] = new int[v];
       for(int j =0; j<v; j++){
           edges[i][j] = 0;
       }
   }

   for(int i = 0; i<e; i++){
       int f,e;
       cin>>f>>e;
       edges[f][e] = 1;
       edges[e][f] = 1;
   }

   bool *visited = new bool[v];
   for(int i =0; i<v; i++){
       visited[i] = false;
   }

   isConnected(edges, v,0, visited);
    int i =0;
   for(; i<v; i++){
       if(visited[i] == false){
           cout<<"false";
           break;
       }
   }

   if(i == v){
       cout<<"true";
   }
   return 0;
}