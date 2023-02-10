#include<iostream>
int num(int N){
    int result=0;
    if(N<100){
        result=N;
    }else{
        result=99;
        for(int i=100; i<=N; i++){
            if(((i/100)-(i/10-((i/100)*10))==(i/10-((i/100)*10))-i%10)){
                result++;
            }
        }
    }
    return result;
}
int main(){
    using namespace std;
    int N=0;
    cin >> N;
    cout << num(N) << endl;
        
}