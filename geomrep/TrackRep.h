//  $Header: /cvs/arve/graphics/TrackRep.h,v 1.2 1999/05/14 15:34:13 burnett Exp $
//   Author: T. Burnett

#ifndef TRACKREP_H
#define TRACKREP_H

#include "graphics/ArvePlottableRep.h"
#include "geometry/Track.h"

class TrackRep : public ArvePlottableRep {
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


