#include <iostream>
#include "Node.h"
#include "QueueLL.h"
// #include "QueueA.h"

int main()
{
  QueueLL *l = new QueueLL();
  std::cout << l->is_empty() << '\n';
  l->enqueue(5);
  std::cout << l->getDebugString() << '\n';
  l->enqueue(1);
  std::cout << l->getDebugString() << '\n';

  l->enqueue(2);
  std::cout << l->getDebugString() << '\n';

  l->enqueue(3);
  l->enqueue(4);
  std::cout << l->getDebugString() << '\n';
  std::cout << l->dequeue() << '\n';
  std::cout << l->getDebugString() << '\n';
  std::cout << l->dequeue() << '\n';
  std::cout << l->dequeue() << '\n';
  std::cout << l->dequeue() << '\n';
  std::cout << l->dequeue() << '\n';
  try{
    std::cout << l->dequeue() << '\n';
    std::cout << "alll goodo" << '\n';
  }
  catch(int e){
    std::cout << "go exception: " << e << '\n';
  }
  // std::cout << l->dequeue() << '\n';
  std::cout << l->is_empty() << '\n';
  l->enqueue(3);
  std::cout << l->is_empty() << '\n';
  l->~QueueLL();
  std::cout << l->getDebugString() << '\n';

  // QueueA * t = new QueueA();
  // t->prin();
  // t->enqueue(1);
  // t->enqueue(2);
  // t->enqueue(3);
  // t->enqueue(4);
  // t->enqueue(5);
  // // a->enqueue(6);
  // t->prin();
  // std::cout << t->dequeue() << '\n';
  // std::cout << t->dequeue() << '\n';
  // std::cout << t->dequeue() << '\n';
  // t->prin();
  //
  // std::cout << t->dequeue() << '\n';
  // std::cout << t->dequeue() << '\n';
  // t->prin();
  // t->enqueue(1);
  // t->prin();
  // t->enqueue(2);
  // t->enqueue(3);
  // t->enqueue(4);
  // t->enqueue(5);
  // t->prin();
  // // t->enqueue(6);
  // // t->prin();
  // t->dequeue();
  // t->prin();
  // t->enqueue(6);
  // t->prin();
  // t->enqueue(7);
  // t->prin(); 
  // QueueA *a = new QueueA();
  // a->enqueue(1);
  // a->enqueue(2);
  // a->enqueue(3);
  // a->prin();
  // a->enqueue(4);
  // a->enqueue(5);
  // a->prin();
  // // a->enqueue(6);
  // // a->prin();
  // a->dequeue();
  // a->prin();
  // a->dequeue();
  // a->dequeue();
  // a->prin();
  // a->enqueue(6);
  // a->prin();
  // a->enqueue(7);
  // a->enqueue(8);
  // a->prin();
  // // a->enqueue(9);
  // // a->prin();
  // a->dequeue();
  // a->prin();
  // a->dequeue();
  // a->prin();
  // std::cout << "==============================" << '\n';
  // a->dequeue();
  // a->prin();
  // a->dequeue();
  // a->prin();
  // a->dequeue();
  // a->prin();
  // // std::cout << a->dequeue() << '\n';
  // try{
  //   a->dequeue();
  //   std::cout << "GoOD" << '\n';
  // }
  // catch(int e){
  //   std::cout << "got exception: " << e << '\n';
  // }
  // a->prin();
  // std::cout << "hehfiuehfuh" << '\n';
  // a->enqueue(9);
  // a->prin();
  // a->enqueue(10);
  // a->prin();
  // a->enqueue(11);
  // a->prin();
  // a->enqueue(12);
  // a->prin();
  // std::cout << "i" << '\n';
}
