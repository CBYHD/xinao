#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    set<int> s;
    for(int i = 1;i<= 10;i++){
        s.insert(i);
    }
    for(vector<int>::iterator it=s.begin();it!=s.end;it++){
        cout << *it << endl;
    }
    s.erase(2);
    for(vector<int>::iterator it=s.begin();it!=s.end;it++){
        cout << *it << endl;
    }
    return 0;
}