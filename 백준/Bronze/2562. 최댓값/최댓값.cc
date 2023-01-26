#include<algorithm>
#include<iostream>
#include<vector>
int main(){
    using namespace std;
    vector<int> num;
    vector<int> num2;
    int N;
    for(int i=0; !cin.eof(); i++){
        int a=0;
        cin >> a;
        num.push_back(a);
        N=i;
    }
    num2=num;
    sort(num.begin(),num.end());
    cout << num.at(N) << endl;
    for(int k=0; k<=N; k++){
        if(num.at(N)==num2.at(k)){
            cout << k+1;
        }
    }
    
}