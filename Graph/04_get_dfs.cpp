#include<bits/stdc++.h>
using namespace std;
   
   vector<int> getDfs(int **edges, int n , int v1, int v2, bool *visited){
       // base case
       if(v1 == v2){
           vector<int> v;
           v.push_back(v1);
           return v;
       }

       visited[v1] = true;
       for(int i =0; i<n; i++){
           if(edges[v1][i] == 1 && visited[i] == false){
               vector<int> v = getDfs(edges, n, i, v2, visited);
               if(v.size() > 0){
                   v.push_back(v1);
                   return v;
               }
           }
       }

       vector<int> v;
       return v;
   }


int main(){
   int v, e;
   cin>>v>>e;
   int **edges = new int*[v];
   for(int i =0; i<v; i++){
       edges[i] = new int[v];
       for(int j =0; j<v; j++){
           edges[i][j]= 0;
       }
   }
   for(int i =0; i<e; i++){
       int f,e;
       cin>>f>>e;
       edges[f][e] = 1;
       edges[e][f] = 1;
   }
   bool *visited = new bool[v];
   for(int i =0; i<v; i++){
       visited[i] = false;
   }

   int v1,v2;
   cin>>v1>>v2;
   vector<int> vec = getDfs(edges, v, v1, v2, visited);
   for(int i =0; i<vec.size(); i++){
       cout<<vec[i]<<" ";
   }
   return 0;
}