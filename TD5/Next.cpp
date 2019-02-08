#include "Next.hpp"

#include <vector>

void Next::add(char c, int t) {
  this->total += t;
  this->next.push_back(c);
  this->n.push_back(t);
}
