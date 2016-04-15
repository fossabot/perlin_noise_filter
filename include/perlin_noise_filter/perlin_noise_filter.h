#ifndef PERLIN_NOISE_FILTER_H
#define PERLIN_NOISE_FILTER_H
// #include <stdint.h>
// #include <cstring>
// #include <stdio.h>
// #include <boost/scoped_ptr.hpp>
#include "filters/filter_base.h"
#include "perlin_noise_filter/perlin_noise.h"

namespace perlin_noise_filters {

class PerlinNoiseFilter: public filters::FilterBase<double>
{
public:
  PerlinNoiseFilter();
  ~PerlinNoiseFilter();
  bool configure();
  bool update( const double & data_in, double & data_out);

private:
  PerlinNoise * perlinGen_;
  int perlin_seed_;

};

}

#endif
