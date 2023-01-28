#include<algorithm>
#include<vector>
#include<iostream>
int main(){
    using namespace std; 
    int N;
    float sum=0;
    vector<int> score;
    cin >> N;
    for(int i=0; i<N; i++){
        int a=0;
        cin >> a;
        score.push_back(a);
    }
    sort(score.begin(),score.end());
    for(int i=0; i<=N-1; i++){
        int k=0;
        int s=0;
        k=score.at(i);
        s=score.at(N-1);
        sum=sum+((k*100.0)/s);
    }
    sum=(sum*1.0)/N;
    
    cout << sum;
}