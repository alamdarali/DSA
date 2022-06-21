#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int array[8] = {1, 5, 7, 4, 4, 8, 9, 7};
    int mx = INT_MIN;
    for(int i=0; i<8; i++){
        mx = max(mx, array[i]);
        cout<<mx<<" ";
    }
    return 0;
}
