#include "cutelipsoid.h"
#include <cmath>

cutElipsoid::cutElipsoid(int xc, int yc, int zc, int rx, int ry, int rz){
   this->xc=xc; this->yc=yc; this->zc=zc; this->rx=rx; this->ry=ry; this->rz=rz;

}
void cutElipsoid::draw(Sculptor &s){
    for(int i=xc-rx;i<=xc+rx;i++){
        for(int j=yc-ry;j<=yc+ry;j++){
            for(int k=zc-rz;k<=zc+rz;k++){
                if((pow(i-xc,2)/pow(rx,2)) + (pow(j-yc,2)/pow(ry,2)) + (pow(k-zc,2)/pow(rz,2)) <= 1){
                   s.cutVoxel(i,j,k);
                }
            }
        }
    }
}
