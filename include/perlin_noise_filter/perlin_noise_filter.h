#ifndef PERLIN_NOISE_FILTER_H
#define PERLIN_NOISE_FILTER_H

#include "filters/filter_base.h"
#include "perlin_noise_filter/perlin_noise.h"

namespace perlin_noise_filters {

class PerlinNoiseFilter: public filters::MultiChannelFilterBase<double>
{
public:
  PerlinNoiseFilter();
  ~PerlinNoiseFilter();
  bool configure();
  bool update( const std::vector<double> &data_in, std::vector<double> &data_out );

private:
  PerlinNoise * perlinGen_;
  int perlin_seed_;

};

}

#endif
