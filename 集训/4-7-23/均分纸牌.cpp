/*
题目来源 https://www.luogu.com.cn/problem/P1031 P1031 均分纸牌
题目描述
有NN堆纸牌，编号分别为 1,2,…,N1,2,…,N。每堆上有若干张，但纸牌总数必为NN的倍数。可以在任一堆上取若干张纸牌，然后移动。

移牌规则为：在编号为11堆上取的纸牌，只能移到编号为22的堆上；在编号为NN的堆上取的纸牌，只能移到编号为N-1N−1的堆上；其他堆上取的纸牌，可以移到相邻左边或右边的堆上。

现在要求找出一种移动方法，用最少的移动次数使每堆上纸牌数都一样多。

例如https://www.luogu.com.cn/problem/P1031

输出格式
一行：即所有堆均达到相等时的最少移动次数。

输入输出样例
输入 #1复制
4
9 8 17 6
输出 #1复制

*/
#include<iostream>
using namespace std;
#define N 110
int main(){
    int n,a[N],step;
    int ave = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        ave += a[i];
    }
    ave/=n;
    for(int i =1;i<=n;i++){
        a[i]-=ave;
    }
    int i =1,j =n;
    while(a[i]== 0&&i<n) i++;
    while(a[j] == 0 && j > 1)j--;
    while(i<j){
        a[i+1] += a[i];
        a[i] = 0;
        i++;
        step++;
        while(a[i]==0&&i < j) i++;
    }
    cout << step << endl;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------