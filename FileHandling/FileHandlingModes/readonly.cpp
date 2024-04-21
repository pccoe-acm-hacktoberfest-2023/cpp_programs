#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream obj("xyz.txt",ios::in); // used for reading operations
    // fstream obj;
    // obj.open("xyz.txt",ios::in);
        // Both the lines above does the same work

    // Create a text string, which is used to output the text file
    string myText;

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(obj, myText))
    {
        // Output the text from the file
        cout << myText;
    }

    // Close the file
    obj.close();
}
