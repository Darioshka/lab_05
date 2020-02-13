// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include <header.hpp>
#include <type_traits>

TEST(Example, EmptyTest) {
    Stack<int> Stack_1;
    int var_1 = 6;
    int var_2 = 8;
    int var_3 = 10;
    Stack_1.push(var_1);
    Stack_1.push(var_2);
    Stack_1.pop();
    Stack_1.push(var_3);
	EXPECT_EQ(static_cast<int>(Stack_1.head()), 10);  
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
