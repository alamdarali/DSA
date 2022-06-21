#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[8]= {2, 4, 5, 9, 7, 5, 3, 7};
    int current;
    int sum = 0;
    for(int i=0; i<8; i++){
        current = 0;
        for(int j=i; j<8; j++){
            current+=array[j];
            cout<<current<<endl;
            sum += current;
        }
    }
    cout<<sum;
    return 0;
}
