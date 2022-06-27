#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;


int main(){

    //user input matrix
    /*int a;
    int b;
    cin>>a>>b;
    int arr[a][b];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
    }*/

    //static matrix
    int a = 4;
    int b = 4;
    int arr[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int key;
    cin>>key;
    int i = 0;
    int j = 0;
    bool flag = 0;
    while(i<=a && j<=b){
        if(arr[i][j] == key){
            flag = 1;
            break;
        }
        else if(arr[i][j] > key){
            if(i == a-1){
                j--;
            }
            else{
                j--;
                i++;
            }
        }
        else{
            if(j== b-1){
                j = 0;
                i++;
            }
            else {
                j++;
            }
        }
    }

    if(flag == 1){
        cout<<" found";
    }
    else{
        cout<<"not found";
    }

    
    
    return 0;
}
