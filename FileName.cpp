//c++
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	//全部得用double，准确精度，包括a,b,c
	double a, b, c;
	cin >> a >> b >> c;
	//scanf("%lf%lf%lf",&a,&b,&c);
	double p = (a + b + c) / 2.0;//此处得是2.0
	double s2 = p * (p - a) * (p - b) * (p - c);
	double s = sqrt(s2);
	//求根函数aqrt();

	printf("%.1lf", s);

	return 0;
}