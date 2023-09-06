#include <vector>

class SqInRect {
  public:
  static std::vector<int> sqInRect(int lng, int wdth) {
    std::vector<int> answ;
    if (lng == wdth) {
        return answ;
    }
    int min;
    while (((lng > 1) || (wdth > 1)) && (lng != 0) && (wdth != 0)) {

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
    if (min == 1)
      answ.push_back(1);
    return (answ);
    };
};