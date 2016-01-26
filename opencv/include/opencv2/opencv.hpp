/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                           License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000-2008, Intel Corporation, all rights reserved.
// Copyright (C) 2009-2010, Willow Garage Inc., all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#ifndef __OPENCV_ALL_HPP__
#define __OPENCV_ALL_HPP__

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/photo.hpp"
#include "opencv2/video.hpp"
#include "opencv2/features2d.hpp"
#include "opencv2/objdetect.hpp"
#include "opencv2/calib3d.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/ml.hpp"

#ifdef _DEBUG
#pragma comment(lib, "IlmImfd")
#pragma comment(lib, "ippicvmt")
#pragma comment(lib, "libjasperd")
#pragma comment(lib, "libjpegd")
#pragma comment(lib, "libpngd")
#pragma comment(lib, "libtiffd")
#pragma comment(lib, "libwebpd")
#pragma comment(lib, "opencv_calib3d300d")
#pragma comment(lib, "opencv_core300d")
#pragma comment(lib, "opencv_features2d300d")
#pragma comment(lib, "opencv_flann300d")
#pragma comment(lib, "opencv_hal300d")
#pragma comment(lib, "opencv_highgui300d")
#pragma comment(lib, "opencv_imgcodecs300d")
#pragma comment(lib, "opencv_imgproc300d")
#pragma comment(lib, "opencv_ml300d")
#pragma comment(lib, "opencv_objdetect300d")
#pragma comment(lib, "opencv_photo300d")
#pragma comment(lib, "opencv_shape300d")
#pragma comment(lib, "opencv_stitching300d")
#pragma comment(lib, "opencv_superres300d")
#pragma comment(lib, "opencv_ts300d")
#pragma comment(lib, "opencv_video300d")
#pragma comment(lib, "opencv_videoio300d")
#pragma comment(lib, "opencv_videostab300d")
#pragma comment(lib, "zlibd")
#else
#pragma comment(lib, "IlmImf")
#pragma comment(lib, "ippicvmt")
#pragma comment(lib, "libjasper")
#pragma comment(lib, "libjpeg")
#pragma comment(lib, "libpng")
#pragma comment(lib, "libtiff")
#pragma comment(lib, "libwebp")
#pragma comment(lib, "opencv_calib3d300")
#pragma comment(lib, "opencv_core300")
#pragma comment(lib, "opencv_features2d300")
#pragma comment(lib, "opencv_flann300")
#pragma comment(lib, "opencv_hal300")
#pragma comment(lib, "opencv_highgui300")
#pragma comment(lib, "opencv_imgcodecs300")
#pragma comment(lib, "opencv_imgproc300")
#pragma comment(lib, "opencv_ml300")
#pragma comment(lib, "opencv_objdetect300")
#pragma comment(lib, "opencv_photo300")
#pragma comment(lib, "opencv_shape300")
#pragma comment(lib, "opencv_stitching300")
#pragma comment(lib, "opencv_superres300")
#pragma comment(lib, "opencv_ts300")
#pragma comment(lib, "opencv_video300")
#pragma comment(lib, "opencv_videoio300")
#pragma comment(lib, "opencv_videostab300")
#pragma comment(lib, "zlib")
#endif

#endif
