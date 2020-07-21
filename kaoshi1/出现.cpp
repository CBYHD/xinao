#include<iostream>
#include<set>
using namespace std;
set<int> t;
int n;
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int md;
        cin >> md;
        t.insert(md);
    }
    int ff=0;
    while(true)
    {
        if(t.find(ff)==t.end())
            break;
        else
            ff++;
    }
    cout << ff;
    return 0;
}
