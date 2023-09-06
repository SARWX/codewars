#include <iostream>
#include <string>
#include <sstream>


std::string to_camel_case(std::string text) {
    std::stringstream answ;
    int i = 0;
    if (islower(text[i])) {
            while ((text[i] != '_') && (text[i] != '-') && (text[i])) {
                answ << text[i++];
            }
            while((text[i] == '_') || (text[i] == '-') && (text[i])) {
            i++;
            }
        }
    while(i < text.size()) {
        while((text[i] == '_') || (text[i] == '-') && (text[i])) {
        i++;
        }
        answ << (char)toupper(text[i++]);
        while ((text[i] != '_') && (text[i] != '-') && (text[i])) {
            answ << text[i++];
        }
    } 
    
    return answ.str();
}

int main() {
    std::cout << to_camel_case("the_stealth_warrior");
    return(0);
}