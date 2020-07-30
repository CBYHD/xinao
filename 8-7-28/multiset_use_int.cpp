#include<vector>
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;
int main(){
    multiset<int> s;
    int n;
    int st;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> st;
        s.insert(st);
    }
    for(set<int>::iterator it = s.begin();it != s.end();it++){
        cout << *it<<endl;
    }
}