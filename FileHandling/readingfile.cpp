#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream obj("xyz.txt"); // used for reading operations
    // ifstream obj;
    // obj.open("xyz.txt");
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
