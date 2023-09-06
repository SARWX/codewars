#include <string>
#include <iostream>
bool solution(std::string const &str, std::string const &ending) {
    int a = (str.size() - 1);
    int b = (ending.size() - 1);
    while (b >= 0) {
        if(str[a--] != ending[b--]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string const f = "Hello world!";
    std::string const s = "ld!p";
    std::cout << solution(f, s);

    return(0);
}