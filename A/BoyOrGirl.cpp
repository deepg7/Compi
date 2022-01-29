#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
     map<char,int> dict;
    for(auto it = s.begin(); it!= s.end();  ++it){
        if(dict[*it]){
            dict[*it]+=1;
            n--;
        }else{
            dict[*it]=1;
        }
    }
    if(n%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
}