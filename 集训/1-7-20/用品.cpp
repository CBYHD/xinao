#include<iostream>
#include<string>
using namespace std;
struct peo{
    double he;
    int a,b,c,d;
    string name;
}u[10];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i <=n;i++){
        cin >> u[i].name >> u[i].a >> u[i].b >> u[i].c >> u[i].d;
        u[i].he = u[i].a*2+u[i].b*0.5+u[i].c*0.8+u[i].d*2.5;
        u[i].he = int(u[i].he);
        

    }
    for(int i = 1;i<=n;i++){
        cout << u[i].he<< endl;
    }
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum+=u[i].he;
    }
    sum /= n;
    cout << sum << endl;
    for(int i =1;i<=n;i++){
        if(u[i].he<sum){
            cout << u[i].name << endl;
        }
    }
    return 0;
}