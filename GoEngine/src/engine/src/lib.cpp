#include <unordered_set>


struct Point {
  unsigned int row;
  unsigned int col;
};


using PointSet = std::unordered_set<Point>;


enum Color {
  Black = 0,
  White = 1
};


