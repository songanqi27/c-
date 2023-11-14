#include <iostream>
using namespace std;
int main()
{
	cout << "请输入一个字符" << endl;
	char lowerchar;
	cin >> lowerchar;
	if (lowerchar >= 'a' && lowerchar <= 'z')
	{
		char upperchar = static_cast<char>('A' + (lowerchar - 'a'));
		cout << "转换后的字符为:" << upperchar << endl;
	}
	if (lowerchar >= 'A' && lowerchar <= 'Z')
	{
		cout << "ASCII=" << static_cast<int>(lowerchar) << endl;
	}
	system("pause");
	return 0;
}