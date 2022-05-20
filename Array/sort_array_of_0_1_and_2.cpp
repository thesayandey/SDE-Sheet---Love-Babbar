#include<bits/stdc++.h>
using namespace std;

void dnfSort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid] == 1){
            mid++;
        }
        if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void printArray(){

}

int main(){
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    dnfSort(arr,12);
    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}