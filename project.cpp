#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}


int countWords(const string& text) {
    int count = 0;
    bool inWord = false;
    for (char c : text) {
        if (isalnum(c)) {
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return count;
}


string reverse(const string& text) {
    return string(text.rbegin(), text.rend());
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& text) {
    string result = text;
    bool capitalize = false;
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("text_file.txt");
    string fileData;

    if (inputFile.is_open()) {
        getline(inputFile, fileData);
        inputFile.close();
    } else {
        cerr << "Unable to open file!" << std::endl;
        return 1;
    }

    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed statement: " << reverse(fileData) << endl;
    cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
