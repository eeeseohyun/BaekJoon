#include<iostream>
int main(){
    using namespace std;
    int N,V;
    int result=0;
    cin >> N;
    int num[N];
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        num[i]= a;
    }
    cin >> V;
    for(int i=0; i<N; i++){
        if(V==num[i]){
            result=result+1;
        }
    }
    cout << result;
}