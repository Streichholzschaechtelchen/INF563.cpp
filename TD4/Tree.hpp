#ifndef ARBRE_H
#define ARBRE_H

class Tree {

private:
  static const int alphabetSize = 256;
  
public:
  static int size;
  static int logsize;
  Tree **sons;
  int index;
  Tree();
  Tree(int);
  void writeInt();
  
};

#endif
