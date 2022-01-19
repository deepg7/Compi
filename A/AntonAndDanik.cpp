#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    string results;
    cin>>n;
    cin>>results;
    for(int i=0;i<n;i++){
        if(results[i]=='A'){
            sum+=1;
        }else{
            sum-=1;
        }
    }
    if(sum>0){
        cout<<"Anton";
    }else if(sum<0){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}