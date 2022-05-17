#include<bits/stdc++.h>
using namespace std;

vector<int> reverseArray(int arr[],int size){
    vector<int> newArray(size);
    newArray.clear();
    for(int i=size-1;i>=0;i--){
        newArray.push_back(arr[i]);
    }
    return newArray;
}

int main(){

    int arr[] = {1,2,3};
    vector<int> newArray(3);
    newArray = reverseArray(arr,3);
    for(auto it:newArray){
        cout<<it<<" ";
    }

    return 0;
}