#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to check vowel
bool isVowel(char ch) {
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return true;
    return false;
}

int main() {

    string word;

    // 1️⃣ ADD WORDS
    ofstream outFile("file.txt");

    cout << "Enter words (type END to stop):\n";
    while (true) {
        cin >> word;
        if (word == "END")
            break;
        outFile << word << " ";
    }
    outFile.close();


    // 2️⃣ REPLACE WORD
    string oldWord, newWord;

    cout << "Enter word to replace: ";
    cin >> oldWord;

    cout << "Enter new word: ";
    cin >> newWord;

    ifstream inFile("file.txt");
    ofstream tempFile("temp.txt");

    while (inFile >> word) {
        if (word == oldWord)
            tempFile << newWord << " ";
        else
            tempFile << word << " ";
    }

    inFile.close();
    tempFile.close();


    // 3️⃣ SEARCH + MAX + MIN + VOWEL & CONSONANT
    ifstream finalFile("temp.txt");

    string searchWord;
    cout << "Enter word to search: ";
    cin >> searchWord;

    bool found = false;
    string maxWord = "", minWord = "";
    bool firstWord = true;

    while (finalFile >> word) {

        // SEARCH
        if (word == searchWord)
            found = true;

        // MAX & MIN
        if (firstWord) {
            maxWord = minWord = word;
            firstWord = false;
        } else {
            if (word.length() > maxWord.length())
                maxWord = word;

            if (word.length() < minWord.length())
                minWord = word;
        }

        // VOWEL & CONSONANT COUNT
        int vowelCount = 0, consonantCount = 0;

        for (int i = 0; i < word.length(); i++) {
            char ch = word[i];

            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

                if (isVowel(ch))
                    vowelCount++;
                else
                    consonantCount++;
            }
        }

        cout << "\nWord: " << word;
        cout << "\nVowels: " << vowelCount;
        cout << "\nConsonants: " << consonantCount << endl;
    }

    finalFile.close();

    // OUTPUT
    if (found)
        cout << "\nWord found in file.\n";
    else
        cout << "\nWord not found.\n";

    cout << "Maximum length word: " << maxWord << endl;
    cout << "Minimum length word: " << minWord << endl;

    return 0;
}
