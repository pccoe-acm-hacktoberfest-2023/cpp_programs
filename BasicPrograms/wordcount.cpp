#include<iostream>
#include<string.h>
using namespace std;
int main(){
    //initialize no of words to 0
    int word=0;
    //store length of string in length
    string sentence ="Marry had little lamb";
    int length = sentence.size();
    //use for loop to count words
    for(int i=0;i<length;i++){
        if(sentence[i]== ' '){
            word++;
        }
    }
    word=word+1;
    cout<<"no of words is : "<<word<<endl;
    return 0;
}