// $Header: /nfs/slac/g/glast/ground/cvs/geomrep/geomrep/TubeRep.h,v 1.2 2000/01/18 00:35:04 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Tube with ArveScene

#ifndef TUBEREP_H
#define TUBEREP_H

#include "gui/DisplayRep.h"
#include "geometry/Tube.h"

class Shape;

class TubeRep : public gui::DisplayRep {
    
public:
    TubeRep(const Tube& tube):m_tube(tube){};
    
    TubeRep(const Shape& shape); 
    // special down-casting constructor
    
    void update();
private:
    const Tube& m_tube;
};
#endif //TUBEREP_H

