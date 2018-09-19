#ifndef car_h
#define car_h
#include <iostream>
#include <string>

struct Cars{
  std::string modelName_;
  std::string license_;
  int mileage_;

  Cars:Cars("", "", 0){}
  Cars(const std::string& modelName, const std::string& license, int mileage): modelName_(modelName), license_(license), mileage_(mileage){}
  
}

#endif
