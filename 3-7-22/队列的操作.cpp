#define N 101
#include<iostream>
using namespace std;
int que[N+1],front,back;
int main(){
    int n;
    cin >> n;
    for(int i =0;i < n;i++){
        que[back++] =i+1;

    }
    //获取队列中元素的个数
    cout << back - front << endl;//排序通式
    //获取队头元素的值
    cout << que[front] << endl;
    front++;
    //获取队列中元素的个数
    cout << back - front << endl;
    return 0;
}
//cbyhd 