#include<iostream>
using namespace std;
#include<vector>
int main() {
	int N, M;
	cin >> N;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	cin >> M;
	int max, sum = 0;
	for (int i = 0; i < M; i++) {
		sum += v[i];
	}
	max = sum;
	for (int i = M; i < N; i++) {
		sum = sum + v[i] - v[i - M];
		max = sum > max ? sum : max;
	}
	cout << max << endl;
}