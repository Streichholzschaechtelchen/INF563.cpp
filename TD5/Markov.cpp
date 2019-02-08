#include "Markov.hpp"

#include <string>
#include <fstream>
#include <map>

Markov::Markov(std::string filename, int n) {

  std::string s, s1;
  this->n = n;
  std::ifstream *fis = new std::ifstream(filename);
  s = this->read(fis, n+1);
  this->increment(s);
  while((s1 = read(fis, 1)) != "") {
    s = s.substr(1) + s1;
    this->increment(s);
  }
  fis->close();

}

std::string Markov::read(std::ifstream *fis, int n) {

  std::string s = "";
  char c;
  for(int i = 0; i < n; i++) {
    if(!fis->get(c))
      return "";
    s += c;
  }
  return s;
  
}

void Markov::increment(std::string sequence) {

  int nextValue;
  if(this->dictionary.count(sequence))
    nextValue = this->dictionary[sequence] + 1;
  else
    nextValue = 1;
  this->dictionary[sequence] = nextValue;

}
