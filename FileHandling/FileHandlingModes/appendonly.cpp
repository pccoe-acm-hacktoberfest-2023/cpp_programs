#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //open the file in write mode and ios::app mode which takes the file pointer at the end of the file to add data
    ofstream obj("xyz.txt", ios::app);

    // Write some data to the file
    obj << "Hello, World again!\nThis is a test of ate.\n";

    // Close the file
    obj.close();

    // Reopen the file in read mode
    ifstream objRead("xyz.txt");


    // Create a text string to store each line of the file
    string myText;

    // Read and output each line of the file
    while (getline(objRead, myText))
    {
        cout << myText << endl;
    }

    // Close the file
    objRead.close();
    
    return 0;
}
