#include <iostream>
#include "Node.h"
#include "BSTree.h"
#include "challenges.h"

int main(){
  BSTree * s = new BSTree();
  s->insert(10);
  s->insert(20);
  s->insert(30);
  s->insert(5);
  std::cout<<s->get_debug_string()<<"\n";
  Node* a = s->getRoot();
  std::cout << num_nodes(a) << '\n';
  std::cout << sum_nodes(a) << '\n';
  std::cout << height(a) << '\n';
  std::cout << sum_at_level(a, 1) << '\n';
  std::cout << root_to_leaf(a) << '\n';

  return 0;
}
