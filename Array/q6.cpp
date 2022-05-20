#include<bits/stdc++.h>
using namespace std;

int mian(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3};
    set<int> s;
    for(int i=0;i<5;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<3;i++){
        s.insert(arr2[i]);
    }
    cout<<s.size();

    return 0;
}