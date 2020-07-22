#define N 101
#include<iostream>
using namespace std;
int stack[N],top;
void push(int x){
    //入栈
    if(top < N) stack[++top] = x;
}
void pop(){
    if(top > 0) top--;
}
bool empty(){
    if(top == 0) return true;
    else return false;
}
int main(){
    int n,m;
    cin >> n >> m;
    while(n!=0){
        // stack[++top] = n%m;
        push(n%m);
        n/=m;
    }
    while(!empty()){
        int x = stack[top--];
        if(x >= 10) cout << char(x-10+'A');
        else cout << x;
    }
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