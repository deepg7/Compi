#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int m[5][5];
    int row=0,col=0;
    int check = 0;
    int f = 0;
    for(int i = 0; i<5;i++){
        cin>>m[i][0]>>m[i][1]>>m[i][2]>>m[i][3]>>m[i][4];
    }

    for(int i=0;i<5;i++){
        for(int j =0;j<5;j++){
            if (m[i][j]==1){
                row = i;
                col = j;
                check = 1;
                break;
            }
        }
        if (check==1){
            break;
        }
    }
    cout<<abs(2-row)+abs(2-col)<<endl;
}