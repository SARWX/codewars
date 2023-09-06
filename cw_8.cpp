#include <iostream>
#include <vector>
#include <string>

int countSmileys(std::vector<std::string> arr) {
    int counter = 0;
    for (int i = 0; i < (int)arr.size(); i++) {
        if (arr[i].size() > 3)
            continue;
        int j = 0;
        if ( (arr[i][j] != ':') && (arr[i][j] != ';') ) {
            continue;
        }
        j++;
        if ( (arr[i][j] == ')') || (arr[i][j] == 'D') ) {
            counter++;
            continue;
        } else if ( (arr[i][j] != '~') && (arr[i][j] != '-') ) {
            continue;
        }
        j++;
        if ( (arr[i][j] == ')') || (arr[i][j] == 'D') )
            counter++;
    }
    return(counter);
}

int main() {
    std::cout << countSmileys({":D", ":~)", ";~)", ":)"});
    
    return(0);
}