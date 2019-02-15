#ifndef TEST_H
#define TEST_H

#include <fstream>

int main(int, char**);

void coder(std::ifstream*);
void canal(std::ifstream*, double);
void decoder(std::ifstream*);
void distance(std::ifstream*, std::ifstream*);

const int code[] = {
  0x0000, 0x0137, 0x02E6, 0x035A, 0x04D3, 0x05AA, 0x060F, 0x07FD,
  0x08AD, 0x09D4, 0x0A71, 0x0B83, 0x0C7E, 0x0D49, 0x0E98, 0x0F24,
  0x10F8, 0x11CF, 0x1295, 0x1329, 0x1465, 0x151C, 0x1632, 0x17C0,
  0x181B, 0x1962, 0x1A4C, 0x1BBE, 0x1C86, 0x1DB1, 0x1EEB, 0x1F57,
  0x209E, 0x216C, 0x22C9, 0x23B0, 0x2439, 0x2585, 0x2654, 0x2763,
  0x2847, 0x29FB, 0x2A2A, 0x2B1D, 0x2CE0, 0x2D12, 0x2EB7, 0x2FCE,
  0x30A3, 0x3151, 0x327F, 0x3306, 0x344A, 0x35F6, 0x36AC, 0x379B,
  0x3834, 0x3988, 0x3AD2, 0x3BE5, 0x3CDD, 0x3D2F, 0x3E01, 0x3F78,
  0x405D, 0x41E1, 0x42BB, 0x438C, 0x44B4, 0x4546, 0x4668, 0x4711,
  0x48CA, 0x4938, 0x4A16, 0x4B6F, 0x4C23, 0x4D9F, 0x4EC5, 0x4FF2,
  0x502E, 0x5192, 0x5243, 0x5374, 0x5489, 0x557B, 0x56DE, 0x57A7,
  0x58F7, 0x5905, 0x5AA0, 0x5BD9, 0x5C50, 0x5DEC, 0x5E3D, 0x5F0A,
  0x6072, 0x610B, 0x6225, 0x63D7, 0x64EF, 0x65D8, 0x6682, 0x673E,
  0x6891, 0x69A6, 0x6AFC, 0x6B40, 0x6C0C, 0x6D75, 0x6E5B, 0x6FA9,
  0x70C4, 0x71BD, 0x7218, 0x73EA, 0x7417, 0x7520, 0x76F1, 0x774D,
  0x7869, 0x795E, 0x7A8F, 0x7B33, 0x7CBA, 0x7DC3, 0x7E66, 0x7F94,
  0x806B, 0x8199, 0x823C, 0x8345, 0x84CC, 0x8570, 0x86A1, 0x8796,
  0x88B2, 0x890E, 0x8ADF, 0x8BE8, 0x8C15, 0x8DE7, 0x8E42, 0x8F3B,
  0x9056, 0x91A4, 0x928A, 0x93F3, 0x94BF, 0x9503, 0x9659, 0x976E,
  0x98C1, 0x997D, 0x9A27, 0x9B10, 0x9C28, 0x9DDA, 0x9EF4, 0x9F8D,
  0xA0F5, 0xA1C2, 0xA213, 0xA3AF, 0xA426, 0xA55F, 0xA6FA, 0xA708,
  0xA858, 0xA921, 0xAA84, 0xAB76, 0xAC8B, 0xADBC, 0xAE6D, 0xAFD1,
  0xB00D, 0xB13A, 0xB260, 0xB3DC, 0xB490, 0xB5E9, 0xB6C7, 0xB735,
  0xB8EE, 0xB997, 0xBAB9, 0xBB4B, 0xBC73, 0xBD44, 0xBE1E, 0xBFA2,
  0xC087, 0xC1FE, 0xC2D0, 0xC322, 0xC41A, 0xC52D, 0xC677, 0xC7CB,
  0xC864, 0xC953, 0xCA09, 0xCBB5, 0xCCF9, 0xCD80, 0xCEAE, 0xCF5C,
  0xD031, 0xD148, 0xD2ED, 0xD31F, 0xD4E2, 0xD5D5, 0xD604, 0xD7B8,
  0xD89C, 0xD9AB, 0xDA7A, 0xDBC6, 0xDC4F, 0xDD36, 0xDE93, 0xDF61,
  0xE0A8, 0xE114, 0xE24E, 0xE379, 0xE441, 0xE5B3, 0xE69D, 0xE7E4,
  0xE83F, 0xE9CD, 0xEAE3, 0xEB9A, 0xECD6, 0xED6A, 0xEE30, 0xEF07,
  0xF0DB, 0xF167, 0xF2B6, 0xF381, 0xF47C, 0xF58E, 0xF62B, 0xF752,
  0xF802, 0xF9F0, 0xFA55, 0xFB2C, 0xFCA5, 0xFD19, 0xFEC8, 0xFFFF
};

#endif
