#include <iostream>
using namespace std;
int main()
{
	cout << "������һ���ַ�" << endl;
	char lowerchar;
	cin >> lowerchar;
	if (lowerchar >= 'a' && lowerchar <= 'z')
	{
		char upperchar = static_cast<char>('A' + (lowerchar - 'a'));
		cout << "ת������ַ�Ϊ:" << upperchar << endl;
	}
	if (lowerchar >= 'A' && lowerchar <= 'Z')
	{
		cout << "ASCII=" << static_cast<int>(lowerchar) << endl;
	}
	system("pause");
	return 0;
}