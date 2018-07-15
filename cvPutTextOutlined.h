#include <opencv2/core/core.hpp>

void cvPutTextOutlined(
    cv::InputOutputArray img, const cv::String& text, cv::Point org,
    int fontFace = cv::FONT_HERSHEY_SIMPLEX, double fontScale = 0.75,
    cv::Scalar colorInner = cvScalarAll(255), cv::Scalar colorOuter = cvScalarAll(0),
    int thicknessInner = 1, int additionalThicknessOuter = 1,
    int lineType = cv::LINE_8, bool bottomLeftOrigin = false);
