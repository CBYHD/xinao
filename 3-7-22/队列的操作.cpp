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
    //个数
    cout << back-front << endl;
    //对头
    cout << que[front] << endl;
    return 0;
}
//cbyhd 