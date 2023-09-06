#include <string>
#include <limits.h>
#include <iostream>
// #include <cctype>

std::string highAndLow(const std::string& numbers){
    int mnozh = 1;
    int x = 0;
    int max = INT_MIN, min = INT_MAX;
    int max_index = 0, min_index = 0;
  for (int i = ( (int) numbers.size() - 1); i >= -1; i-- ) {
    if ( ( numbers[i] == ' ' ) || ( i == -1 ) ) {
        mnozh = 1 ;
        if (x > max) {
            max = x;
            max_index = (i + 1);
        }
        if (x < min) {
            min = x;
            min_index = (i + 1);
        }
        x = 0;
    }
    else if (numbers[i] == '-') {
        x *= -1;
    }
    else {
        // x += mnozh * atoi(numbers[i]);
        x += mnozh * ( (int) (numbers[i] - '0') );
        mnozh *= 10;
    } 
 //    std::cout << min << ' ' << max << std::endl;
  }
  std::string answer;

    while ( (numbers[max_index] != ' ') && (max_index < numbers.size()) ) {
        answer.push_back( numbers[max_index++] );
    }
    answer.push_back(' ');
    while ( (numbers[min_index] != ' ') && (min_index < numbers.size()) ) {
        answer.push_back( numbers[min_index++] );
    }
  return (answer);
}

int main() {
    std::string numbers_1 = "12 99 -102123 7 43 6";
    std::cout << highAndLow (numbers_1);

    return(0);
}