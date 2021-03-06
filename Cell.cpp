//==============================
//    INCLUDES
//==============================

#include "Cell.h"

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================

//==============================
//    CONSTRUCTORS
//==============================

Cell::Cell()
{
  p_.reserve(3);
  p_.push_back(50);
  p_.push_back(0);
  p_.push_back(0);
}

Cell::Cell(float a, float b, float c)
{
  p_.reserve(3);
  p_.push_back(a);
  p_.push_back(b);
  p_.push_back(c);
}


//==============================
//    DESTRUCTOR
//==============================

Cell::~Cell(){

}

//==============================
//    PUBLIC METHODS
//==============================

