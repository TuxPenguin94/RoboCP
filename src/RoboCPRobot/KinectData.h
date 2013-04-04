#pragma once
#include <time.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

using namespace pcl;

class KinectData
{
public:
  EIGEN_MAKE_ALIGNED_OPERATOR_NEW  //do we need it?
  PointCloud<PointXYZRGBA>::Ptr Cloud;
  time_t Time;
  KinectData(void);
  ~KinectData();
};