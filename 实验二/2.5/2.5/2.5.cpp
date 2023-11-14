#include <iostream>
using namespace std;
int main()
{
	int letter = 0, num = 0,space = 0, other = 0,a=1;
	char ch;
	while (a==1)
	{
		cin.get(ch);
		if (ch == '\n')
		{
			break;
		}
		else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
		{
			letter++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			num++;
		}
		else if (ch >= ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	cout << "英文字母数" << letter << "数字数" << num << "空格数" << space << "其它字符数" << other<<endl;
	system("pause");
	return 0;
}