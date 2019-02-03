#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string>
#include <fstream>
#include <vector>

class Dictionary {

private:
  static const int defaultSize = 1000;
  static const int alphabetSize = 256;

public:
  std::vector<std::string> dict;
  int size = 0;
  int logsize = 0;
  Dictionary();
  void addWord(std::string);
  static int readInt(std::ifstream*, int);

};

#endif
