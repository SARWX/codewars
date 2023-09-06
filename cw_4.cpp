#include <string>
#include <cctype>
#include <iostream>

std::string alphabet_position(const std::string &text) {
    std::string answ;
    answ.reserve( text.size() * 3 );
  for (int i = 0; i < text.size(); i++) {
    if(isalpha(text[i])) {
        int x = ( (int) ( tolower(text[i]) ) - (int) 'a' + 1 );
        if ( x / 10) {
            answ.push_back( (char) ((x/10) + (int)'0') );
        }
        answ.push_back( (char) ((x%10) + (int)'0') );
        answ.push_back(' ');
    }
  }
  answ.pop_back();
  return answ;
}

int main() {
    std::cout << alphabet_position("The sunset sets at twelve o' clock.");
    return(0);
}