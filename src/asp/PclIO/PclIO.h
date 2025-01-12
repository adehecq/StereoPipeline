// __BEGIN_LICENSE__
//  Copyright (c) 2009-2013, United States Government as represented by the
//  Administrator of the National Aeronautics and Space Administration. All
//  rights reserved.
//
//  The NGT platform is licensed under the Apache License, Version 2.0 (the
//  "License"); you may not use this file except in compliance with the
//  License. You may obtain a copy of the License at
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
// __END_LICENSE__


/// \file PclIo.h
///

#ifndef __ASP_PCLIO_PCLIO_H__
#define __ASP_PCLIO_PCLIO_H__

#include <string>

#include <vw/Image/ImageViewRef.h>

namespace asp {

  void writeCloud(vw::ImageViewRef<vw::Vector<double, 4>> cloud,
                  vw::ImageViewRef<float> out_texture,
                  vw::ImageViewRef<float> weight,
                  bool save_nodata_as_infinity,
                  std::string const& cloud_file);
  
} // end namespace asp

#endif//__ASP_PCLIO_PCLIO_H__
