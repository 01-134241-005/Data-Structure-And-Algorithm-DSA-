#include <iostream>
#include<conio.h>
using namespace std;
void rev(){
char ch;
cin.get(ch);
if(ch!='\n'){
    rev();
    cout.put(ch);
}
}
int main(){
    rev();
    getch();
    return 0;
    
}