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

		VideoCapture capture(videoFileName);

		if (!capture.isOpened())
		{
				cout << "Could not open movie file" << videoFileName << endl;
				return -1;
		}

		Size videoFrame = Size(
				(int) capture.get(CAP_PROP_FRAME_WIDTH),
				(int) capture.get(CAP_PROP_FRAME_HEIGHT));

		cout << "vidoeFrame" << videoFrame << endl;

		const char* VID_WIN = "video_window";

		namedWindow(VID_WIN, WINDOW_AUTOSIZE);

}
