#include <iostream>
#include <string>
using namespace std;

const int MAX = 5000;
//a = a + b;
int toPlus(int a[], int b[], int la, int lb);

int main(int argc, const char *argv[])
{
    string str1, str2;
    int la, lb, i;      // 存储数字串的长度
    int a[MAX], b[MAX]; // 数组a, b存储两个加数

    //这里进行输入操作
    cin >> str1 >> str2;
    la = (int)str1.size(); // 获取字符串的长度
    lb = (int)str2.size();
    for (int i = 0; i < MAX; i++)
    {
        b[i] = a[i] = 0;
    }
    // memset(a, 0, sizeof(a)); // 置为零
    // memset(b, 0, sizeof(b));
    for (i = 0; i < la; i++)
        a[la - i - 1] = str1[i] - '0'; // 也可以写成str1[i] - 48
    for (i = 0; i < lb; i++)
        b[lb - i - 1] = str2[i] - '0';

    la = toPlus(a, b, la, lb); // 调用求和函数
    // 输出求得的和，从高位往低位输出
    for (i = 0; i < la; i++)
        cout << a[la - i - 1];
    cout << endl;
    set(f,p)
    return 0;
}

//a = a + b;
int toPlus(int a[], int b[], int la, int lb)
{
    int i, len;

    if (la > lb)
        len = la;
    else
        len = lb;
    for (i = 0; i < len; i++)
    {
        a[i] = a[i] + b[i];
        a[i + 1] = a[i + 1] + a[i] / 10;
        a[i] = a[i] % 10;
    }
    if (a[len] != 0)
        len++;
    return len;
}
