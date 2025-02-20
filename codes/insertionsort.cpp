#include <iostream>
using namespace std;
#include <vector>

void insertionsort(vector<int>& arr){
   int n=arr.size();
   for(int j=1;j<n;j++){
    int key=arr[j];
    int i=j-1;
    while(i>=0 && arr[i]>key){
        swap(arr[i],arr[i+1]);
        i=i-1;
    }
    arr[i+1]=key;
   } 
}

int main(){
   vector<int> a={54,26,93,17,77,31,44,55,20};
   insertionsort(a);
   for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
   } 
}