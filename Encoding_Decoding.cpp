#include <iostream>
#include <string>
using namespace std;

// Function to convert a word to numbers
void wordToNumbers(const string& word) {
    for (char c : word) {
        // Convert to lowercase
        char lowerC = tolower(c);
        
        // Check if character is an alphabet letter
        if (isalpha(lowerC)) {
            // Convert letter to corresponding number (a=1, b=2, ..., z=26)
            int num = lowerC - 'a' + 1;
            cout << num << " ";
        }
    }
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    cout << "Word to numbers: ";
    wordToNumbers(word);
    
    return 0;
}