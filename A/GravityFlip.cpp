#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int well[n];
    for(int i = 0; i<n;i++){
        cin>>well[i];
    }
    //basic sorting program only.
    //doing bubble but can be optimised further.
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(well[j]>well[j+1]){
                int temp = well[j];
                well[j]=well[j+1];
                well[j+1]=temp;
            } 
        }
    }

    for(int i=0;i<n;i++){
        cout<<well[i]<<" ";
    } 
}