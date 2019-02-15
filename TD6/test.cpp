#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "test.hpp"

int main(int argc, char **argv) {

  if(argc < 3) {
    std::cerr << "2 arguments needed." << std::endl;
    exit(-1);
  }
  std::ifstream *ifs = new std::ifstream(argv[2]);
  std::string action(argv[1]);
  if(action == "coder")
    coder(ifs);
  else if(action == "canal") {
    if(argc < 4) {
      std::cerr << "3 arguments needed for action \'canal\'." << std::endl;
      exit(-1);
    }
    canal(ifs, atof(argv[3]));
  }
  else if(action == "decoder")
    decoder(ifs);
  else if(action == "distance") {
    if(argc < 4) {
      std::cerr << "3 arguments needed for action \'distance\'." << std::endl;
      exit(-1);
    }
    std::ifstream *ifs2 = new std::ifstream(argv[3]);
    distance(ifs, ifs2);
    ifs2->close();
  }
  else {
    std::cerr << "Invalid action " << argv[1] << " given." << std::endl;
    exit(-1);
  }
  ifs->close();
  return 0;

}

void coder(std::ifstream *ifs) {

}

void canal(std::ifstream *ifs, double p) {

}

void decoder(std::ifstream *ifs) {

}

void distance(std::ifstream *ifs, std::ifstream *ifs2) {

}
