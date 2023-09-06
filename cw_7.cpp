#include <iostream>
#include <vector>

std::vector<unsigned int> removeSmallest(const std::vector<unsigned int>& numbers) {
    std::vector<unsigned int> x;
    int smallest = 0;
    for(int i = 0; i < (int)numbers.size(); i++) {
        if (numbers[i] < numbers[smallest]) {
            smallest = i;
        }
    }
    for (int i = 0; i < (int)numbers.size(); i++) {
        if(i != smallest)
            x.push_back(numbers[i]);
    }
    
//   numbers.erase(numbers.begin() + smallest);
  return x;
}

void print(std::vector<unsigned int> numbers) {
    std::cout << "{ ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ' ';
    }
    std::cout << '}';
}

int main() {
    std::vector<unsigned int> check = {8, 2, 5, 6};
    print(check);
    print(removeSmallest(check));
    return(0);
}