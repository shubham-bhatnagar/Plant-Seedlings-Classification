#include <opencv2/opencv.hpp>
#include <vector>
#include <iostream>
using namespace cv;
using namespace std;

Mat loadImage(const String &name, const Size &siz) {
	Mat img;
	imread(name, IMREAD_COLOR).copyTo(img);
	resize(img, img, siz);
	
	return img.reshape(0,1);
}

int loadClass(const String &dir, int label, Mat &trainingData, vector<int> &trainLabels, const Size &siz, int &j) {
	vector<String> files;
	glob(dir, files);
	
	for (size_t i = 0; i < files.size(); i++) {
		Mat img = loadImage(files[i], siz);
		if (img.empty()) continue;
		trainingData.push_back(img);
		trainLabels.push_back(label);
		cout << "Image #" << (long int)j << endl;
		j++;
	}
	return (int)trainLabels.size();
}