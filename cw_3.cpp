#include <iostream>
#include <vector>

int findOdd(const std::vector<int> numbers) {
    std::vector<int> numbers_1 = numbers; 
    int search_odd = numbers_1.size();
    numbers_1.push_back(numbers_1[0]);
    for(int i = 1; i < search_odd; i++) {
        int j = search_odd;
        bool odd = true;
        do {
            if ((numbers_1[j] == numbers_1[i]) && (j != numbers_1.size())) {
                odd = false;
                numbers_1[j] = *(--numbers_1.end());
                numbers_1.pop_back();
            }
            j++;
        } while (j < numbers_1.size());
        if (odd) {
            numbers_1.push_back(numbers_1[i]);
        }
        
        for(int k = 0; k < numbers_1.size(); k++)
            std::cout << numbers_1[k] << " ";
        std::cout << std::endl;
    }
        int answ = *(--numbers_1.end());
    return(answ);
}


int main() {
    const std::vector<int> n = {-8, -1, -8, 2, -1, -1, 2, -8, -10, -4, -8, -8, -8, -1, 2, -4, 2, -4, -8, -4, -8, -8, 2, 2, -8};
    std::cout << findOdd(n);

    return 0;
}