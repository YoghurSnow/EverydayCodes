#include<bits/stdc++.h>
using namespace std;

char ch;
void a(int n) {
	if (cin >> ch) {
		n = n % 26;
		if (ch >= 'a' && ch <= 'z')ch += n;
		ch = ch > 'z' ? (ch - 26) : ch;
		cout << ch;
		return a(n);
	}
}

int main() {
	int n;
	cin >> n;
	a(n);

	return 0;
}

