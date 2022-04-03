#include<bits/stdc++.h>
using namespace std;


int find_min_vertex(int *weights, bool *visited, int n){
     int ans = -1;
     for(int i = 0; i<n; i++){

         if(visited[i] == false && ( ans == -1 || weights[i] < weights[ans])){
             ans = i;
         }
     }

     return ans;
}


void prims_algo(int **edge, int n){
    int *parent = new int[n];
    int *weight = new int[n];
    bool *visited = new bool[n];
    
    // initialization
    for(int i = 0; i<n; i++){
        parent[i] = -1;
        visited[i] = false;
        if(i == 0){
            weight[i] = 0;
        }else{
            weight[i] = INT_MAX;
        }
    }

    // prims logic
    for(int i =0; i<n; i++){
        int min_vertex = find_min_vertex(weight, visited, n);
        visited[min_vertex] = true;
        
        for(int j =0; j<n; j++){
            if(edge[min_vertex][j] != 0 && visited[j] == false){
                int edge_weight = edge[min_vertex][j];
                if(edge_weight < weight[j]){
                    weight[j] = edge_weight;
                    parent[j] = min_vertex;
                }
            }
        }
    }

    // printing
    for(int i =1; i<n; i++){
        if(i < parent[i]){
        cout<<i<<" "<<parent[i]<<" "<<edge[i][parent[i]]<<endl;
        }else{
            cout<<parent[i]<<" "<<i<<" "<<edge[i][parent[i]]<<endl;
        }
    }

}

int main(){
   int v,e;
   cin>>v>>e;

   int **edge = new int*[v];
   for(int i =0; i<v; i++){
       edge[i] = new int [v];
       for(int j =0; j<v; j++){
           edge[i][j] = 0;
       }
   }

   for(int i =0; i<e; i++){
       int sv, ev, w;
       cin>>sv>>ev>>w;

       edge[sv][ev] = w;
       edge[ev][sv] = w;

   }

   prims_algo(edge, v);

   // delete
   for(int i =0; i<v; i++){
       delete [] edge[i];
   }
   delete [] edge;


   return 0;
}