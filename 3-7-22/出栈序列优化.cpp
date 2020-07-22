#define N 101
#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int main(){
    int n,a[N+1];
    int cur = 1;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i]; 
    }
    for(int i = 1,cur =1;i<=n;i++){
        while(a[i] >= cur){
            s.push(cur++);
        }
        if(s.top() == a[i])s.pop();
        else cout << "No" << endl; 
    }
    if (s.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;
    /*
    将一个十进制的正整数n转成对应的m（2<=m<=16）进制并
    输入样例：8 3
    输出样例：1000
    /*
    栈结构的功能
    push()  入栈
    pop()   出栈
    top()   栈顶元素的位置
    getTop  获取栈顶元素的值
    size()  获取栈中元素的个数
    empty   判断栈是否为空
    */
    return 0;
}
//cbyhd 