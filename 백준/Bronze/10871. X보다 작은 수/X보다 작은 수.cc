#include<iostream>
int main(){
    using namespace std;
    int N,V;
    cin >> N >> V;
    int num[N];
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        num[i]=a;
        if(a<V){
            cout << a << " ";
        }
    }
}