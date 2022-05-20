#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 9;

    int i = -1;
    int pivot  =0;
    for(int j=0;j<n;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    for(int k=0;k<n;k++){
        cout<<arr[k];
    }

    return 0;
}