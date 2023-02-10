#include<iostream>
#include<string>
int main(){
    using namespace std;
    string str;
    cin >> str;
    
    for(char eng='a'; eng<='z'; eng++){
        int num = 0;
        if(str.find(eng)!=string::npos){
        cout << str.find(eng) << " ";      
        }else{
        cout << -1 << " ";
        }
}
}