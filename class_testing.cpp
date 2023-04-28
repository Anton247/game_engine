#include "engine/math/Vec2D.h"
#include "engine/math/Vec3D.h"
#include "engine/math/Vec4D.h"
#include "engine/math/Matrix4x4.h"
#include <iostream>

using namespace std;

int main(){
    cout<<"class testing"<<endl;

    cout<<"Test: Vec2D - START\n";
    Vec2D::test();
    cout<<"Test: Vec2D - OK\n";

    cout<<"Test: Vec3D - START\n";
    Vec3D::test();
    cout<<"Test: Vec4D - OK\n";

    cout<<"Test: Vec4D - START\n";
    Vec4D::test();
    cout<<"Test: Vec4D - OK\n";

    cout<<"Test: Matrix4x4 - START\n";
    Matrix4x4::test();
    cout<<"Test: Matrix4x4 - OK\n";
}