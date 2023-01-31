// this is a line of comment
// this is a second line of comment

#include "vecfuncs.h"

int main() {
  vector<int> userNums;
  fillVector(userNums);
  cout << "Size: " << userNums.size() << endl;

  int min, max;

  findExtremes(userNums, min, max);
  cout << "min: " << min << " max: " << max << endl;
}