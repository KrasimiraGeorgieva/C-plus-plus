/*Напишете функция, която превръща всички големи букви от дадена дума в малки.*/

#include <iostream>
//#include <cctype>

using namespace std;

//void convertToLowerCase(std::string& word) {
//    for (char& ch : word) {
//        if (isupper(ch)) {
//            ch = tolower(ch);
//        }
//    }
//}

void convertToLowerCase(std::string& word) {
    for (char& ch : word) {
        // Check if the character is an uppercase letter
        if (ch >= 'A' && ch <= 'Z') {
            // Convert to lowercase by adding the ASCII offset
            ch = ch - 'A' + 'a';
        }
    }
}

int main()
{
    //// Example usage
    //string inputWord;

    //cout << "Enter a word: ";
    //cin >> inputWord;

    //convertToLowerCase(inputWord);

    //cout << "Word in lowercase: " << inputWord << endl;

    //return 0;

    // Example usage
    string inputWord;

    cout << "Enter a word: ";
    cin >> inputWord;

    convertToLowerCase(inputWord);

    cout << "Word in lowercase: " << inputWord << endl;

    return 0;
}