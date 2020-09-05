#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // sort();
    // reverse();
    // count();//查找
    // next_permutation();//下一个排列
    // prev_permutation();//上一个排列
    int a[5] = {1,2,3};
    // prev_permutation(a,a+3);//上一个排列
    // for(int i = 0;i<3;i++){
    //     cout << a[i];
    // }
    // next_permutation();//下一个排列
    // for(int i = 0;i<3;i++){
    //     cout << a[i];
    // }
    do{
        for(int i =0;i<3;i++)cout << endl;
    }while(next_permutation(a,a+3));
    return 0;

}