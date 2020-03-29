#include <iostream>
#include "stack.h"
#include "List.h"
#include "Node.h"
#include <vector>
#include<string>
// #include<array>
// #include "vector.h"

int main()
{
  stack *s = new stack();
  std::cout << s->is_empty() << '\n';
  std::cout<< s->top()<< '\n';
  s->push(3);
  s->push(4);
  s->push(5);
  std::vector<int> a = s->get_vector();
  for(int i = 0; i < a.size(); i++){
    std::cout << a[i] << "--> ";
  }
  std::cout << '\n';
  std::cout<<s->pop()<<'\n';

  std::vector<int> w = s->get_vector();
  std::cout << "W SIXE" << w.size() << '\n';
  for(int i = 0; i < w.size(); i++){
    std::cout << w[i] << "--> ";
  }
  std::cout << '\n';
  std::cout << s->top() << '\n';
  std::cout << "IS EMPTY"<< s->is_empty() << '\n';
  // s->push(9);
  s->swap();

  std::vector<int> r = s->get_vector();
  std::cout << "R SIXE" << r.size() << '\n';

  for(int i = 0; i < r.size(); i++){
    std::cout << r[i] << "--> ";
  }
  std::cout << '\n';
  stack *n = new stack();
  std::vector<int> v;
  for(int i =1; i <4; i++){
    v.push_back(i);
  }
  std::cout << v.size()<< '\n';
  // for(int i = 0; i<g.size(); i++){
  //   g[i] = i;
  //   std::cout << g[i] << '\n';
  // }
  // std::cout << g << '\n'
  std::vector<int> u = n->initialize(v);
  std::vector<int> y = n->get_vector();
  for(int i =0; i<u.size(); i++){
    std::cout << y[i] <<" "<<u[i] << " "<< v[i] <<'\n';
  }

  stack *q = new stack();
  q->push(3);
  std::cout << "i" << '\n';
  q->swap();
  std::cout << "i" << '\n';
}
