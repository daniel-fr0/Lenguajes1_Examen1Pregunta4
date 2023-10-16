#include "VectorR3.h"
#include <gtest/gtest.h>

TEST(VectorR3Test, Addition) {
	VectorR3 a(1, 2, 3);
	VectorR3 b(4, 5, 6);
	VectorR3 c = a + b;
	EXPECT_EQ(c.getX(), 5);
	EXPECT_EQ(c.getY(), 7);
	EXPECT_EQ(c.getZ(), 9);
}

TEST(VectorR3Test, Subtraction) {
    VectorR3 a(1, 2, 3);
    VectorR3 b(6, 5, 4);
    VectorR3 c = b - a;
    EXPECT_EQ(c.getX(), 5);
    EXPECT_EQ(c.getY(), 3);
    EXPECT_EQ(c.getZ(), 1);
}

TEST(VectorR3Test, CrossProduct) {
    VectorR3 a(1, 2, 3);
    VectorR3 b(4, 5, 6);
    VectorR3 c = a * b;
    EXPECT_EQ(c.getX(), -3);
    EXPECT_EQ(c.getY(), 6);
    EXPECT_EQ(c.getZ(), -3);
}

TEST(VectorR3Test, DotProduct) {
    VectorR3 a(1, 2, 3);
    VectorR3 b(4, 5, 6);
    EXPECT_EQ(a % b, 32);
}

TEST(VectorR3Test, Norm) {
    VectorR3 a(1, 2, 3);
    EXPECT_EQ(&a, sqrt(14));
}

TEST(VectorR3Test, ScalarAddition) {
	VectorR3 a(1, 2, 3);
	VectorR3 c = a + 2;
	EXPECT_EQ(c.getX(), 3);
	EXPECT_EQ(c.getY(), 4);
	EXPECT_EQ(c.getZ(), 5);
}

TEST(VectorR3Test, ScalarSubtraction) {
    VectorR3 a(1, 2, 3);
    VectorR3 c = a - 2;
    EXPECT_EQ(c.getX(), -1);
    EXPECT_EQ(c.getY(), 0);
    EXPECT_EQ(c.getZ(), 1);
}

TEST(VectorR3Test, ScalarMultiplication) {
    VectorR3 a(1, 2, 3);
    VectorR3 c = a * 2;
    EXPECT_EQ(c.getX(), 2);
    EXPECT_EQ(c.getY(), 4);
    EXPECT_EQ(c.getZ(), 6);
}

// Pruebas varias de operaciones vectoriales
TEST(VectorR3Test, VectorOperations) {
    VectorR3 a(1, 2, 3);
    VectorR3 b(4, 5, 6);
    VectorR3 c(7, 8, 9);

    VectorR3 d = b + c;
    EXPECT_EQ(d.getX(), 11);
    EXPECT_EQ(d.getY(), 13);
    EXPECT_EQ(d.getZ(), 15);

    d = a * b + c;
    EXPECT_EQ(d.getX(), 4);
    EXPECT_EQ(d.getY(), 14);
    EXPECT_EQ(d.getZ(), 6);

    d = (b + b) * (c - a);
    EXPECT_EQ(d.getX(), -12);
    EXPECT_EQ(d.getY(), 24);
    EXPECT_EQ(d.getZ(), -12);

    EXPECT_EQ(a % (c * b), 0);
}

// Pruebas varias de operaciones con escalares
TEST(VectorR3Test, ScalarOperations) {
    VectorR3 a(1, 2, 3);
    VectorR3 b(4, 5, 6);
    VectorR3 c(7, 8, 9);

    VectorR3 d = b + 3;
    EXPECT_EQ(d.getX(), 7);
    EXPECT_EQ(d.getY(), 8);
    EXPECT_EQ(d.getZ(), 9);

    d = a * 3 + &b;
    EXPECT_NEAR(d.getX(), 11.775, 1e-4);
    EXPECT_NEAR(d.getY(), 14.775, 1e-4);
    EXPECT_NEAR(d.getZ(), 17.775, 1e-4);

    d = (b + b) * (c % a);
    EXPECT_EQ(d.getX(), 400);
    EXPECT_EQ(d.getY(), 500);
    EXPECT_EQ(d.getZ(), 600);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}