#ifndef SHOOTER_VEC3D_H
#define SHOOTER_VEC3D_H

#include <array>

class Vec3D final {
    public:
        Vec3D() = default;

        Vec3D( const Vec3D &vec );

        explicit Vec3D( double x, double y = 0.0, double z = 0.0 );

        Vec3D &operator=( const Vec3D & ) = default;

        [[nodiscard]] double x() const { return _arr_point[0]; }
        [[nodiscard]] double y() const { return _arr_point[1]; }
        [[nodiscard]] double z() const { return _arr_point[2]; }

        // Accessing elements
        double& operator[]( size_t d );

        [[nodiscard]] Vec3D operator-() const;

        // Boolean operations
        bool operator==( const Vec3D &vec ) const;
        bool operator!=( const Vec3D &vec ) const;

        // Operations with Vec4D
        [[nodiscard]] Vec3D operator+( const Vec3D &vec ) const;
        [[nodiscard]] Vec3D operator-( const Vec3D &ve ) const;

        [[nodiscard]] double dot( const Vec3D &vec ) const; // Returns dot product
        [[nodiscard]] Vec3D cross( const Vec3D &vec ) const; // Returns cross product

        // Operations with numbers
        [[nodiscard]] Vec3D operator*( double number ) const;
        [[nodiscard]] Vec3D operator/( double number ) const;

        // Other useful methods
        [[nodiscard]] double sqrAbs() const; // Returns squared vector length
        [[nodiscard]] double abs() const; // Returns vector length
        [[nodiscard]] Vec3D normalized() const; // Returns normalized vector without changing

        static Vec3D Random();

        static void test();

private:
    static const unsigned short dimension = 3;
    std::array<double, dimension> _arr_point{};

    static bool isNear( double a, double b );
};


#endif //SHOOTER_VEC3D_H
