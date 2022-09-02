
#include <iostream>

typedef struct mbt {
  int value;
  struct mbt* left_tree;
  struct mbt* right_tree;
} binary_tree;

binary_tree a, b, c;

int main()
{
  a.value = 10;
  b.value = 20;
  c.value = 55;
  a.left_tree = &b;
  a.right_tree = &c;
  b.left_tree = NULL;
  b.right_tree = NULL;
  c.left_tree = NULL;
  c.right_tree = NULL;
  std::cout << a.left_tree->value << std::endl;
  return 0;
}


