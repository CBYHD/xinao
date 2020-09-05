#include<iostream>
#include<cstring>
#define For(i,a,t) for(int i = a;i<=t;i++)
#define N 100
int e[N+1][N+1];
using namespace std;
int main(){
    /*
    最短路径算法
    最短路径问题:Floyd算法    Dijstrka算法
    最小生成树问题:Krscal算法 Prim算法
    */
   int n,m;
   cin >> n >> m;
   memset(e,0x3f,sizeof(e));
   For(i,1,m){
       int x,y,z;
       cin >>x>>y>>z;
       e[x][y] = e[y][x] = z;
   }
    For(k,1,n)
        For(i,1,n)
            For(j,1,n){
                if(e[i][j] > e[i][k] + e[k][j]){
                    e[i][j] = e[i][k]+e[k][j];
                }
            }
    For(i,1,n){
        For(j,1,n){
            cout << e[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------
/*
5 7
1 2 5
1 3 1
2 3 3
1 4 4
2 4 10
3 5 5
4 5 19

? ? ? ? ? 
? ? ? ? ? 
? ? ? ? ? 
? ? ? ? ? 
? ? ? ? ? 
*/