// $Header: /cvs/cmt/geomrep/geomrep/SpheRep.h,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Tube with ArveScene

#ifndef TUBEREP_H
#define TUBEREP_H

#include "graphics/GraphicsRep.h"

class Sphe;

class SpheRep : public GraphicsRep {

public:
    SpheRep(const Sphe& s):m_sphe(s){};
    void update();
private:
    const Sphe& m_sphe;
};
#endif //SPHEREP_H

