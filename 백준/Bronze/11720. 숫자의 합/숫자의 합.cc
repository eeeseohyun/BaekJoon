#include<iostream>
#include<vector>
int main(){
    using namespace std;
    vector<int> num;
    int N=0;
    int sum=0;
    cin >> N;
    for(int i=0; i<N; i++){
        char a;
        cin >> a;
        sum+=a-48;
    }
    cout << sum;
}