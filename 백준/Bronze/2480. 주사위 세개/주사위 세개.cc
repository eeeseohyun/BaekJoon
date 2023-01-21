/*같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다. 
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. 
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.  
*/
#include<algorithm>
#include<iostream>
#include<vector>

int main(){
    using namespace std;
    vector<int> dice;
    vector<int> dice2;
    int num;
    int two;
    for(int i=0; i<3; i++){
        int a;
        cin >> a;
        dice.push_back(a);
    }
    sort(dice.begin(),dice.end());
    dice2=dice;
    dice.erase(unique(dice.begin(),dice.end()),dice.end());
    num=dice.size();
    if(num==2){
        if(dice2.at(0)==dice2.at(1)){
            two=dice2.at(0);
        }else{
            two=dice2.at(1);
        }
    }
    if(num==1){
        cout << 10000+(dice.at(0)*1000);
    }else if(num==2){
        cout << 1000+(two*100);
    }else if(num==3){
            cout << dice.at(2)*100;
    }

    
}