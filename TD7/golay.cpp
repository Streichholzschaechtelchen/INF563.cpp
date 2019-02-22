#include "golay.hpp"

int *Golay::G = new int[12] {
    0xa3b001, 0xc76002, 0x8ed004, 0x9da008, 0xbb4010, 0xf68020,
    0xed1040, 0xda3080, 0xb47100, 0xe8e200, 0xd1d400, 0x7ff800
};

Golay::Golay() {
  this->computeH();
}

void Golay::computeH() {

  this->H = new int[24];
  for (int i = 0; i < 24; ++i)
    for (int j = 0; j < 12; ++j)
      if ((G[j] & (1 << i)) != 0)
	H[i] ^= (1 << j);

}

 
