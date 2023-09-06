#include <iostream>
#include <string>

class PrimeDecomp
{
public:
    static std::string factors(int lst);
};

std::string itos(int a) {
    int i = 0;
    int determ = 10;

    while (a / determ) {
        i++;
        determ *= 10;
    }
    std::string answ;
    answ.resize(i + 1);
    for(i; i >= 0; i--) {
        answ[i] = ((a % 10) + '0');
        a /= 10;
    }
    return(answ);
}

std::string PrimeDecomp::factors(int lst) {
    int x = 2;
    int j = 0;
    std::string answ;
    while (lst > 1) {
        j = 0;
        while ((lst / x) && (lst % x == 0)) {
            lst /= x;
            j++;
        }
        if(j) {
            answ.push_back('(');
            answ += (itos(x));
            if(j > 1) {
                answ += "**";
                answ += (itos(j));
            }
            answ.push_back(')');
        }
        x++;
    }
    return(answ);
}

int main() {
    PrimeDecomp obj;
    std::cout << obj.factors(8624089);
    
    return(0);
}