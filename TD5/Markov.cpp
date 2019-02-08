#include "Markov.hpp"

#include <string>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cmath>

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
    this->total++;
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

void Markov::fillMarkov() {

  this->markov.clear();

  std::map<std::string, int>::iterator it = this->dictionary.begin();

  while(it != this->dictionary.end()) {
    
    std::string key = it->first.substr(0, it->first.size() - 1);
    
    char value = it->first[it->first.size() - 1];
    if(this->markov.count(key)) {
      this->markov[key].add(value, it->second);
    }
    else {
      this->markov[key] = Next();
      this->markov[key].add(value, it->second);
    }
    
    it++;

  }


}

char Markov::predict(std::string pred) {

  //Assumes that pred is already in markov
  Next *next = &(this->markov[pred]);
  int total = next->total;
  int r = rand() % total;
  int i;
  for(i = 0; i < next->n.size(); i++) {
    r -= next->n[i];
    if(r <= 0)
      break;
  }
  return next->next[i];
}

double Markov::entropy() {

  double h;
  
  std::map<std::string, Next>::iterator it = this->markov.begin();

  while(it != this->markov.end()) {

    double l = (double) it->second.total / (double) this->total;
    std::vector<int>::iterator iu = it->second.n.begin();

    while(iu != it->second.n.end()) {
      double p = (float) *iu / (float) it->second.total;
      h -= p * log2(p) * l;
      iu++;
    }

    it++;
      
  }
  
  return h;

}
