#include <bits/stdc++.h>
using namespace std;

class edge
{
public:
    int sv;
    int ev;
    int w;
    edge()
    {
    }
    edge(int sv, int ev, int w)
    {
        this->sv = sv;
        this->ev = ev;
        this->w = w;
    }

    void print()
    {
        cout << min(sv, ev) << " " << max(ev, sv) << " " << w << endl;
    }
};

// compare function to sort input by weight
bool comp(edge *a, edge *b){
    return a->w < b->w;
}

// get parent function

int getParent(int *parent, int num){

    while(parent[num] != num){
        num = parent[num];
    }
    return num;

}

// print output MST- minimum spanning tree
void print_output(edge **input, int v, int e){
    edge **output = new edge*[v-1];
    int parent[v];
    for(int i =0; i<v; i++){
        parent[i] = i;
    }
    int count = 0;
    int i = 0;
    int j = 0;
    while(count != v-1){
      edge *temp = input[i];

      int p1 = getParent(parent, temp->sv);
      int p2 = getParent(parent, temp->ev);

      if(p1 != p2){
         output[j] = input[i];
         j++;
         count++;
         parent[p1] = p2;
      }
        i++;

    }

    // print output arr
    for(int i =0; i<v-1; i++){
        output[i]->print();
    }
}

int main()
{

    // taking graph input by edge list
    int v, e;
    cin >> v >> e;

    edge **input = new edge *[e];

    for (int i = 0; i < e; i++)
    {
        int sv, ev, w;
        cin >> sv >> ev >> w;
        edge *temp = new edge(sv, ev, w);
        input[i] = temp;
    }

    sort(input, input+e, comp);

    print_output(input, v, e);



    return 0;
}

