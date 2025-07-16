// lab14.celinetandera.cpp 

#include <iostream>
#include <cstring>  
#include <string>  
using namespace std;

int countWords(const char* str) {
    int count = 0;
    bool inWord = false;

    while (*str) {
        if (!isspace(*str)) {
            if (!inWord) {
                inWord = true;
                count++;
            }
        }
        else {
            inWord = false;
        }
        str++;
    }

    return count;
}

int countWords(const string& str) {
    return countWords(str.c_str());  
}

int main() {
    string userInput;

    cout << "Enter a sentence: ";
    getline(cin, userInput);  

    int totalWords = countWords(userInput);  

    cout << "The number of words in the string is: " << totalWords << endl;

    return 0;
}
