#ifndef ENVIR_H
#define ENVIR_H 

//==============================
//    INCLUDES
//==============================

#include "Box.h"

/**
 * @class Envir
 * @brief Creates an environment
 */

class Envir
{
public:
//==============================
//    CONSTRUCTORS
//==============================
Envir(float T, float Ainit);

//==============================
//    DESTRUCTOR
//==============================
virtual ~Envir();

//==============================
//    GETTERS
//==============================


//==============================
//    SETTERS
//==============================

//==============================
//    OPERATORS
//==============================

//==============================
//    PUBLIC METHODS
//==============================
void diffusion(Box b);
void division();
void renewal(float f);
void run(int rounds); //number of rounds

protected:
//==============================
//    PROTECTED METHODS
//==============================

//==============================
//    ATTRIBUTES
//==============================
static const int W_ = 32;
static const int H_ = 32;
float T_;
float t_;
float Ainit_;
Box* grid_;
};

//==============================
//    GETTER DEFINITION
//==============================


//==============================
//    SETTER DEFINITION
//==============================

//==============================
//    OPERATOR DEFINITION
//==============================


#endif // ENVIR_H
