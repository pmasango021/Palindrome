#include <iostream>

//A palindrome is any text that has the same characters backwards as it does forwards.
// For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.

bool is_palindrome(std::string text) {
    std::string reverse_text = ""; //
    for (int i = text.size() - 1; i >= 0; i--) {
        reverse_text += text[i];
    }
    if (reverse_text == text) {
        return true;
    } else {
        return false;
    }
}

int main() {

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

}
