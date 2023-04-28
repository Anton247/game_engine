#ifndef ENGINE_MATRIX4X4_H
#define ENGINE_MATRIX4X4_H

#include <array>

#include "Vec4D.h"
#include "Vec3D.h"

class Matrix4x4 final {
    public:
        Matrix4x4() = default;

        Matrix4x4 &operator=( const Matrix4x4 &matrix4X4 ) = default;

        [[nodiscard]] Matrix4x4 operator*( const Matrix4x4 &matrix4X4 ) const;
        [[nodiscard]] Vec4D operator*( const Vec4D &point4D ) const;

        // Any useful matrix (static methods)
        Matrix4x4 static Identity(); // единичная матрица
        Matrix4x4 static Zero(); // нулевая матрица
        Matrix4x4 static Constant( double value ); // матрица из чисел
        Matrix4x4 static Scale( const Vec3D &factor );
        Matrix4x4 static Translation( const Vec3D &v );
        Matrix4x4 static Rotation( const Vec3D &r );
        Matrix4x4 static RotationX( double rx );
        Matrix4x4 static RotationY( double ry );
        Matrix4x4 static RotationZ( double rz );
        Matrix4x4 static Rotation( const Vec3D &v, double rv );

        static void test();

    private:
        static const unsigned short dimension = 4;
        std::array<std::array<double, dimension>, dimension> _arr{};

        static bool isNear( double a, double b );
};

#endif //ENGINE_MATRIX4X4_H
