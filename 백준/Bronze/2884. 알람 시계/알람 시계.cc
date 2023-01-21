#include<iostream>
int main(){
    using namespace std;
    int H,M;
    cin >> H >> M;
    if(H==0){
        if(M<45){
            H=23;
            M=M+15;
        }else{
            M=M-45;
        }
    }else{
        if(M<45){
            H=H-1;
            M=M+15;
        }else{
            M=M-45;
        }
    }
    cout << H << " " << M;
    
}