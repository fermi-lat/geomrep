// $Header: /nfs/slac/g/glast/ground/cvs/geomrep/geomrep/TubsRep.h,v 1.2 2000/01/18 00:35:05 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Tube with ArveScene

#ifndef TUBSREP_H
#define TUBSREP_H
#include "gui/DisplayRep.h"

class Tubs;

class TubsRep : public gui::DisplayRep {

public:
    TubsRep(const Tubs& tubs):m_tubs(tubs){};
    void update();
private:
    const Tubs& m_tubs;
};
#endif //TUBSREP_H

