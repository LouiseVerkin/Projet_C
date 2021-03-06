#ifndef SCell_H
#define SCell_H 

//==============================
//    INCLUDES
//==============================

#include "Cell.h"

using std::vector;

/**
 * @class SCell
 * @brief Creates a SCell, Cell
 */


class SCell : public Cell {
public:
//==============================
//    CONSTRUCTORS
//==============================
  SCell();
  SCell(float a, float b, float c);

//==============================
//    DESTRUCTOR
//==============================
  ~SCell();

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
  float 				Fitness();
  void 					Metabolism(vector<float> conc, float t);
  char 					LorS();

protected:
//==============================
//    PROTECTED METHODS
//==============================

//==============================
//    ATTRIBUTES
//==============================
  
  const float 		Rbb_;
  const float 		Rbc_;

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


#endif // SCell_H