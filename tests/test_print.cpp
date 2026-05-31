#include <gtest/gtest.h>
#include <print.hpp>

TEST(PrintTest, OutputCheck) {
    std::stringstream out;
    print("hello", out);
    EXPECT_EQ(out.str(), "hello");
}
