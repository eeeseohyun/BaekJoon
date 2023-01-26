#include<algorithm>
#include<iostream>
#include<vector>
int main(){
    using namespace std;
    vector<int> num;
    for(int i=0; i<10; i++){
        int a=0; 
        cin >> a;
        a=a%42;
        num.push_back(a);
    }
    sort(num.begin(),num.end());
    num.erase(unique(num.begin(),num.end()),num.end());
    cout << num.size();
}