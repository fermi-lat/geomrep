//     $Id: ArcRep.cxx,v 1.4 1999/08/26 21:00:03 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics


#include "geomrep/ArcRep.h"
#ifdef _MSC_VER // for min, max
# include "CLHEP/config/TemplateFunctions.h"
#endif


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ArcRep::ArcRep( const Point& center, double radius,
	       const Vector& xhat, const Vector& yhat, double phi0)
//-------------------------------------------------------------------
	:m_center(center), m_radius(radius),
	m_xhat(xhat), m_yhat(yhat), m_phi0(phi0)
{}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void ArcRep::update()
//-------------------
{
    static const int ns=48;
    static const double dphi= 2.0*M_PI/(ns-1);
    double  phi=-m_phi0;
    move_to(m_center+m_radius*cos(phi)*m_xhat + m_radius*sin(phi)*m_yhat);
    for(int i=0; i<ns; i++)   {
	phi = std::min(m_phi0, phi+dphi) ;
	line_to( m_center + m_radius*cos(phi)*m_xhat + m_radius*sin(phi)*m_yhat );
	if( phi>=m_phi0 ) break;
    }
    flush();
}
