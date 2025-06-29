#include "text_utility.h"
#include <cstring>
#include <cctype>

void wordCount(const char* str, int& count) {
    count = 0;
    bool inWord = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }
}

void charCount(const char* str, int& count) {
    count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
}

void vowelConsonantCount(const char* str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }
}

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

bool isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

void toUppercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int substringOccurrence(const char* str, const char* substr) {
    int count = 0;
    int len1 = strlen(str);
    int len2 = strlen(substr);
    for (int i = 0; i <= len1 - len2; i++) {
        bool found = true;
        for (int j = 0; j < len2; j++) {
            if (str[i + j] != substr[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            count++;
        }
    }
    return count;
}

void vigenereEncrypt(const char* text, const char* key, char* result) {
    int keyLen = strlen(key);
    int j = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if (c >= 'a' && c <= 'z') {
            int shift = key[j % keyLen] - 'a';
            result[i] = ((c - 'a' + shift) % 26) + 'a';
            j++;
        }
        else if (c >= 'A' && c <= 'Z') {
            int shift = key[j % keyLen] - 'a';
            result[i] = ((c - 'A' + shift) % 26) + 'A';
            j++;
        }
        else {
            result[i] = c;
        }
    }
    result[strlen(text)] = '\0';
}
