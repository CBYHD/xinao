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