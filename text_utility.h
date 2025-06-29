#ifndef TEXT_UTILITY_H
#define TEXT_UTILITY_H

void wordCount(const char* str, int& count);
void charCount(const char* str, int& count);
void vowelConsonantCount(const char* str, int& vowels, int& consonants);
void reverseString(char* str);
bool isPalindrome(const char* str);
void toUppercase(char* str);
void toLowercase(char* str);
int substringOccurrence(const char* str, const char* substr);
void vigenereEncrypt(const char* text, const char* key, char* result);

#endif
