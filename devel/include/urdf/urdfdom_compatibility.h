/*********************************************************************
* Software License Agreement (BSD License)
*
*  Copyright (c) 2016, CITEC, Bielefeld University
*  All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*   * Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*   * Redistributions in binary form must reproduce the above
*     copyright notice, this list of conditions and the following
*     disclaimer in the documentation and/or other materials provided
*     with the distribution.
*   * Neither the name of the Willow Garage nor the names of its
*     contributors may be used to endorse or promote products derived
*     from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
*  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
*  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
*  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
*  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
*  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
*  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
*  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*********************************************************************/

/* Robert Haschke */

#ifndef URDF__URDFDOM_COMPATIBILITY_H_
#define URDF__URDFDOM_COMPATIBILITY_H_

#define URDFDOM_HEADERS_MAJOR_VERSION 1
#define URDFDOM_HEADERS_MINOR_VERSION 0
#define URDFDOM_HEADERS_REVISION_VERSION 5

// Define shared pointers for urdfdom versions less than 0.4
// Plus define ModelSharedPtr for 0.4
#if URDFDOM_HEADERS_MAJOR_VERSION == 0 && URDFDOM_HEADERS_MINOR_VERSION <= 4

#include <boost/shared_ptr.hpp>
#include <boost/weak_ptr.hpp>

#define URDF_TYPEDEF_CLASS_POINTER(Class) \
class Class; \
typedef boost::shared_ptr<Class> Class##SharedPtr; \
typedef boost::shared_ptr<const Class> Class##ConstSharedPtr; \
typedef boost::weak_ptr<Class> Class##WeakPtr

namespace urdf
{
// These shared_ptrs were added to urdfdom in 0.4.0,
// so if urdfdom == 0.4 this is duplicate work
URDF_TYPEDEF_CLASS_POINTER(Box);
URDF_TYPEDEF_CLASS_POINTER(Collision);
URDF_TYPEDEF_CLASS_POINTER(Cylinder);
URDF_TYPEDEF_CLASS_POINTER(Geometry);
URDF_TYPEDEF_CLASS_POINTER(Inertial);

URDF_TYPEDEF_CLASS_POINTER(Joint);
URDF_TYPEDEF_CLASS_POINTER(JointCalibration);
URDF_TYPEDEF_CLASS_POINTER(JointDynamics);
URDF_TYPEDEF_CLASS_POINTER(JointLimits);
URDF_TYPEDEF_CLASS_POINTER(JointMimic);
URDF_TYPEDEF_CLASS_POINTER(JointSafety);

URDF_TYPEDEF_CLASS_POINTER(Link);
URDF_TYPEDEF_CLASS_POINTER(Material);
URDF_TYPEDEF_CLASS_POINTER(Mesh);
URDF_TYPEDEF_CLASS_POINTER(Sphere);
URDF_TYPEDEF_CLASS_POINTER(Visual);

URDF_TYPEDEF_CLASS_POINTER(ModelInterface);

// ModelSharedPtr is the only one that needs to be defined for urdfdom 0.4
URDF_TYPEDEF_CLASS_POINTER(Model);
}  // namespace urdf

#undef URDF_TYPEDEF_CLASS_POINTER

#else  // urdfdom <= 0.4

#include <memory>

#include <urdf_model/types.h>
#include <urdf_world/types.h>

namespace urdf
{
typedef std::shared_ptr<ModelInterface> ModelInterfaceSharedPtr;
typedef std::shared_ptr<const ModelInterface> ModelInterfaceConstSharedPtr;
typedef std::weak_ptr<ModelInterface> ModelInterfaceWeakPtr;

// Forward declaration
class Model;

typedef std::shared_ptr<Model> ModelSharedPtr;
typedef std::shared_ptr<const Model> ModelConstSharedPtr;
typedef std::weak_ptr<Model> ModelWeakPtr;
}  // namespace urdf

#endif  // urdfdom > 0.4

#endif  // URDF__URDFDOM_COMPATIBILITY_H_
