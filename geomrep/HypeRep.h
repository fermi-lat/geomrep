// $Header: /nfs/slac/g/glast/ground/cvs/geomrep/geomrep/HypeRep.h,v 1.2 2000/01/18 00:35:04 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Hype with ArveScene

#ifndef TUBSREP_H
#define HYPEREP_H
#include "gui/DisplayRep.h"

class Hype;

class HypeRep : public gui::DisplayRep {

public:
    HypeRep(const Hype& hype):m_hype(hype){};
    void update();
private:
    const Hype& m_hype;
};
#endif //HYPEREP_H

