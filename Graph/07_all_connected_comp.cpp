#include<bits/stdc++.h>
using namespace std;

   vector<int> print_dfs(int **edges, int n, int sv, bool *visited){

       vector<int> v;
       queue<int> q;
       q.push(sv);
       visited[sv] = true;

       while (!q.empty())
       {
           int front = q.front();
           q.pop();
           v.push_back(front);

          for(int i =0; i<n; i++){
              if(edges[front][i] && !visited[i]){
                  visited[i] = true;
                  q.push(i);
              }
          }
       }

       return v;
             
  
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

   for(int i =0; i<v; i++){
       if(visited[i] == false){
           vector<int> vec = print_dfs(edges, v, i, visited);
           sort(vec.begin(), vec.end());
           for(int j =0; j<vec.size(); j++){
                cout<<vec[j]<<" ";
           }
           cout<<endl;
       }
   }
   return 0;
}