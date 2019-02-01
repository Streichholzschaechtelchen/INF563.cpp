#include <string>
#include <fstream>

#include "Dictionary.hpp"

Dictionary::Dictionary() {
  this->tableSize = defaultSize;
  this->dict = new std::string[this->tableSize];
  for(int i = 0; i < alphabetSize; ++i) {
    this->addWord(std::string(1, (char) i));
  }
}

void Dictionary::addWord(std::string m) {
  if(this->size >= this->tableSize) {
    this->tableSize <<= 1;
    std::string* dict2 = new std::string[this->tableSize];
    for(int i = 0; i < this->size; ++i)
      dict2[i] = dict[i];
    delete this->dict;
    this->dict = dict2;
    this->dict[this->size] = m;
    this->size++;
    if(this->size > (1 << this->logsize))
      this->logsize++;
  }
}

int Dictionary::readInt(std::ifstream ifs, int n) {

  int l = 0;
  char c;
  for(int i = 0; i < n; ++i) {
    do {
      if (!ifs.get(c))
	return c;
      c -= '0';
    } while ((c != 0) && (c != -1));
    if(c == 1)
      l += (1 << i);
  }
  return l;

}
