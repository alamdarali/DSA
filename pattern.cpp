#include<iostream>
using namespace std;

int main(){
  /* full box
    * * * *
    * * * *
    * * * * 
    * * * *
    */
    for(int i = 0; i<5; i++){
        for(int j = 0; j < 5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
  
    /*box
    * * * *
    *     *
    *     * 
    * * * *
    */
    for(int i = 0; i<5; i++){
        for(int j = 0; j < 6; j++){
            if(i== 0 || j == 0 ||i == 4 || j == 5){
               cout<<"* "; 
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    /* floyd triangle
    1
    23
    456
    78910
    1112131415
    161718192021 
    */
    int n = 5;
    int x = 1;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i ; j++){
           cout<<x;
           x++;
        }
        cout<<endl;
    } 
   /*
    left half pyramid
    *
    **
    ***
    ****
    *****
    ******
    */
    int n = 5;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i ; j++){
           cout<<"*";
        }
        cout<<endl;
    }

    /*
    left half pyramid
         *
        **
       ***
      ****
     *****
    ******
    */
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n ; j++){
           if(j < n-i ){
            cout<<" ";
           }
           else{
            cout<<"*";
           }
        }
        cout<<endl;
    } 
    /*
    left half pyramid
         *
        **
       ***
      ****
     *****
    ******
    */
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n ; j++){
           if(j < n-i ){
            cout<<" ";
           }
           else{
            cout<<"*";
           }

        }
    }
  /* butterfly
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    */
    for(int i=0; i<5; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        int space = 2*4-2*i;
        for(int j=0; j<space; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        int space = 2*5-2*i;
        for(int j=0; j<space; j++){
            cout<<" ";
        }
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
  /*
    01234
    0123
    012
    01
    0
    */
    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<j;
        }
        cout<<endl;
    }
  /*
    1
    01
    101
    0101
    10101
    */
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            if((i+j) % 2 == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
  /*
        *****
       *****
      *****
     *****
    *****
    */
    for(int i=0; i<5; i++){
        for(int j=0; j<5-i; j++){
            cout<<" ";
        }
        for(int j=0; j<5; j++){
            cout<<"*";
        }  
        cout<<endl;  
    }
  /*
        0 
       0 1
      0 1 2
     0 1 2 3
    0 1 2 3 4
    */
    for(int i=0; i<5; i++){
        for(int j=4; j>i; j--){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
  /*
        1
       212
      32123
     4321234
    543212345
    */
    for(int i=0; i<=5; i++){
        for(int j=5; j>i; j--){
            cout<<" ";
        }
        for(int j=i; j>0; j--){
            cout<<j;
        }
        if(i >= 2){
            for(int j=2; j<=i; j++){
                cout<<j;
            }

        }
        cout<<endl;
    }
}    
    
