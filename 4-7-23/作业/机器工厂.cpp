// https://www.luogu.com.cn/problem/P1376
#include<bits/stdc++.h>//万能头文件
using namespace std;
int small(int x,int y){
    return x>y?y:x;
}
int main(){
    int n,s;
    int c,y;
    //int ans;
    long long  ans,q=0;
    cin>>n>>s;
    cin>>c>>y;
    ans=c;
    q+=ans*y;
    for(int i=1;i<n;i++){
        cin>>c>>y;
        ans=small(ans+s,c);
        q+=ans*y;//计算
    }
    cout<<q;
    return 0; 
} 