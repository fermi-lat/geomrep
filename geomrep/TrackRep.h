//  $Header: /cvs/cmt/geomrep/geomrep/TrackRep.h,v 1.1.1.1 1999/12/20 22:28:17 burnett Exp $
//   Author: T. Burnett

#ifndef TRACKREP_H
#define TRACKREP_H

#include "graphics/GraphicsRep.h"
#include "geometry/Track.h"

class TrackRep : public GraphicsRep {
public:
    TrackRep(const Track& t):m_track(t){}

    void update();

    // govern use of color to distinguish neutral and charged
    static bool useColor;   // set to true to use following
    static unsigned charged_color_index, // color indeces to use
                    neutral_color_index;
    static float delta;
    // used to determine distance between lines

    static float minStepSize;
    // smallest step size allowed in representation


private:
    const Track& m_track;

};
#endif // TRACKREP_H


