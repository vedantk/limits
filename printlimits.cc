#include <bitset>
#include <cstdint>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

template <typename T> void dump(const string &Name) {
  cout << Name << " min: " << numeric_limits<T>::min() << endl;
  cout << Name << " min: " << bitset<sizeof(T) * 8>(numeric_limits<T>::min())
       << endl;
  cout << Name << " max: " << numeric_limits<T>::max() << endl;
  cout << Name << " max: " << bitset<sizeof(T) * 8>(numeric_limits<T>::max())
       << endl;
  cout << endl;
}

#define DUMP(T) dump<T>(#T)

int main() {
  DUMP(int32_t);
  DUMP(int64_t);

  DUMP(size_t);

  DUMP(uint32_t);
  DUMP(uint64_t);

  return 0;
}
