//==============================
//    INCLUDES
//==============================
#include "SCell.h"



//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================


//==============================
//    CONSTRUCTORS
//==============================
SCell::SCell() : Cell(), Rbb_(0.1), Rbc_(0.1)
{
	w_ = Fitness();
}

SCell::SCell(float a, float b, float c) : Cell(a,b,c), Rbb_(0.1), Rbc_(0.1)
{
	
}


//==============================
//    DESTRUCTOR
//==============================
SCell::~SCell(){
}

//==============================
//    PUBLIC METHODS
//==============================

float SCell::Fitness(){
  if (p_[2] < WMIN_){
    return 0;
  }
  else{
    return p_[2];
  }
}

void SCell::Metabolism(vector<float> conc, float t){
  conc.at(1) += -t*conc.at(1)*Rbb_;
  p_.at(1) += t*(conc.at(1)*Rbb_-p_.at(1)*Rbc_);
  p_.at(2) += t*conc.at(1)*Rbc_;
  w_ = Fitness();
}
