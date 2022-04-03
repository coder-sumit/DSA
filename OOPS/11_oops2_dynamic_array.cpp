// Dynamic array

#include<bits/stdc++.h>
using namespace std;

class dyna_arr{
     int *data;
     int nxtIndex;
     int capacity;

     public:


     

     dyna_arr(){
         data = new int[5];
         capacity = 5;
         nxtIndex = 0;
     }
     // copy constructor with deep copy
     dyna_arr(dyna_arr const &arr){
         this->capacity = arr.capacity;
         this->nxtIndex = arr.nxtIndex;
         this->data = new int[arr.capacity];
         for(int i =0; i<arr.capacity; i++){
             this->data[i] = arr.data[i];
         }
     }

     // copy assigment operator
     void operator=(dyna_arr const &arr){
         this->capacity = arr.capacity;
         this->nxtIndex = arr.nxtIndex;
         this->data = new int[arr.capacity];
         for(int i =0; i<arr.capacity; i++){
             this->data[i] = arr.data[i];
         }
     }

     void add(int ele){
         if(nxtIndex < capacity){
             data[nxtIndex] = ele;
             nxtIndex++;
         }else{
             int *arr = new int[capacity*2];
             for(int i =0; i<capacity; i++){
                 arr[i] = data[i];
             }
             int *temp = data;
             data = arr;
             capacity *=2;
             data[nxtIndex] = ele;
             nxtIndex++;
             delete [] temp;
         }
     }

     void add(int i, int ele){
         if(i < nxtIndex){
             data[i] = ele;
         }else if(i == nxtIndex){
             add(ele);
         }else{
             return;
         }
     }

     void print(){
         for(int i =0; i<nxtIndex; i++){
             cout<<data[i]<<" ";
         }
         cout<<endl;
     }


};

int main(){

    dyna_arr a;
    a.add(10);
    a.add(20);
    a.add(30);
    a.add(40);
    a.add(50);
    a.add(60);
    a.add(70);
    a.add(80);
    a.add(90);
    a.add(100);
    a.add(110);
    a.add(120);

    a.add(5, 1000);
    a.add(12,130);
    dyna_arr b(a);
    b.add(0,45);
    dyna_arr c = b;
    c.add(1, 0);

    a.print();

    b.print();

    c.print();

   
   return 0;
}