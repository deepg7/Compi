#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int n;
    cin>> n;
    cin>>s;
    int count = 0;
    for(auto it = s.begin(); it!= s.end();  ++it){
        if(*it==*(it+1)){
            count++;
        }
    }
    cout<<count;
}