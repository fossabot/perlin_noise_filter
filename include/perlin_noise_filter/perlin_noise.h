#ifndef PERLIN_NOISE_H
#define PERLIN_NOISE_H

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#define _USE_MATH_DEFINES /* M_PI */
#include <math.h>       /* floor, sqrt */
#include <cstdlib>      /* RAND_MAX */

class PerlinNoise {
  public:
    PerlinNoise(int seed);
    double Noise(double x, double y, double z);

  private:
    static const int GradientSizeTable = 256;
    static const unsigned char _perm[GradientSizeTable];
    double _gradients[GradientSizeTable * 3];
    void InitGradients();
    int Permutate(int x);
    int Index(int ix, int iy, int iz);
    double Lattice(int ix, int iy, int iz, double fx, double fy, double fz);
    double Lerp(double t, double value0, double value1);
    double Smooth(double x);
};
#endif
