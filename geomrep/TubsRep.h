// $Header: /cvs/cmt/geomrep/geomrep/TubsRep.h,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Tube with ArveScene

#ifndef TUBSREP_H
#define TUBSREP_H
#include "graphics/GraphicsRep.h"

class Tubs;

class TubsRep : public GraphicsRep {

public:
    TubsRep(const Tubs& tubs):m_tubs(tubs){};
    void update();
private:
    const Tubs& m_tubs;
};
#endif //TUBSREP_H

