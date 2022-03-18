#include <opencv2/imgproc/imgproc.hpp>

struct cvPutTextOutlinedParameters {
    int fontFace = cv::FONT_HERSHEY_SIMPLEX;
    double fontScale = 0.75;
    cv::Scalar colorInner = cv::Scalar(255, 255, 255);
    cv::Scalar colorOuter = cv::Scalar(0, 0, 0);
    int thicknessInner = 1;
    int additionalThicknessOuter = 1;
    int lineType = cv::LINE_8;
    bool bottomLeftOrigin = false;
};

void cvPutTextOutlined(
    cv::InputOutputArray img, const cv::String& text, cv::Point org,
    const cvPutTextOutlinedParameters& parameters = cvPutTextOutlinedParameters()
);

void cvPutTextOutlined(
    cv::InputOutputArray img, const cv::String& text, cv::Point org,
    int fontFace = cv::FONT_HERSHEY_SIMPLEX, double fontScale = 0.75,
    cv::Scalar colorInner = cv::Scalar(255, 255, 255),
    cv::Scalar colorOuter = cv::Scalar(0, 0, 0),
    int thicknessInner = 1, int additionalThicknessOuter = 1,
    int lineType = cv::LINE_8, bool bottomLeftOrigin = false
);
