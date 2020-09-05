#include<iostream>
#include<cstring>
#define For(i,a,t) for(int i = a;i<=t;i++)
#define N 1000
#define INF 0x3f
int e[N+1][N+1],u;
using namespace std;
int main(){
    /*
    最短路径算法
    最短路径问题:Floyd算法    Dijstrka算法
    最小生成树问题:Krscal算法 Prim算法
    */
   int dis[N+1];
   int book[N+1];
   int n,m;
   cin >> n >> m;

   For(i,1,n){
       For(j,1,n){
           if(i!= j){
               e[i][j] = INF;
           }
       }
   }

   For(i,1,m){
       int x,y,z;
       cin >> x >> y >> z;
       e[x][y] = e[y][x] =z;
   }

   For(i,1,n){
       dis[i] = e[1][i];

   }
    For(i,1,n){
        int _min = INF;
        For(j,1,n){
            if(book[j] == 0 && dis[j] < _min){
                _min = dis[j];
                u = j;
            }
        }
        book[u] = 1;
        For(v,1,n){
            if(book[v] == 0 && dis[v] > e[u][v]){
                dis[v] = e[u][v];
            }
        }
    }
    For(i,1,n){
        cout << dis[i] << " ";
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