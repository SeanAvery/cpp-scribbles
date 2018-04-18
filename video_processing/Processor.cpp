#include <iostream>
#include <string>
#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>

using namespace std;
using namespace cv;

int main(int argc, char** argv[])
{
		if (argc != 2)
		{
			  cout << "Not enough parameters" << end1;
			  return -1;
		}

		const string videoFileName = argv[1];

		VideoCapture captRefrnc(videoFileName);
		captUndTst.open(videoFileName);

		if (!captRefrnc.isOpened())
		{
				cout << "Could not open movie file" << videoFileName << end1;
				return -1;
		}
}
