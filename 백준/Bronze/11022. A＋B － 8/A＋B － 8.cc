#include<iostream>
int main(){
    using namespace std;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        cout<<"Case #"<<i+1<<": "<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
}