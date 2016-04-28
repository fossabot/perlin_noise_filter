#include "perlin_noise_filter/perlin_noise_filter.h"
#include "pluginlib/class_list_macros.h"

using namespace perlin_noise_filters;
PerlinNoiseFilter::PerlinNoiseFilter()
{}

PerlinNoiseFilter::~PerlinNoiseFilter()
{}

bool PerlinNoiseFilter::configure()
{
  bool found_seed_param = getParam("perlin_seed", perlin_seed_);

  if(!found_seed_param)
  {
    perlin_seed_ = std::rand();
  }

  perlinGen_ = new PerlinNoise(perlin_seed_);
  
  return true;
}

bool PerlinNoiseFilter::update(const std::vector<double> &data_in, std::vector<double> &data_out)
{
    data_out[0] = perlinGen_->Noise(data_in[0], data_in[1], data_in[2]);
    return true;
};

PLUGINLIB_REGISTER_CLASS(PerlinNoiseDouble, perlin_noise_filters::PerlinNoiseFilter, filters::MultiChannelFilterBase<double>)
