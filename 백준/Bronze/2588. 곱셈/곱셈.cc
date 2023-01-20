#include<iostream>
int main(){
    using namespace std;
    int a,b;
    int num1,num2,num3;
    cin >> a >> b;
    num1 = (a*(b%10));
    num2 = (a*((b/10)-(b/100)*10));
    num3 = (a*(b/100));
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num1+(num2*10)+(num3*100);
}