//#include <opencv2/opencv.hpp>
//#include <opencv2\core\ocl.hpp>
//using namespace std;
//using namespace cv::ocl;
//int main() 
//{
//	setUseOpenCL(true);
//	if (!haveOpenCL())
//	{
//		cout << "OpenCL is not available..." << endl;
//		//return;
//	}
//
//	cv::ocl::Context context;
//	if (!context.create(cv::ocl::Device::TYPE_GPU))
//	{
//		cout << "Failed creating the context..." << endl;
//		//return;
//	}
//
//	cout << context.ndevices() << " GPU devices are detected." << endl; //This bit provides an overview of the OpenCL devices you have in your computer
//	for (int i = 0; i < context.ndevices(); i++)
//	{
//		cv::ocl::Device device = context.device(i);
//		cout << "name:              " << device.name() << endl;
//		cout << "available:         " << device.available() << endl;
//		cout << "imageSupport:      " << device.imageSupport() << endl;
//		cout << "OpenCL_C_Version:  " << device.OpenCL_C_Version() << endl;
//		cout << endl;
//	}
//	getchar();
//}
