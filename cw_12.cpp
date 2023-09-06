#include <iostream>
#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  std::vector<T> answ;
    if (iterable.size())
        answ.push_back(iterable[0]);
    int j = 0;
    for (int i = 1; i < iterable.size(); i++) {
        if (iterable[i] != answ[j]) {
            answ.push_back(iterable[i]);
            j++;
        }
    }
    return(answ);
}
std::vector<char> uniqueInOrder(const std::string& iterable){
    std::vector<char> answ;
    if (iterable.size())
        answ.push_back(iterable[0]);
    int j = 0;
    for (int i = 1; i < iterable.size(); i++) {
        if (iterable[i] != answ[j]) {
            answ.push_back(iterable[i]);
            j++;
        }
    }
    return(answ);
}

template <typename T> void print(std::vector<T> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << (char)(input.at(i) + '0') << ' ';
    }
}
int main(int argc, char*argv[]) {
    print(uniqueInOrder(""));
    
    return(0);
}