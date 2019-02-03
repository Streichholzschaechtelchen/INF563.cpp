#include <string>
#include <fstream>
#include <iostream>
#include <vector>

#include "Dictionary.hpp"


Dictionary::Dictionary() {
  for(int i = 0; i < alphabetSize; ++i)
    this->addWord(std::string(1, (char) i));
}

void Dictionary::addWord(std::string w) {
  this->dict.push_back(w);
  this->size++;
  if(this->size > (1 << this->logsize))
    this->logsize++;
}

int Dictionary::readInt(std::ifstream* is, int n) {
  int l = 0;
  char c;
  for(int i = 0; i < n; ++i) {
    do {
      if (!is->get(c))
	return -1;
      c -= '0';
    } while ((c != 0) && (c != 1));
    if(c == 1)
      l += (1 << i);
  }
  return l;
}
