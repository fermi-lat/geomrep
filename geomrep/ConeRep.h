//      $Id: ConeRep.h,v 1.2 1999/05/14 15:34:06 burnett Exp $
//   Author: T. Burnett
//  Project: Arve graphics
//
// Representation of a Cone with ArveScene

#ifndef CONEREP_H
#define CONEREP_H
#include "graphics/ArvePlottableRep.h"

class Cone;

class ConeRep : public ArvePlottableRep {

public:
    ConeRep(const Cone& cone):m_cone(cone){};
    void update();
private:
    const Cone& m_cone;
};
#endif //CONEREP_H
