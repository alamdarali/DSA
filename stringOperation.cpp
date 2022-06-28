#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    
    string str;
    getline(cin , str);

    string str1 = "hello";

    sort(str.begin(), str.end());
    cout<<str<<endl;

    //concate
    cout<<str1+ " " + str<<endl;

    //append
    str1.append(str);

    //find word starting index
    str1.find("llo");

    //using index access letter
    cout<<str[0];

    return 0;
}
