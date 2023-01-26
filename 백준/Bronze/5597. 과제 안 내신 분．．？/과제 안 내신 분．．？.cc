#include<algorithm>
#include<iostream>
#include<vector>
int main(){
    using namespace std;
    vector<int> num;
    for(int i=0; i<28; i++){
        int a=0;
        cin >> a;
        num.push_back(a);
    }
    for(int i=1; i<=30; i++){
        auto it = find(num.begin(),num.end(),i);
        if(it == num.end()){
            cout << i << endl;
        }
    }
}
    
