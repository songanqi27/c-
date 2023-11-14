#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a, b, yinshu, beishu, i, c;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	c = max(a, b);
	for (i = c; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			beishu = i;
			break;
		}
	}
	for (i = 1; i <= c; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			yinshu = i;
		}
	}
	cout << "a,b的最大公因数为" << yinshu <<endl<< "a,b的最小公倍数为" << beishu << endl;
	system("pause");
	return 0;
}