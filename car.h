#ifndef car_h
#define car_h
#include <iostream>
#include <string>
#include <fstream>
#inclde <vector>

struct Cars{
  std::string modelName_;
  std::string license_;
  int mileage_;
  std::vector<std::string> vModelName;
  ifstream myfiles_;

  Cars:Cars("", "", 0){}
  Cars(const std::string& modelName, const std::string& license, int mileage): modelName_(modelName), license_(license), mileage_(mileage){}

  void obtainstuff(std::string filename){
    myfiles_.open(filename);
    if(!myfiles_.is_open()){
      std::cerr << "Error in opening: " << filename <<  '\n';
    }
    else{

    }
    myfiles_.close();
  }


}

#endif
