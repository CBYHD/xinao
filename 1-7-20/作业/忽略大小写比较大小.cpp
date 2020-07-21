#include<iostream>
#include<cstring>
 using namespace std;
int main(){
    char a[100],b[100];
    cin.getline(a,100);
    cin.getline(b,100);
    int lena = strlen(a);
    int lenb = strlen(b);
    for(int i = 0;i < lena;i++){
        if(a[i] >='A'&& a[i] <= 'Z'){
            a[i] +=32;

        }
    }
    for(int i = 0;i < lenb;i++){
        if(b[i] >='A'&& b[i] <= 'Z'){
            b[i] +=32;
            
        }
    }
    if(strcmp(a,b)>0){
        cout << ">";
    }
    else if(strcmp(a,b) < 0){
        cout << "<" ;
    }
    else{
        cout << "=";
    }
    return 0;
}
