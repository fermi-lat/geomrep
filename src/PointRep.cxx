// $Header: /cvs/arve/graphics/PointRep.cxx,v 1.1.1.1 1998/06/19 17:09:46 burnett Exp $
//  Author: T. Burnett
//

#include "geomrep/PointRep.h"
#include "CLHEP/Vector/ThreeVector.h"

void
PointRep::update()
{
   markerAt(m_point);
}


