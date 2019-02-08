#ifndef MARKOV_H
#define MARKOV_H

#include <string>
#include <fstream>
#include <map>

#include "Next.hpp"

class Markov {

private:
  int n;
  std::map<std::string, int> dictionary;
  std::map<std::string, Next> markov;
  std::string read(std::ifstream*, int);

public:
  Markov(std::string, int);
  void increment(std::string);

};

#endif
