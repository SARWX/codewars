#include <iostream>
#include <vector>

class SqInRect {
  public:
 // void get_g() {std::cout << 'g';};
  static std::vector<int> sqInRect(int lng, int wdth) {
    std::vector<int> answ;
    if (lng == wdth) {
        return answ;
    }
    while ((lng > 1) || (wdth > 1)) {
        int min;
        if (lng < wdth) {
            wdth -= lng;
            min = lng;
        }
        else {
            lng -= wdth;
            min = wdth;
        }
        answ.push_back(min);
    }
    answ.push_back(1);
    return (answ);
    };
};
/*
std::vector<int> sqInRect(int lng, int wdth) {
    std::vector<int> answ;
    while ((lng > 1) || (wdth > 1)) {
        int min = ( (lng < wdth) ? lng : wdth);
        lng -= min;
        wdth -= min;
        answ.push_back(min);
    }
    return (answ);
}
*/
int main () {
    SqInRect obj;
 //   obj.get_g();
    obj.sqInRect(5, 3);
    return (0);
}