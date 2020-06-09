# Perlin Noise Filter
[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2FWisc-HCI%2Fperlin_noise_filter.svg?type=shield)](https://app.fossa.com/projects/git%2Bgithub.com%2FWisc-HCI%2Fperlin_noise_filter?ref=badge_shield)


A [ROS filter](http://wiki.ros.org/filters) that takes a vector of x,y,z values as input
and updates given output vector with the result of the [Perlin Noise function](https://en.wikipedia.org/wiki/Perlin_noise).

*Note: Working in ROS indigo, other versions have not been tested*

## Getting Started

The Perlin Noise Filter, as with all [ROS filters](http://wiki.ros.org/filters), is configured from parameters on the [Parameter server](http://wiki.ros.org/Parameter%20Server).

##### Parameters

* `~name (string, default: Required)`  

  Name of the filter

* `~type () (string, default: Required)`  

  The filter's typename as declared in it's pluginlib registration: PerlinNoiseDouble

* `~params/perlin_seed (int)`  

  Seed value for Perlin Noise Function

##### Example Configuration

```yaml
filter_params:
    - name: perlin_noise_filter_chain
      type: PerlinNoiseDouble
      params: {perlin_seed: 10000}
```


## Installing

*Note: A working catkin workspace is required for installation. For more information, see [catkin](http://wiki.ros.org/catkin).*


Make sure you have sourced the correct `setup.bash` file for your ROS distribution already

Go to workspace src directory

```
cd /path/to/your/catkin_ws/src
```

Checkout the perlin_noise_filter repository

```
git clone https://github.com/jakedex/perlin_noise_filter
```

Then make sure you have all dependencies installed

```
cd /path/to/your/catkin_ws
rosdep install --from-paths src --ignore-src --rosdistro indigo
```

Now build

```
catkin_make
```

After sourcing /path/to/your/catkin_ws/devel/setup.bash you should now be able to use the perlin_noise_filter package.

## License

This project is licensed under the BSD License - see the [LICENSE.txt](LICENSE.txt) file for details


[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2FWisc-HCI%2Fperlin_noise_filter.svg?type=large)](https://app.fossa.com/projects/git%2Bgithub.com%2FWisc-HCI%2Fperlin_noise_filter?ref=badge_large)