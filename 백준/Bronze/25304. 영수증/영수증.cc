#include<iostream>
int main(){
    using namespace std;
    int price=0;
    int n=0;
    int result=0;
  
    cin >> price >> n;
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        result=result+(a*b);
    }
    if(price==result){
        cout << "Yes";
    }else{
        cout << "No";
    }
   
}