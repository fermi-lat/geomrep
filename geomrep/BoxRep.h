//  $Header: /nfs/slac/g/glast/ground/cvs/geomrep/geomrep/BoxRep.h,v 1.2 2000/01/18 00:35:03 burnett Exp $
//   Author: Toby Burnett
//  Project: Arve graphics 
// 
// Display of any Hexahedron by ArveScene

#ifndef BOXREP_H
#define BOXREP_H

#include "gui/DisplayRep.h"
class Hexahedron;
class Shape;

class BoxRep : public gui::DisplayRep {
    // Represent a Hexahedron with Arve graphics
public:
    BoxRep(const Hexahedron& box) 
	: m_box(box){};

    BoxRep(const Shape& shape); 
    // special down-casting constructor
    
    virtual void update();

private:
    const Hexahedron& m_box;

};
#endif //BOXREP_H
