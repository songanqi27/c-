#include <iostream> 
using namespace std;
int main()
{
    double a, b;
    cout <<"输入两个数a,b和运算符"<< endl;
    char ch;
    cin >> a >> b >> ch;
    switch (ch)
    {
    case'+':
        cout << a + b << endl;
        break;
    case'-':
        cout << a - b << endl;
        break;
    case'*':
        cout << a * b << endl;
        break;
    case'/':
    {
    if (b == 0)cout <<"除数不能为零"<< endl;
    else cout << a / b << endl; }break;
    default:
        cout <<"运算符输入错误"<< endl;
        break;
    }
    system("pause");
    return 0;
}
