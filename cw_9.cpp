#include <iostream>
#include <string>


bool valid_braces(std::string braces, int i = 0) {
    static int curr = 0;

    while ( (braces[curr] == '(' || braces[curr] == '[' || braces[curr] == '{') ) {
        curr++;
        if(valid_braces(braces, (curr - 1) ))
            ;
        else
            return(0);
    }
    if (curr < braces.size()) {
        switch (braces[i]) {
        case '(':
            if (braces[curr++] != ')')
                return(0);
            
            break;
        case '[':
            if (braces[curr++] != ']')
                return(0);
            
            break;
        case '{':
            if (braces[curr++] != '}')
                return(0);
            break;
        
        default:
            return(0);
            break;
        }
    }
    return(1);
}



int main() {
    std::cout << (valid_braces(")(}{]["));
    
    return(0);
}