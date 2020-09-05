#include<iostream>
using namespace std;
struct node{
    char a[100],b,c[100];
    int f;
}a[100];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i].a >> a[i].b >> a[i].c >> a[i].f;
    }

    int G_best = 0,B_bad = 5201314;
    int g = 0,b = 0;
    for(int i = 1;i<=n;i++){
        if(a[i].b == 'M'){
            B_bad = a[i].f<B_bad?a[i].f:B_bad;
            b++;
        }
        else if(a[i].b == 'F'){
            G_best = a[i].f>G_best?a[i].f:G_best;
            g++;
        }
    }
    for(int i = 1;i<=n;i++){
        if(g == 0){
            cout << "Absent"<<endl;
            break;
        }
        else if(a[i].b == 'F' && a[i].f == G_best){
            cout << a[i].a << " " << a[i].c << endl;
        }
    }
    for(int i = 1;i<=n;i++){
        if(b == 0){
            cout << "Absent"<<endl;
            break;
        }
        else if(a[i].b == 'M' && a[i].f == B_bad){
            cout << a[i].a << " " << a[i].c << endl;
        }
    }
    if(b == 0||g == 0) cout << "NA";
    else cout << G_best - B_bad;
    return 0;
}
//         ----------------------------------------------
//         |更多代码：github.com/cbyhd/xinao             |
//         ----------------------------------------------