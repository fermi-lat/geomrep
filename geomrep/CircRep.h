// $Header: /nfs/slac/g/glast/ground/cvs/geomrep/geomrep/CircRep.h,v 1.3 2001/01/23 01:40:11 burnett Exp $

#ifndef CIRCREP_H
#define CIRCREP_H

#include "gui/DisplayRep.h"


#include "geometry/Volume.h"

class CircRep : public gui::DisplayRep {

public:
    CircRep(const Point& p, double r, const Vector& xhat,
        const Vector& yhat):m_p(p),m_r(r),m_xhat(xhat),m_yhat(yhat){}
    void update();
    
private:
    const Point& m_p; 
    double m_r; 
    const Vector& m_xhat;    
    const Vector& m_yhat;
};
#endif //SPHEREP_H

