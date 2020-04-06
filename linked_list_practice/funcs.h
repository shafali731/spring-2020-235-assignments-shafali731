#include <iostream>
#include <string>
#include "Node.h"

Node *reverse(Node *l);
std::string getString(Node *a);
Node *merge(Node *a, Node *b); 
/* - given pointers a and b each to linked list of integers that are already sorted in increasing order,
 return a pointer to a new list where the lists pointed to by a and b are merged (and still in order).
 Try to do this without creating new nodes - that is, pull the nodes off the two parameter lists.
 This will complete a merge sort when combined with the test solutions.

*/
