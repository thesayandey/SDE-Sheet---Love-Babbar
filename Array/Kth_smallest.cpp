#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int k = 3;
    int n = 7;
    sort(arr,arr+n);
    cout<<arr[k-1];
}