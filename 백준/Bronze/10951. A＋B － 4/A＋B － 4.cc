#include<iostream>

int main(){
    using namespace std;
    int a,b;
    while(1){
        cin >> a >> b;
        if(cin.eof()){
            break;
        }else{
            cout << a+b << endl;
    }
}
}
   