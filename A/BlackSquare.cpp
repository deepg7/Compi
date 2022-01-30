#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<char,int> m;
    cin>>m['1']>>m['2']>>m['3']>>m['4'];
    string s;
    cin>>s;
    int count = 0;
    for(auto it = s.begin(); it!= s.end();  ++it){
        count+=m[*it];
    }
    cout<<count;
}