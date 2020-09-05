#include<iostream>
#include<vector>
#include<queue>
priority_queue<int,vector<int>,less<int>> q2;
        //小根堆 从小到大排序
priority_queue<int,vector<int>,greater<int>> q1;
using namespace std;
int main(){
    int n,x;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> x;
        q1.push(x);
        q2.push(x);
    }
    //小到大
    while(!q1.empty()){
        cout << q1.top() << " ";
        q1.pop();
    }
    cout << endl;
    //大到小
    while(!q2.empty()){
        cout << q2.top() << " ";
        q2.pop();
    }
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------