#include<iostream>
#include<conio.h>
using namespace std;
int fact(int n){
    if(n==0) {
        return 1;
    }
    else{
    return n*fact(n-1);
    }
}
int main(){
    cout<<fact(5)<<endl;
    getch();
    return 0;
}