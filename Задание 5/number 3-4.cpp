#include <iostream>
#include <fstream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian"); // Включает Русский язык в С++
    std::ifstream file("txt.txt"); // открываем файл для чтения
    std::string longestWord;
    std::string word;

    while (file >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    file.close();
    std::cout << "самое длинное слово: " << longestWord << std::endl;
    return 0;
}