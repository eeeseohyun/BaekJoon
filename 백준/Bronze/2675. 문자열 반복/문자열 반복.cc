#include<iostream>
#include<string>
int main(){
    using namespace std;
    int N=0;
    cin >> N;
    for(int i=0; i<N; i++){
        string str;
        int num=0;
        cin >> num >> str;
        for(int k=0; k<str.length(); k++){
            for(int s=0; s<num; s++){
                cout << str[k];
            }
        }
        str.clear();
        cout << endl;
    }
}