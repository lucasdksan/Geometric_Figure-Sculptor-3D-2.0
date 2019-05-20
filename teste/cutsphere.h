#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "geometricfigure.h"
#include "sculptor.h"

class cutSphere : public GeometricFigure
{
protected:
    int _xcenter,_ycenter,_zcenter,_radius;
public:
    cutSphere(int xcenter,int ycenter,int zcenter,int radius);
    ~cutSphere();
    void draw(Sculptor &des);
};

#endif // CUTSPHERE_H
