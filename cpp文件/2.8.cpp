#include <iostream>
using namespace std;
int main()
{
	double z = 1;
	double a,x;
	cout << "请输入a的值" << endl;
	cin >> a;
	if (a >= 0)
	{
		for ( x = 1; z >= pow(10, -5);)
		{
			double y = (1.0 / 2) * (x + a / x);
			z = abs(y - x);
			x = y;
		}
		cout << "x的平方根为" << x << endl;
	}
	else
	{
		cout << "您输入的数字为负数" << endl;
	}
	system("pause");
	return 0;
}