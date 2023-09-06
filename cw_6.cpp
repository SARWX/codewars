#include <cmath>
#include <iostream>

class ASum
{
  public:
  static long long findNb(long long m);
};

long long ASum::findNb(long long m) {
    long long int a = (long long int)sqrt(m * 4);
    a = (long int) sqrt(a);
    long long int b = ((a * (a + 1)) / 2);
    b *= b;
    if (b == m)
        return (a);
    else
        return (-1);
}

int main() {
    std::cout << ASum::findNb(135440716410000);

    return(0);
}