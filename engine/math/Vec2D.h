#ifndef SHOOTER_VEC2D_H
#define SHOOTER_VEC2D_H

#include <array>

class Vec2D final {
    public:
        Vec2D() = default;

        Vec2D( const Vec2D &vec );

        explicit Vec2D( double x, double y = 0.0 );

        Vec2D &operator=( const Vec2D & ) = default;

        [[nodiscard]] double x() const { return _arr_point[0]; }
        [[nodiscard]] double y() const { return _arr_point[1]; }

        // Accessing elements
        double operator[]( size_t d );

        [[nodiscard]] Vec2D operator-() const;

        // Boolean operations
        bool operator==( const Vec2D &vec ) const;
        bool operator!=( const Vec2D &vec ) const;

        [[nodiscard]] Vec2D operator+( const Vec2D &vec ) const;
        [[nodiscard]] Vec2D operator-( const Vec2D &vec ) const;

        [[nodiscard]] double dot( const Vec2D &vec ) const; // Returns dot product

        // Operations with numbers
        [[nodiscard]] Vec2D operator*( double number ) const;
        [[nodiscard]] Vec2D operator/( double number ) const;

        // Other useful methods
        [[nodiscard]] double sqrAbs() const; // Returns squared vector length
        [[nodiscard]] double abs() const; // Returns vector length
        [[nodiscard]] Vec2D normalized() const; // Returns normalized vector without changing

        static void test();

    private:
        static const unsigned short dimension = 2;
        std::array<double, dimension> _arr_point{};

        static bool isNear( double a, double b );
};

#endif //SHOOTER_VEC2D_H