#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void task1(string text) {
    int counter = 0;

    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == 'k' || text[i] == 'K')
        {
            counter++;
        }
    }

    cout << "result counter: " << counter << endl;
}

void task2(string text, char oldChar, char newChar) {
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == oldChar)
        {
            text[i] = newChar;
        }
        
    }

    cout << "result: " << text << endl;
}

vector<string> splitString(const string& str) {
    stringstream ss(str);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

int countWordsStartingWith(const vector<string>& words, char letter) {
    int count = 0;
    for (const string& word : words) {
        char startWith = word[0];
        if (tolower(startWith) == tolower(letter))
        {
            count++;
        }
        
    }
    return count;
}

string replaceChar(string str, char oldChar, char newChar) {
    for (char& c : str) {
        if (c == oldChar) {
            c = newChar;
        }
    }
    return str;
}

string findShortestWordStartingWith(const vector<string>& words, char letter) {
    string shortestWord;

    for (const string& word : words) {
        char startWith = word[0];
        if (tolower(startWith) == tolower(letter))
        {
            if (shortestWord.empty() || word.length() < shortestWord.length())
            {
                shortestWord = word;
            }
        }
    }

    return shortestWord;
}

string findLongestWordStartingWith(const vector<string>& words, char letter) {
    string longestWord;
    for (const string& word : words) {
        if (tolower(word[0]) == tolower(letter)) {
            if (longestWord.empty() || word.length() > longestWord.length()) {
                longestWord = word;
            }
        }
    }
    return longestWord;
}

string findShortestWordEndingWith(const vector<string>& words, char letter) {
    string shortestWord;
    for (const string& word : words) {
        if (tolower(word.back()) == tolower(letter)) {
            if (shortestWord.empty() || word.length() < shortestWord.length()) {
                shortestWord = word;
            }
        }
    }
    return shortestWord;
}

string findLongestWordEndingWith(const vector<string>& words, char letter) {
    string longestWord;
    for (const string& word : words) {
        if (tolower(word.back()) == tolower(letter)) {
            if (longestWord.empty() || word.length() > longestWord.length()) {
                longestWord = word;
            }
        }
    }
    return longestWord;
}

int main() {
    string text;
    //cout << "enter a text: ";
    //getline(cin, text);

    text = "key ddd zebra ze xello xx off somef strings strs";

    vector<string> words = splitString(text);

    //task1(text);
    //task2(text, 'd', 'h');

    cout << "task 1: " << countWordsStartingWith(words, 'k') << endl;
    cout << "task 2: " << replaceChar(text, 'd', 'h') << endl;
    cout << "task 3: " << findShortestWordStartingWith(words, 'z') << endl;
    cout << "task 4: " << findLongestWordStartingWith(words, 'x') << endl;

    cout << "task 7: " << findShortestWordEndingWith(words, 'f') << endl;
    cout << "task 8: " << findLongestWordEndingWith(words, 's') << endl;

    cout << "task 5: " << findShortestWordStartingWith(words, 'm') << endl;
    cout << "task 6: " << findLongestWordStartingWith(words, 'n') << endl;

    cout << "task 9: " << countWordsStartingWith(words, 'a') << endl;
    cout << "task 10: " << replaceChar(text, 'a', 'b') << endl;
    cout << "task 11: " << countWordsStartingWith(words, 'w') << endl;
    cout << "task 12: " << replaceChar(text, '?', '!') << endl;
    cout << "task 13: " << countWordsStartingWith(words, 'm') << endl;
    cout << "task 14: " << replaceChar(text, 'x', 'y') << endl;
    cout << "task 15: " << countWordsStartingWith(words, 'w') << endl;
    cout << "task 16: " << replaceChar(text, 't', 'p') << endl;
    cout << "task 17: " << findShortestWordStartingWith(words, 'a') << endl;
    cout << "task 18: " << findLongestWordStartingWith(words, 'g') << endl;
    cout << "task 19: " << findShortestWordStartingWith(words, 'r') << endl;
    cout << "task 20: " << findLongestWordStartingWith(words, 's') << endl;
}