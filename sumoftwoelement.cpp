// find sum of two element in array equal to key
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[8] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    int n = 8;

    int start = 0;
    int end = n-1;
    int tot = 0;
    while(start<end){
        tot = arr[start] + arr[end];
        if(tot==k){
            cout<<start<<" "<<end<<endl;
            break;
        }
        else if(tot < k){
            start++;
        }
        else{
            end--;
        }
    }
    return 0;
}
