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
void diffusion();
void division();
void renewal(float f);
void run();

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
float t;
float Ainit;
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
