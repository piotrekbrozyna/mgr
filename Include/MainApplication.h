#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include "Exceptions.h"
#include <opencv2/opencv.hpp>

using namespace cv;

class MainApplication
{
public:
    MainApplication();
    void run();
private:
    VideoCapture m_camera;


};

#endif // MAINAPPLICATION_H
