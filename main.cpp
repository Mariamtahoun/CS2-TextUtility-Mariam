#include <iostream>
#include "text_utility.h"

using namespace std;

int main() {
    char str1[] = "hello world";
    char str2[] = "madam";
    char str3[] = "This is a test test";
    int count;

    wordCount(str1, count);
    cout << "Word count: " << count << endl;

    charCount(str1, count);
    cout << "Char count: " << count << endl;

    int v, c;
    vowelConsonantCount(str1, v, c);
    cout << "Vowels: " << v << ", Consonants: " << c << endl;

    char str4[] = "reverse";
    reverseString(str4);
    cout << "Reversed: " << str4 << endl;

    cout << "Is palindrome: " << (isPalindrome(str2) ? "Yes" : "No") << endl;

    char upper[] = "upper";
    toUppercase(upper);
    cout << "Uppercase: " << upper << endl;

    char lower[] = "LOWER";
    toLowercase(lower);
    cout << "Lowercase: " << lower << endl;

    cout << "Occurrences of 'test': " << substringOccurrence(str3, "test") << endl;

    const char* plain = "attackatdawn";
    const char* key = "lemon";
    char encrypted[100];
    vigenereEncrypt(plain, key, encrypted);
    cout << "Vigenere encrypted: " << encrypted << endl;

    return 0;
}
