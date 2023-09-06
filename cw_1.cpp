#include <iostream>

std::string reverse_words(std::string str) {
    std::string reversed = str;
    int j, i = 0, cur = -1, k = 0;
    int size = str.size();
    while(cur < size) {
        while((str[i] != ' ') && (str[i])) {
            i++;
        }
        j = (i - 1);
        while(j != cur) {
            std::cout << str[j];
            reversed[k++] = str[j--];
        }
        if (str[i]) {
            std::cout << str[i];
            reversed[k++] = str[i];
        }
        cur = i++;
    }
    return reversed;
}

int main() {
    std::string probe = "Test fo r probe !";
    std::cout << reverse_words(probe);
    return(0);
}