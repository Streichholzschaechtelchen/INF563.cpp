#ifndef GOLAY_H
#define GOLAY_H

class Golay  {

public:
  static int *G;
  static const int length = 24;
  int *H = 0;
  int *cw = 0;
  int *stdTable = 0;

  Golay();
  void computeH();

};

#endif
