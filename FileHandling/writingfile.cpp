#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream obj("xyz.txt"); // used for Writing operations
    // ifstream obj;
    // obj.open("xyz.txt");
        // Both the lines above does the same work

    //Text quoted below is overwritten in the text file
    obj<<"Hello This is concept of file Handling";

    // Close the file
    obj.close();
}
