#include <Vector3.hpp>
#include <ostream>

int main() {
  Vector3 asd(1, 0, 0);
  Vector3 efg(0, 1, 0);

  std::cout << Vector3::CrossProduct(asd, efg) << std::endl;
}