//     $Id: ArcRep.h,v 1.2 2000/01/18 00:35:03 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics 

#ifndef ARCREP_H
#define ARCREP_H
#include "gui/DisplayRep.h"
#include "geometry/Point.h"
#include "geometry/Vector.h"

class ArcRep : public gui::DisplayRep {
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
