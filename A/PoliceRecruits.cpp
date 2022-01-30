#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int sum = 0,count=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            sum+=x;
        }if(x<0){
            if(sum==0){
                count++;
            }else{
                sum+=x;
            }
           
        }
    }
    cout<<count;
}