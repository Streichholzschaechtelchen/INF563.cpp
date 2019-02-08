#ifndef NEXT_H
#define NEXT_H

#define INITIALSIZE 5

#include <vector>

class Next {

public:
  int total = 0;
  std::vector<char> next;
  std::vector<int> n;
  void add(char, int);
  void doubleSize();
  Next();
 
};

#endif
