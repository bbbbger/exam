#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int m, n, R;
	cin >> m >> n >> R;
	vector<int> A;
	vector<int> B;
	vector<pair<int, int>> ans;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		A.push_back(temp);
	}
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		B.push_back(temp);
	}

	int j = 0;
	for (int i = 0; i < m; ) {
		if (j >= n)break;
		if (B[j] - A[i] >= 0 && B[j] - A[i] <= R) {
			ans.push_back(make_pair(A[i], B[j]));
			i++;
			continue;
		}
		while(B[j] <= A[i]&&j<n) {
			j++;
		}		
	}
	for (auto p : ans) {
		cout << p.first << " " << p.second << endl;
	}
	
	return 0;
}