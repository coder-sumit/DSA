#include<bits/stdc++.h>
using namespace std;

 vector<int> getBfs(int **edges, int n, int v1, int v2, bool *visited){
     queue<int> q;
     unordered_map<int, int> m;
     vector<int> v;
     q.push(v1);
     visited[v1] = true;
     m[v1] = -1;

     while(!q.empty()){
         int front = q.front();
         q.pop();

         
         if(front == v2){
             int insert_val = front;
             while(insert_val != -1){
                 v.push_back(insert_val);
                 insert_val = m[insert_val];
             }
         }

         for(int i =0; i<n; i++){
             if(edges[front][i] == 1 && visited[i] == false){
                 visited[i] = true;
                 m[i] = front;
                 q.push(i);
             }
         }
     }

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
   vector<int> vec = getBfs(edges, v, v1, v2, visited);
   for(int i =0; i<vec.size(); i++){
       cout<<vec[i]<<" ";
   }
   return 0;
}