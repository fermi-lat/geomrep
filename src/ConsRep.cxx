//  $Header: /cvs/arve/graphics/ConsRep.cxx,v 1.1.1.1 1998/06/19 17:09:46 burnett Exp $
//   Author: T. Burnett

#include "geomrep/ConsRep.h"

#include "geometry/Cons.h"


inline static void createPolyLine(ArvePlottableRep* v, Vector a[], unsigned n)
{
    v->move_to(a[0]);
    for(unsigned i=1;i<n;i++)
	v->line_to(a[i]);
}


void ConsRep::update()
{

}

