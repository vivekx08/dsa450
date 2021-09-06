/*
  Find the "Kth" max and min element of an array.
  1.  Sort.
  2.  Set.
  3.  MinHeap.
  4.  MaxHeap.
  5.  QuickSelect.
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int getKth_min(int arr[], int size, int k){
    priority_queue<int> maxHeap(arr, arr+k);
    
    for(int i=k; i<size; i++){
        if(maxHeap.top() > arr[i]){
            maxHeap.pop();
            maxHeap.push(arr[i]);
        }
    }
    return maxHeap.top();
}

int main(){
    
    int arr[] = {1,2,3,18,-1,6};
    int size = 6;
    int k = 6;
    
    int ans = getKth_min(arr, size, k);
    cout<<"min = "<<ans<<endl;
    
    return 0;
}
