#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;

    for (int j=low;j<=high-1;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}

void quicksort(vector<int> &arr,int low,int high){
    if (low<high){
        int par=partition(arr,low,high);

        quicksort(arr,low,par-1);
        quicksort(arr,par+1,high);

    }
}

int main(){
    vector<int> arr;
    int x;
    while (cin>>x){
        arr.push_back(x);
    }
    int n=arr.size();
    quicksort(arr,0,n-1);

    int mid=n/2;

    if (n%2==0){
        double m=(arr[mid] + arr[mid-1])/2.0;
        cout<<m;
    }
    else {
        double m=arr[mid];
        cout<<m;
    }
    return 0;
}