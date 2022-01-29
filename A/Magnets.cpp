#include<iostream>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    string magnets[n];
    for(int i=0;i<n;i++){
        
        cin>>magnets[i];
        if(i!=0){
            if(magnets[i]!=magnets[i-1]){
                count++;
            }
        }
    }
    cout<<count;
}