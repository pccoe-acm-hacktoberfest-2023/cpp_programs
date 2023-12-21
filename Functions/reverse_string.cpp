#include<iostream>
#include<string.h>
using namespace std;
void revstr(char *str1){
    int i,len,temp;
    len=strlen(str1);
    for(i=0;i<len/2;i++){
        temp=str1[i];
        str1[i]=str1[len-1-i];
        str1[len-1-i]=temp;
    }
}
int main(){
    char str[50]="priyanka";
    cout<<"Before reversing the string "<<str<<endl;
    revstr(str);
    cout<<"after reversing "<<str;
    return 0;
}