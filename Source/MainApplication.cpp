#include "MainApplication.h"

MainApplication::MainApplication() :
    m_camera(0)
{
    if(!m_camera.isOpened())  // check if we succeeded
        throw cameraOpenException();

    namedWindow("Application",1);

}

void MainApplication::run()
{
    while(1)
    {
        Mat l_frame;
        m_camera.read(l_frame);

        imshow("Application", l_frame);
        if(waitKey(30) >= 0) break;
    }
}

