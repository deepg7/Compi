#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int team[n][3];
    for(int i = 0;i<n;i++){
        cin>>team[i][0]>>team[i][1]>>team[i][2];
    }
    int count = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = team[i][0] + team[i][1] + team[i][2];
        if(sum>=2){
            count++;
        }
    }
    cout<<count;

}