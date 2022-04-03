#include<bits/stdc++.h>
using namespace std;


int minDistance(int *distance, bool *visited, int n){
    int ans = -1;
    for(int i =0; i<n; i++){
        if(!visited[i] && (ans ==-1 || distance[i] < distance[ans])){
            ans = i;
        }
    }
    return ans;
}


void dikstra_algo(int **edges, int n){
    int *distance = new int[n];
    bool *visited = new bool[n];

    for(int i =0; i<n; i++){
        distance[i] = INT_MAX;
        visited[i] = false;

    }
    distance[0] = 0;

    for(int i =0; i<n; i++){
        int min_dis = minDistance(distance, visited, n);
        visited[min_dis] = true;

        for(int j =0; j<n; j++){
            if(!visited[j] && edges[min_dis][j]){
                int new_distance = distance[min_dis] + edges[min_dis][j];
                if(distance[j] > new_distance){
                    distance[j] = new_distance;
                }
            }
        }
    }

    // print
    for(int i =0; i<n; i++){
        cout<<i<<" "<<distance[i]<<endl;
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

   dikstra_algo(edge, v);

     // delete
   for(int i =0; i<v; i++){
       delete [] edge[i];
   }
   delete [] edge;
   return 0;
}