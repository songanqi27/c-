#include <iostream>
using namespace std; 
int main() 
{ 
	double a, b, c; 
	cout << " ���������ε����� a,b,c " << endl; 
	cin >> a >> b >> c; 
	if(a + b <= c|| a + c <= b|| b + c <= a) cout << " �������β����� " << endl; 
	else if (a == b|| a == c|| b == c) cout << " ��������Ϊ���������� " << " �ܳ�Ϊ " << a + b + c << endl; 
	else cout << " �������β��ǵ��������� " << " �ܳ�Ϊ " << a + b + c << endl; 
	system("pause");
	return 0; 
}