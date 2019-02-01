#include <iostream>

#include "Tree.hpp"

int Tree::size = 0;
int Tree::logsize = 0;

Tree::Tree() {
  this->index = -1;
  this->size = 0;
  this->sons = new Tree*[alphabetSize];
  for(int i = 0; i < alphabetSize; ++i)
    this->sons[i] = new Tree(i);
}

Tree::Tree(int i) {
  this->index = i;
  this->size++;
  this->sons = new Tree*[alphabetSize];
  if(this->size > (1 << this->logsize))
    this->logsize++;
}

void Tree::writeInt(int n) {
  for(int i = 0; i < this->logsize; ++i) {
    std::cout << n % 2;
    n /= 2;
  }
}
