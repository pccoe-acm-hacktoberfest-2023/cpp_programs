#include<iostream>
#include<string.h>
using namespace std;
int main(){
    //initialize no of count to 0
    int count=0;
    //store length of string in length
    string sentence ="juggling";
    int length = sentence.size();
    //use for loop to count character
    for(int i=0;i<length;i++){
        if(sentence[i]== 'g'){
            count++;
        }
    }
    cout<<"no of s in sentence : "<<count<<endl;
    return 0;
}