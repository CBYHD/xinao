
using namespace std;
int n,m;
// char m,n;

struct pp{
	int i;
	int s;
}a[6000];
int cmp(pp x,pp y){return (x.s>y.s)||(x.s==y.s&&x.i<y.i);}
int main()
{
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i].i>>a[i].s;
    // cout << "a";
	sort(a+1,a+1+n,cmp);
    //int y = last(m*1.5)
	int y=floor(m*1.5);
	int line=a[y].s,num=0;
	for (int i=1;i<=n;i++) if (a[i].s>=line) num++;
	cout<<line<<" "<<num<<endl;
	for (int i=1;i<=num;i++) cout << a[i].i << " " << a[i].s <<endl;
	return 0;
}
