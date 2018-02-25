#include <opencv2/opencv.hpp>
#include <vector>
#include <iostream>
using namespace cv;
using namespace std;

Mat loadImage(const String &name, const Size &siz) {
	Mat img;
	imread(name, IMREAD_COLOR).copyTo(img);
	if (img.empty()) return img;
	resize(img, img, siz);
	return img.reshape(0,1);
}

int loadClass(const String &dir, int label, vector<Mat> &trainData, vector<int> &trainLabels, const Size &siz) {
	vector<String> files;
	glob(dir, files);
	for (size_t i = 0; i < files.size(); i++) {
		Mat img = loadImage(files[i], siz);
		cout << (int)i << endl;
		if (img.empty()) continue;
		trainData.push_back(img);
		trainLabels.push_back(label);
	}
	cout << "Hello" << endl;
	glob(dir, files, false);
	return trainLabels.size();
}

void main() {
	//Mat trainData, trainLabels;
	vector<Mat> trainData;
	vector<int> trainLabels;
	Size siz(100,100);
	
	String dir = "C:\\Users\\Shubham\\Desktop\\VIth Sem\\Minor II\\Dataset\\train\\";
	int blackgrass = loadClass("C:\\Users\\Shubham\\Desktop\\VIth Sem\\Minor II\\Dataset\\train\\Black-grass\\*.png", 0, trainData, trainLabels, siz);
	cout << blackgrass << endl;
	//int charlock = loadClass(dir + "Charlock\\*.png", 1, trainData, trainLabels, siz);
	//int cleavers = loadClass(dir + "Cleavers\\*.png", 2, trainData, trainLabels, siz);
	//int commonchickweed = loadClass(dir + "Common Chickweed\\*.png", 3, trainData, trainLabels, siz);
	//int commonwheat = loadClass(dir + "Common wheat\\*.png", 4, trainData, trainLabels, siz);
	//int fathen = loadClass(dir + "Fat Hen\\*.png", 5, trainData, trainLabels, siz);
	//int loosesilkybent = loadClass(dir + "Loose Silky-bent\\*.png", 6, trainData, trainLabels, siz);
	//int maize = loadClass(dir + "Maize\\*.png", 7, trainData, trainLabels, siz);
	//int scentlessmayweed = loadClass(dir + "Scentless Mayweed\\*.png", 8, trainData, trainLabels, siz);
	//int shepherdspurse = loadClass(dir + "Shepherds Purse\\*.png", 9, trainData, trainLabels, siz);
	//int smallfloweredcranesbill = loadClass(dir + "Small-flowered Cranesbill\\*.png", 10, trainData, trainLabels, siz);
	//int sugarbeet = loadClass(dir + "Sugar beet\\*.png", 11, trainData, trainLabels, siz);

}