#include <iostream>

typedef struct mbt {
  int value;
  struct mbt* children[3];
} tree;

tree a, b, c;

int main()
{
  a.value = 10;
  b.value = 204;
  c.value = 55;
  a.children[0] = &b;
  a.children[1] = &c;
  std::cout << a.children[0]->value << std::endl;
  return 0;
}
