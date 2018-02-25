#include <opencv2/opencv.hpp>
#include <vector>
#include <iostream>
#include "DataLoading"
using namespace cv;
using namespace std;

void main() {
	Mat trainingData;
	vector<int> trainLabels;
	Size siz(100, 100);
	int j = 0;
	String dir = "Dataset\\train\\";
	int blackgrass = loadClass(dir + "Black-grass\\*.png", 0, trainingData, trainLabels, siz, j);
	int charlock = loadClass(dir + "Charlock\\*.png", 1, trainingData, trainLabels, siz, j);
	int cleavers = loadClass(dir + "Cleavers\\*.png", 2, trainingData, trainLabels, siz, j);
	int commonchickweed = loadClass(dir + "Common Chickweed\\*.png", 3, trainingData, trainLabels, siz, j);
	int commonwheat = loadClass(dir + "Common wheat\\*.png", 4, trainingData, trainLabels, siz, j);
	int fathen = loadClass(dir + "Fat Hen\\*.png", 5, trainingData, trainLabels, siz, j);
	int loosesilkybent = loadClass(dir + "Loose Silky-bent\\*.png", 6, trainingData, trainLabels, siz, j);
	int maize = loadClass(dir + "Maize\\*.png", 7, trainingData, trainLabels, siz, j);
	int scentlessmayweed = loadClass(dir + "Scentless Mayweed\\*.png", 8, trainingData, trainLabels, siz, j);
	int shepherdspurse = loadClass(dir + "Shepherds Purse\\*.png", 9, trainingData, trainLabels, siz, j);
	int smallfloweredcranesbill = loadClass(dir + "Small-flowered Cranesbill\\*.png", 10, trainingData, trainLabels, siz, j);
	int sugarbeet = loadClass(dir + "Sugar beet\\*.png", 11, trainingData, trainLabels, siz, j);

	UMat trainData;
	trainingData.copyTo(trainData);

	cout << "SUCCESS mf!" << endl;
}
