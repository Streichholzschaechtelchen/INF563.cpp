#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <fstream>

class Dictionary {

private:
  std::string* dict;
  int tableSize;
  int size = 0;
  int logsize = 0;
  static const int defaultSize = 1000;
  static const int alphabetSize = 256;

public:
  Dictionary();
  void addWord(std::string);
  int readInt(std::ifstream, int);

};

#endif
