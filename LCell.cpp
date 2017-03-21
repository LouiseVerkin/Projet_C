//==============================
//    INCLUDES
//==============================
#include "LCell.h"



//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================


//==============================
//    CONSTRUCTORS
//==============================
LCell::LCell() : Cell(), Raa_(0.1), Rab_(0.1) 
{
	w_ = Fitness();
}

LCell::LCell(float a, float b, float c) : Cell(a,b,c), Raa_(0.1), Rab_(0.1)
{
	w_ = Fitness();
}


//==============================
//    DESTRUCTOR
//==============================
LCell::~LCell(){
}

//==============================
//    PUBLIC METHODS
//==============================

float LCell::Fitness(){
  if (p_.at(1) < WMIN_){
  	//std::cout << "p_[1] = " << p_.at(1) << " < WMIN_" << std::endl;
  	float buf = 0;
    return buf;
  }
  else {
  	std::cout << "LCell : p_[1] = " << p_.at(1) << " is not inferior to WMIN_" << std::endl;
    return p_.at(1);
  }
}

void LCell::Metabolism(vector<float> conc,float t){
  conc.at(0) += -t*conc.at(0)*Raa_;
  p_.at(0) += t*(conc.at(0)*Raa_-p_.at(0)*Rab_);
  p_.at(1) += t*p_.at(0)*Rab_;
  w_ = Fitness();
}
