#include <iostream>
using namespace std;
int main()
{
	int num, day,num1;
	for (num = 0, day = 1, num1 = 2; num1 <= 100; day++)
	{
		num = num + num1;
		num1 *= 2;
	}
	day--;
	double average =0.8*num/ day;
	cout << "ƽ��ÿ��Ứ��" << average << "Ԫ" << endl;
	system("pause");
	return 0;
}