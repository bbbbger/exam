#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>

bool comp(string s1, string s2) {
	return (s1 + s2) > (s2 + s1);
}
int main() {
	//vector<string> v;
	//int num;
	//char c;
	//string s;
	//while ((c = getchar())!='\n') {
	//	
	//	if (c == ' ') { 
	//		v.push_back(s); 
	//		s.clear();
	//		continue;
	//	}
	//	s += c;
	//}
	//v.push_back(s);
	//
	//sort(v.begin(), v.end(), comp);
	//string ans;
	//for (auto s : v) {
	//	ans += s;
	//}
	//cout << ans << endl;
	int n;
	while (cin >> n) {
		cout << cin.get() << endl;
		if (cin.get() == ' ')continue;
		if (cin.get() == '\n')break;
		cout << n << endl;
	}
	cout << "jiehsu" << endl;
}