#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <vector>

void toward_head(const cv::Mat &image);
static std::vector<cv::Point> getFocus(const cv::Mat &image);
static void loadCascade(cv::CascadeClassifier &cascade);
static std::vector<cv::Rect> detectFaces(const cv::Mat &image, cv::CascadeClassifier &faceCascade);
