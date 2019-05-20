#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "geometricfigure.h"

class putVoxel : public GeometricFigure
{
protected:
    int x_,y_,z_;
    float r_,g_,b_,alpha_;
public:
    putVoxel(int x,int y,int z,float _r,float _g,float _b,float alpha);
    ~putVoxel();
    void draw(Sculptor &des);
};

#endif // PUTVOXEL_H
