// $Header: /cvs/cmt/geomrep/geomrep/HypeRep.h,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//  Author: T. Burnett
// Project: Arve graphics
//
// Representation of a Hype with ArveScene

#ifndef TUBSREP_H
#define HYPEREP_H
#include "graphics/GraphicsRep.h"

class Hype;

class HypeRep : public GraphicsRep {

public:
    HypeRep(const Hype& hype):m_hype(hype){};
    void update();
private:
    const Hype& m_hype;
};
#endif //HYPEREP_H

