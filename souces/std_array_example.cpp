#include <algorithm>
#include <array>
#include <deque>
#include <iostream>
#include <iterator>
#include <string>

struct Point {
  int x;
  int y;
};

int main() {
  std::array<Point, 3> a1{Point{1, 2}, Point{3, 4}, Point{5, 6}};
  std::array<Point, 3> a2 = a1;

  std::array<Point, 3> a3;
  a3 = a1;

  std::cout << "a1.data = " << a1.data() << std::endl;
  std::cout << "a2.data = " << a2.data() << std::endl;
  std::cout << "a3.data = " << a3.data() << std::endl;

  std::deque<uint8_t> d1{1, 2, 3};
  std::deque<uint8_t> d2 = d1;

  std::deque<uint8_t> d3;
  d3 = d1;

  d1.front() = 11;
  d2.front() = 22;
  d3.front() = 33;

  return EXIT_SUCCESS;
}