// Copyright 2020 Nazarov Vladislav

#include <gtest/gtest.h>

#include "include/complex_number.h"
#include <iostream>

TEST(Nazarov_Vladislav_ComplexNumberTest, Uniform_Initialization) {
    // Arrange
    double re = 5.3;
    double im = 2.1;

    // Act
    ComplexNumber z{re, im};

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}
