#include <iostream>
using namespace std;
int main()
{
	double z = 1;
	double a,x;
	cout << "������a��ֵ" << endl;
	cin >> a;
	if (a >= 0)
	{
		for ( x = 1; z >= pow(10, -5);)
		{
			double y = (1.0 / 2) * (x + a / x);
			z = abs(y - x);
			x = y;
		}
		cout << "x��ƽ����Ϊ" << x << endl;
	}
	else
	{
		cout << "�����������Ϊ����" << endl;
	}
	system("pause");
	return 0;
}