#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    using namespace std;
    vector<int> num;
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        num.push_back(a);
    }
    sort(num.begin(),num.end());
    cout<< num.at(0) << " " << num.at(N-1);
    
}