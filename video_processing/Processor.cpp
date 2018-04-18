#include <iostream>
#include <string>
#include <iomanip>  // for controlling float print precision
#include <sstream>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
		if (argc != 2)
		{
			  cout << "Not enough parameters" << endl;
			  return -1;
		}

		const string videoFileName = argv[1];

		VideoCapture captRefrnc(videoFileName);
		VideoCapture captUndTst(videoFileName);

		if (!captRefrnc.isOpened())
		{
				cout << "Could not open movie file" << videoFileName << endl;
				return -1;
		}

		Size refS = Size(
				(int) captRefrnc.get(CAP_PROP_FRAME_WIDTH),
				(int) captRefrnc.get(CAP_PROP_FRAME_HEIGHT));
		Size uTSi = Size(
				(int) captRefrnc.get(CAP_PROP_FRAME_WIDTH),
				(int) captRefrnc.get(CAP_PROP_FRAME_HEIGHT));

		cout << "refs" << refS << endl;
		cout << "uTSi" << uTSi << endl;
}
