#ifndef ENGINE_POINT4D_H
#define ENGINE_POINT4D_H

#include <array>

class Vec4D final {
    public:
        Vec4D() = default;

        Vec4D( const Vec4D &point4D );

        explicit Vec4D( double x, double y = 0.0, double z = 0.0, double w = 0.0 );

        Vec4D &operator=(const Vec4D &point4D) = default;

        [[nodiscard]] double x() const { return _arr_point[0]; }
        [[nodiscard]] double y() const { return _arr_point[1]; }
        [[nodiscard]] double z() const { return _arr_point[2]; }
        [[nodiscard]] double w() const { return _arr_point[3]; }

        // Accessing elements
        double& operator[]( size_t d );

        [[nodiscard]] Vec4D operator-() const;

        // Boolean operations
        bool operator==( const Vec4D &point4D ) const;

        bool operator!=( const Vec4D &point4D ) const;

        // Operations with Vec4D
        [[nodiscard]] Vec4D operator+( const Vec4D &point4D ) const;
        [[nodiscard]] Vec4D operator-( const Vec4D &point4D ) const;

        // Operations with numbers
        [[nodiscard]] Vec4D operator*( double number ) const;
        [[nodiscard]] Vec4D operator/( double number ) const;

        // Other useful methods
        [[nodiscard]] double sqrAbs() const; // Returns squared vector length
        [[nodiscard]] double abs() const; // Returns vector length
        [[nodiscard]] Vec4D normalized() const; // Returns normalized vector without changing

        static Vec4D Random();

        static void test();

    private:
        static const unsigned short dimension = 4;
        std::array<double, dimension> _arr_point{};

        static bool isNear( double a, double b );
};

#endif //INC_3DZAVR_POINT4D_H
