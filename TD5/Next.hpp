#ifndef NEXT_H
#define NEXT_H

#define INITIALSIZE 5

#include <vector>

class Next {

private:
  int total = 0;
  std::vector<char> next;
  std::vector<int> n;

public:
  void add(char, int);
  void doubleSize();

};

#endif
