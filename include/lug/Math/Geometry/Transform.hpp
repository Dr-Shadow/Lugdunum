#pragma once

#include <lug/Math/Geometry/Trigonometry.hpp>
#include <lug/Math/Matrix.hpp>
#include <lug/Math/Vector.hpp>

namespace lug {
namespace Math {
namespace Geometry {

// TODO: project, unproject, maybe some others projection matrices

template <typename T>
Vector<3, T> project(const Vector<3, T>& obj,const Mat4x4<T> &model,const Mat4x4<T> &proj, const Vec4<T> &viewport);

template <typename T>
Vector<3, T> unProject(const Vector<3, T> & win, const Mat4x4<T> &model, const Mat4x4<T> &proj, const Vec4<T> &viewport);

template <typename T>
Matrix<4, 4, T> translate(const Vector<3, T>& direction);

template <typename T>
Matrix<4, 4, T> rotate(T angle, const Vector<3, T>& axis);

template <typename T>
Matrix<4, 4, T> scale(const Vector<3, T>& factors);

template <typename T>
Matrix<4, 4, T> lookAt(const Vector<3, T>& eye, const Vector<3, T>& center, const Vector<3, T>& up);

template <typename T>
Matrix<4, 4, T> ortho(T left, T right, T bottom, T top, T zNear, T zFar);

template <typename T>
Matrix<4, 4, T> perspective(T fovy, T aspect, T zNear, T zFar);

#include <lug/Math/Geometry/Transform.inl>

} // Geometry
} // Math
} // lug
