/*
AC  https://www.luogu.com.cn/record/35569981
P1106 删数问题 https://www.luogu.com.cn/problem/P1106
题目描述
键盘输入一个高精度的正整数NN（不超过250250位） ，去掉其中任意kk个数字后剩下的数字按原左右次序将组成一个新的正整数。编程对给定的NN和kk，寻找一种方案使得剩下的数字组成的新数最小。

输入格式
nn (高精度的正整数)

kk(需要删除的数字个数)

输出格式
最后剩下的最小数。

输入输出样例
输入 #1复制
175438 
4
输出 #1复制
13*/

#include<iostream>
#include <string.h>
#define N 260
using namespace std;
char a[N];
int main(){
    int k;
    cin >> a >> k;
    int len = strlen(a);
    while(k--){
        for(int i = 0;i<len;i++){
            if(a[i] > a[i+1]){
                for(int j = i;j<len;j++){
                    a[j] = a[j+1];
                }
                break;
            }
            
            
        }
        len--;
    }
    int i = 0;
    while(a[i] == '0' && i < len-1) i++;
    for(int j = i;j<len;j++){
        cout << a[j];
    }
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------