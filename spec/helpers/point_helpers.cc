#include <string>
#include <ostream>
#include "runtime/length.h"

using namespace std;

bool operator==(const TSPoint &left, const TSPoint &right) {
  return left.row == right.row && left.column == right.column;
}

bool operator==(const TSRange &left, const TSRange &right) {
  return left.start == right.start && left.end == right.end;
}

std::ostream &operator<<(std::ostream &stream, const TSPoint &point) {
  return stream << "{" << point.row << ", " << point.column << "}";
}

std::ostream &operator<<(std::ostream &stream, const TSRange &range) {
  return stream << "{" << range.start << ", " << range.end << "}";
}

bool operator<(const TSPoint &left, const TSPoint &right) {
  if (left.row < right.row) return true;
  if (left.row > right.row) return false;

  return left.column < right.column;
}

bool operator>(const TSPoint &left, const TSPoint &right) {
  return right < left;
}
