//      $Id: ConeRep.h,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//   Author: T. Burnett
//  Project: Arve graphics
//
// Representation of a Cone with ArveScene

#ifndef CONEREP_H
#define CONEREP_H
#include "graphics/GraphicsRep.h"

class Cone;

class ConeRep : public GraphicsRep {

public:
    ConeRep(const Cone& cone):m_cone(cone){};
    void update();
private:
    const Cone& m_cone;
};
#endif //CONEREP_H
