#include "cvPutTextOutlined.h"
#include <opencv2/imgproc/imgproc.hpp>

void cvPutTextOutlined(
    cv::InputOutputArray img, const cv::String& text, cv::Point org, 
    const cvPutTextOutlinedParameters& parameters
)
{
    cvPutTextOutlined(img, text, org,
        parameters.fontFace, parameters.fontScale,
        parameters.colorInner, parameters.colorOuter,
        parameters.thicknessInner, parameters.additionalThicknessOuter,
        parameters.lineType, parameters.bottomLeftOrigin);
}

void cvPutTextOutlined(
    cv::InputOutputArray img, const cv::String& text, cv::Point org,
    int fontFace, double fontScale,
    cv::Scalar colorInner, cv::Scalar colorOuter,
    int thicknessInner, int additionalThicknessOuter,
    int lineType, bool bottomLeftOrigin
)
{
    const int thicknessOuter = thicknessInner + additionalThicknessOuter;
    cv::putText(img, text, org, fontFace, fontScale, colorOuter, thicknessOuter, lineType, bottomLeftOrigin);
    cv::putText(img, text, org, fontFace, fontScale, colorInner, thicknessInner, lineType, bottomLeftOrigin);
}
