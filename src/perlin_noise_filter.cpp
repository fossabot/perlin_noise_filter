#include "perlin_noise_filter/perlin_noise_filter.h"
#include "pluginlib/class_list_macros.h"

using namespace perlin_noise_filters;
PerlinNoiseFilter::PerlinNoiseFilter()
{}

PerlinNoiseFilter::~PerlinNoiseFilter()
{}

bool PerlinNoiseFilter::configure()
{
  // bool found_seed_param = getParam("perlin_seed", perlin_seed_);
  //
  // if(!found_seed_param)
  // {
  //   perlin_seed_ = std::rand();
  // }

  PerlinNoise *perlinGen_ = new PerlinNoise(100);
  // perlin_noise_filter::PerlinNoise perlinGen_ = new perlin_noise_filter::PerlinNoise(perlin_seed_);
  return true;
}

bool PerlinNoiseFilter::update(const double & input, double & output)
{
    output = perlinGen_->Noise(input, 0, 0);
    return true;
};

PLUGINLIB_REGISTER_CLASS(PerlinNoiseDouble, perlin_noise_filters::PerlinNoiseFilter, filters::FilterBase<double>)
