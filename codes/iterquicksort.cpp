#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;

    for (int j=low;j<=high-1;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void iterquicksort(vector<int>& arr, int low , int high) {


    while (low < high) {
        int par = partition(arr, low, high);

        if (par - low < high - par) {
            low = par + 1;
        } else {
            high = par - 1;
        }
    }
}
int main(){
    vector<int> arr;
    int x;
    while (cin>>x){
        arr.push_back(x);
    }
    int n=arr.size();
    iterquicksort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}