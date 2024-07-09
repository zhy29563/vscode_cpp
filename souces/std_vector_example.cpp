#include <iostream>
#include <type_traits>
#include <typeinfo>
#include <vector>

static void PrintVectorElements(const std::vector<int>& vec) {
  std::cout << "vec = { ";
  for (int n : vec) {
    std::cout << n << ", ";
  }
  std::cout << "};\n";
}

static void PrintVectorProperties(const std::vector<int>& vec) {
  std::cout << "size    : " << vec.size() << std::endl;
  std::cout << "capacity: " << vec.capacity() << std::endl;
  std::cout << "max_size: " << vec.max_size() << std::endl;
  std::cout << "max_size: " << vec.empty() << std::endl;
  std::cout << "data    : " << vec.data() << std::endl;
}

int main() {
  std::vector<int> vec_int;
  PrintVectorProperties(vec_int);

  vec_int.resize(10);
  PrintVectorProperties(vec_int);

  std::cout << typeid(std::vector<int>).name() << vec_int.size() << std::endl;

  // 增
  vec_int.push_back(10);
  vec_int.emplace_back(20);
  vec_int.insert(vec_int.begin(), 30);
  PrintVectorElements(vec_int);

  int a = 100;
  vec_int.emplace_back(a);
  a                           = 200;
  vec_int[vec_int.size() - 1] = 400;
  std::cout << "a = " << a << std::endl;
  PrintVectorElements(vec_int);

  // 改

  // 查

  // 删

  return EXIT_SUCCESS;
}