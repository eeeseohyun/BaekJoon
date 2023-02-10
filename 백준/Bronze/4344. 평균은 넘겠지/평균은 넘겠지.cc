#include<iostream>
#include<vector>
int main() {
	using namespace std;
	int N = 0;
	int avg = 0;
	double Nstu = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<int> score;
		int num = 0;
		cin >> num;
		for (int s = 0; s < num; s++ ) {
			int a = 0;
			cin >> a;
			score.push_back(a);
			a = 0;
		}
		for (int k = 0; k < num; k++) {
			avg += score.at(k);
		}
		avg=(avg * 1.0) / num;
		for (int t = 0; t < num; t++) {
			if (avg < score.at(t)) {
				Nstu++;
			}
		}
		Nstu = (Nstu * 100.0) / num;
		cout << fixed;
		cout.precision(3);
		cout << Nstu <<"%"<< endl;
		Nstu = 0;
		avg = 0;
		num = 0;
	}
}
