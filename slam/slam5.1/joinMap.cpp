#include<iostreeam>
#include<fstream>
using namesapce std;
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<Eigen/Geometry>

#include<boost/format.hpp> //for formating strings
#include<pcl/point_types.h>
#include<pcl/io/pcd_io.h>
#include<pcl/visualization/pcl_visualizer.h>


int main(int argc,char**argv)
{
  vector<cv::Mat> colorImgs,depthImgs;//彩色图和深度图
  vector<Eigen::Isometry3d> poses;//相机位姿
  
  ifstream fin();
  if (!fin)
{
  std::cout<<"请在pose.txt的目录下运行此程序"<<endl;
  return 1;
}
  for(int i=0;i<5;i++)
{
 boost::format fmt("./%s/%d.%s");
}

}
