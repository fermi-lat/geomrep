// $Header: /nfs/slac/g/glast/ground/cvs/geomrep/geomrep/SpheRep.h,v 1.2 2000/01/18 00:35:04 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Tube with ArveScene

#ifndef TUBEREP_H
#define TUBEREP_H

#include "gui/DisplayRep.h"

class Sphe;

class SpheRep : public gui::DisplayRep {

public:
    SpheRep(const Sphe& s):m_sphe(s){};
    void update();
private:
    const Sphe& m_sphe;
};
#endif //SPHEREP_H

