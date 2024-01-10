/*
Task: Palindrome Checker

Description:
Write a program that checks whether a
given word or phrase is a palindrome. A
palindrome is a word or phrase that reads
the same forwards and backwards.
Prompt the user to input a word or
phrase and display whether it is a
palindrome or not.
*/

//Program

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        // Skip non-alphanumeric characters from the start
        while (!isalnum(str[start]) && start < end) {
            start++;
        }

        // Skip non-alphanumeric characters from the end
        while (!isalnum(str[end]) && start < end) {
            end--;
        }

        // Check if the characters are the same (case-insensitive)
        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }

        // Move to the next pair of characters
        start++;
        end--;
    }

    return true;
}

int main() {
    string userInput;

    cout << "Enter a word or phrase: ";
    getline(cin, userInput);

    if (isPalindrome(userInput)) {
        cout << "\"" << userInput << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << userInput << "\" is not a palindrome." << endl;
    }
}


/*
Output:

Enter a word or phrase: NITIN
"NITIN" is a palindrome.
*/
