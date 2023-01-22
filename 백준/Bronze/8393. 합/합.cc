#include<iostream>
int main(){
    using namespace std;
    int n;
    int result=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        result=result+i;
    }
    cout << result;
}