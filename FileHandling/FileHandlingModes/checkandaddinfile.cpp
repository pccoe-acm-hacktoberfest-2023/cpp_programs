#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename = "paragraph.txt";
    string wordToReplace = "old_word";
    string newWord = "new_word";
    string word;
    ifstream file(filename);
    ofstream temp("temp.txt");

    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (file >> word) {
        if (word == wordToReplace) {
            temp << newWord << " ";
        } else {
            temp << word << " ";
        }
    }

    file.close();
    temp.close();

    // Removing the original file
    remove(filename.c_str());
    // Renaming temp file to original file name
    rename("temp.txt", filename.c_str());

    cout << "Word replaced successfully!" << endl;

    return 0;
}