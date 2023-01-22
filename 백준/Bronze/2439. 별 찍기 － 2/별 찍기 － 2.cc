#include<iostream>
int main(){
    using namespace std;
    int n;
    cin >> n;
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n-k; i++){
            cout << " ";
        }
        for(int t=1; t<=k; t++){
            cout << "*";
        }
        cout << endl;
    }
}