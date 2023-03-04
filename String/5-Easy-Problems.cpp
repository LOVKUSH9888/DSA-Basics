//1.Reverse a string: Given a string, reverse it and return the reversed string.
#include <iostream>
using namespace std;

string reverseString(string str) {
    string result = ""; // Initialize an empty string to store the reversed string
    for(int i = str.length() - 1; i >= 0; i--) { // Iterate over the characters in the string in reverse order
        result += str[i]; // Append each character to the result string
    }
    return result; // Return the reversed string
}

int main() {
    string str = "hello world";
    cout << "Original string: " << str << endl;
    string reversedStr = reverseString(str);
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}


//2.Check if a string is a palindrome: Given a string, check if it is a palindrome (i.e., reads the same backwards as forwards).
#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1; // Initialize two pointers to the start and end of the string
    while(left < right) { // Iterate until the pointers meet in the middle
        if(str[left] != str[right]) { // If the characters at the pointers don't match, the string is not a palindrome
            return false;
        }
        left++; // Increment the left pointer
        right--; // Decrement the right pointer
    }
    return true; // If the function hasn't returned false by this point, the string is a palindrome
}

int main() {
    string str1 = "racecar";
    string str2 = "hello";
    cout << str1 << " is " << (isPalindrome(str1) ? "" : "not ") << "a palindrome." << endl;
    cout << str2 << " is " << (isPalindrome(str2) ? "" : "not ") << "a palindrome." << endl;
    return 0;
}

//3.Count the number of vowels in a string: Given a string, count the number of vowels (i.e., 'a', 'e', 'i', 'o', 'u') in the string.
#include <iostream>
using namespace std;

int countVowels(string str) {
    int count = 0; // Initialize a counter for the number of vowels
    for(int i = 0; i < str.length(); i++) { // Iterate over the characters in the string
        char c = tolower(str[i]); // Convert the character to lowercase
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // If the character is a vowel, increment the counter
            count++;
        }
    }
    return count; // Return the number of vowels in the string
}

int main() {
    string str = "hello world";
    cout << "Number of vowels in " << str << ": " << countVowels(str) << endl;
    return 0;
}


//4.Convert a string to uppercase: Given a string, convert all the characters to uppercase.
#include <iostream>
#include <cctype>
using namespace std;

string toUppercase(string str) {
    for(int i = 0; i < str.length(); i++) { // Iterate over the characters in the string
        str[i] = toupper(str[i]); // Convert each character to uppercase
    }
    return str; // Return the uppercase string
}

int main() {
    string str = "hello world";
    cout << "Original string: " << str << endl;
    string uppercasedStr = toUppercase(str);
    cout << "Uppercased string: " << uppercasedStr << endl;
    return 0;
}


//5.
