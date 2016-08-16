#include "plotter.hpp"
#include "opencv2/opencv.hpp"
#include <iostream>
#include <vector>

int main(int argc, char** argv){
	std::vector<cv::Mat> images;
	std::cout << argc << std::endl;
	int n;
	if(argc>1) n = atoi(*(argv + 1));
	else n = 1;
	for(int i = 0; i<n; i++){
		std::stringstream ss;
		ss << "imagens/foto" << i << ".jpg";
		images.push_back(imread(ss.str(), cv::IMREAD_COLOR));
	}

	const char* title = "Teste";
	showManyImages(title,images,400);
	return 0;
}

