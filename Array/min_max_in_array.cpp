#include<bits/stdc++.h>
using namespace std;

int findMinMax(int arr[],int size){
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<max<<" "<<min;
}

int main(){
    int arr[] = {1,2,3,4,5};
    findMinMax(arr,5);
    return 0;
}