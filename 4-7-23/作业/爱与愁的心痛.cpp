#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int a[100001];
    int Min = 100000,DQMin = 0;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    for(int i = 1;i<=n-m+1;i++){
        for(int j = 1;j<=m;j++){
            DQMin += a[i+j-1];
        }
        if(DQMin<Min) Min = DQMin;
        DQMin = 0;
    }
    cout << Min;
    return 0;
}