#include "multimap-homework.hpp"
#include <string>
using namespace std;

unordered_multimap<int, string> multimapa() {
  std::unordered_multimap<int, string> map;
  map.insert({10, "Ten"});
  map.insert({11, "Eleven"});
  return map;
}
