//  $Header: /cvs/cmt/geomrep/src/ConsRep.cxx,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//   Author: T. Burnett

#include "geomrep/ConsRep.h"

#include "geometry/Cons.h"


inline static void createPolyLine(GraphicsRep* v, Vector a[], unsigned n)
{
    v->move_to(a[0]);
    for(unsigned i=1;i<n;i++)
	v->line_to(a[i]);
}


void ConsRep::update()
{

}

