#include<iostream>
#include<string>
int main() {
    using namespace std;
    int N = 0;
    int result = 0;
    cin >> N;
    string str;
    for (int i = 0; i < N; i++) {
        cin >> str;
        int num = 0;
        for (int k = 0; k < str.length(); k++) {
            if (str[k] == 'X') {
                num = 0;
            }
            else {
                num++;
                result += num;
            }
        }
        cout << result << endl;
        result = 0;
        str.clear();
    }
}
