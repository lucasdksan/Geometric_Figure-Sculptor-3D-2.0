#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "geometricfigure.h"
#include "sculptor.h"


class cutEllipsoid : public GeometricFigure
{
protected:
    int xcenter_,ycenter_,zcenter_;
    int _rx,_ry,_rz;
public:
    cutEllipsoid(int xcenter,int ycenter,int zcenter,int rx,int ry,int rz);
    virtual ~cutEllipsoid();
    void draw(Sculptor &fig);
};

#endif // CUTELLIPSOID_H
