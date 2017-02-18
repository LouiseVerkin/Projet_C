//==============================
//    INCLUDES
//==============================
#include "Envir.h"

//==============================
//    DEFINITION STATIC ATTRIBUTES
//==============================


//==============================
//    CONSTRUCTORS
//==============================
Envir::Envir(float T, float A)
{
  Ainit=A;
  //W_ = 32;
  //H_ = 32;
  T_=T;
  t = 0;
  grid_ = new Box[H_*W_]; /*advised way to do a 2D array in C++:
  * do it in 1D and access it with offsets.
  * To access box [i][j] : grid_[i * W_ + j] */
  renewal(Ainit); //initialize the culture media
  
}

//==============================
//    DESTRUCTOR
//==============================
Envir::~Envir()
{
  delete[] grid_;
}

//==============================
//    PUBLIC METHODS
//==============================
void Envir::diffusion()
{
  
}

void Envir::division()
{
  
}

void Envir::renewal(float f)
{
  //renew the culture media 
  for(int i=0; i<W_; i++){
    for(int j=0; j<H_; j++){
	  grid_[i*W_+j].getConc()[0]=f;
	  grid_[i*W_+j].getConc()[1]=0;
	  grid_[i*W_+j].getConc()[2]=0;
	}
  }
}

void Envir::run(){
}
