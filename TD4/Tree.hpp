#ifndef ARBRE_H
#define ARBRE_H

class Tree {

private:
  Tree **sons;
  int index;
  static int size;
  static int logsize;
  static const int alphabetSize = 256;
  
public:
  Tree();
  Tree(int);
  void writeInt(int);

};

#endif
