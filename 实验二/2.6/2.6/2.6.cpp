#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a, b, yinshu, beishu, i, c;
	cout << "��������������" << endl;
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
	cout << "a,b���������Ϊ" << yinshu <<endl<< "a,b����С������Ϊ" << beishu << endl;
	system("pause");
	return 0;
}