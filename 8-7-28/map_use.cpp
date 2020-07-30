#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main(){
    map<string,int> ma;
    ma["lmf"] = 13;
    ma["yjz"] = 12;
    ma["cby"] = 11;
    ma["phy"] = 10;

    cout << ma.size() << endl;
    if(ma.count("lmf")){
        cout << ma["lmf"] << endl;
    }
}