//     $Id: ArcRep.h,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics 

#ifndef ARCREP_H
#define ARCREP_H
#include "graphics/GraphicsRep.h"
#include "geometry/Point.h"
#include "geometry/Vector.h"

class ArcRep : public GraphicsRep {
public:
    ArcRep( const Point& center, double radius, const Vector& xhat,
	const Vector& yhat, double phi0);
    // constructor: specify parameters

    void update();
    
private:
    Point m_center;
    double m_radius;
    Vector m_xhat, m_yhat;
    double m_phi0;
};

#endif //ARCREP_H
