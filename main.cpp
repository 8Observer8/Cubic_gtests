#include "gtest/gtest.h"
#include "SimpleMath.h"

TEST( testMath01, myCubeTest ) {
    int input = 10;
    int expected = 1000;

    int actual = cubic( input );
    EXPECT_EQ( expected, actual );
}

TEST( testMath02, myCubeTest ) {
    int input = 3;
    int expected = 27;

    int actual = cubic( input );
    EXPECT_EQ( expected, actual );
}

int main( int argc, char **argv ) {
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS( );
}
