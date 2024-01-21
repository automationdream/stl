#include "multimapHomework.hpp"
#include <string>
using namespace std;

string multimapa() {
  std::unordered_multimap<int, string> map;
  map.insert({10, "Ten"});
  map.insert({11, "Eleven"});
  return "Ten";
}
