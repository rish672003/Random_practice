#include<bits/stdc++.h>

using namespace std;
class Solution {
public:

bool isValid(string &word){


    if(word.size() < 3) return false;

    bool hasVowel = false;
    bool hasConsonant = false;

    for(char c : word) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            hasVowel = true;
        } else if(isalpha(c)) {
            hasConsonant = true;
        }else if(!isdigit(c)) {
            return false;
        }
    }

        return hasVowel && hasConsonant;

}
};


int main() {
    string test1 = "a1b";     // valid: vowel + consonant + digit
    string test2 = "ae1";     // invalid: no consonant
    string test3 = "123";     // invalid: no vowel or consonant
    string test4 = "abc";     // valid
    string test5 = "a@b";     // invalid: special character

    Solution sol;
    cout << test1 << ": " << (sol.isValid(test1) ? "Valid" : "Invalid") << endl;
    cout << test2 << ": " << (sol.isValid(test2) ? "Valid" : "Invalid") << endl;
    cout << test3 << ": " << (sol.isValid(test3) ? "Valid" : "Invalid") << endl;
    cout << test4 << ": " << (sol.isValid(test4) ? "Valid" : "Invalid") << endl;
    cout << test5 << ": " << (sol.isValid(test5) ? "Valid" : "Invalid") << endl;

    return 0;
}


    
   
