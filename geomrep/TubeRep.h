// $Header: /cvs/cmt/geomrep/geomrep/TubeRep.h,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Tube with ArveScene

#ifndef TUBEREP_H
#define TUBEREP_H

#include "graphics/GraphicsRep.h"
#include "geometry/Tube.h"

class Shape;

class TubeRep : public GraphicsRep {
    
public:
    TubeRep(const Tube& tube):m_tube(tube){};
    
    TubeRep(const Shape& shape); 
    // special down-casting constructor
    
    void update();
private:
    const Tube& m_tube;
};
#endif //TUBEREP_H

