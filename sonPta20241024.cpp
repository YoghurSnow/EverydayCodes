#include<iostream>
using namespace std;

const int N = 100;
int str1[N], str2[N], str3[N];

int main() {
	int n;
	int tmp = 0, tmp2 = 0, num1 = 0, num2 = 0;
	cin >> n;

	// ‰»Î
	for (int i = 0; i < n; i++) {
		cin >> str1[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> str2[i];
		str3[i] = str2[i];
	}


	if (str1[0] > str3[0] && str1[n - 1] == str3[n - 1]) {
		//≤Â»Î≈≈–Ú
		for (int i = 0; i < n; i++) {
			if (str2[i] > str2[i + 1]) {
				tmp = str2[i + 1];
				num1 = i + 1;
				break;
			}

		}
		for (int i = 0; i < num1; i++) {
			int end = i;
			int tem = str2[end + 1];
			while (end >= 0) {
				if (tem < str2[end]) {
					str2[end + 1] = str2[end];
					end--;
				}
				else {
					break;
				}
			}
			str2[end + 1] = tem;
		}

		cout << "Insertion Sort" << endl;
	}
	else {
		cout << "Heap Sort" << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << str2[i];
		if (i < n - 1) {
			cout << " ";
		}
	}
	return 0;
}