#ifndef ENVIR_H
#define ENVIR_H 

//==============================
//    INCLUDES
//==============================

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
Envir();

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
void renewal();
void run();

protected:
//==============================
//    PROTECTED METHODS
//==============================

//==============================
//    ATTRIBUTES
//==============================
int W_;
int H_;
int T_;
float t;

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
