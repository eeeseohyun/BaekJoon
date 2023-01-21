#include<iostream>
int main(){
    using namespace std;
    int H,M,TIME;
    cin >> H >> M >> TIME;
    H=H+(TIME/60);
    M=M+(TIME%60);
    if(M>=60){
        M=M-60;
        H=H+1;
    }
    if(H>23){
        H=H-24;
    }
    
    cout << H << " " << M;
}