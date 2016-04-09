#include "perlin_noise_filter/perlin_noise.h"
#include "pluginlib/class_list_macros.h"

using namespace perlin_noise_filters;
PerlinNoiseFilter::PerlinNoiseFilter()
{}

PerlinNoiseFilter::~PerlinNoiseFilter()
{}

bool PerlinNoiseFilter::configure()
{   return true;
}

bool PerlinNoiseFilter::update(const double & input, double & output)
{
    output = input + 1;
    return true;
};

PLUGINLIB_REGISTER_CLASS(PerlinNoiseDouble, perlin_noise_filters::PerlinNoiseFilter, filters::FilterBase<double>)
