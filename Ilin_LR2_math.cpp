#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Ilin_LR2_Meth.h"

using namespace  cute;
void testFractionalSum() {
    double x = 1.1, y = 2.2, z = 3.3;
    double expected = 0.1 + 0.2 + 0.3;
    double actual = calculateFractionalSum(x, y, z);
    ASSERT_EQUAL(expected, actual);
}

void testIntegerSum() {
    double x = 1.1, y = 2.2, z = 3.3;
    int expected = 1 + 2 + 3;
    int actual = calculateIntegerSum(x, y, z);
    ASSERT_EQUAL(expected, actual);
}

void testInputNumberX_Valid() {
    double x;
    bool result = inputNumberX("3.14", x);
    ASSERT(result);
    ASSERT_EQUAL(3.14, x);
}

void testInputNumberX_Invalid() {
    double x = 0.0;
    bool result = inputNumberX("abc", x);
    ASSERT(!result);
    ASSERT_EQUAL(0.0, x);
}

void testInputNumberY_Negative() {
    double y;
    bool result = inputNumberY("-5", y);
    ASSERT(result);
    ASSERT_EQUAL(-5.0, y);
}

void testInputNumberZ_ValidInteger() {
    double z;
    bool result = inputNumberZ("42", z);
    ASSERT(result);
    ASSERT_EQUAL(42.0, z);
}

int main() {
    suite s;
    s.push_back(CUTE(testFractionalSum));
    s.push_back(CUTE(testIntegerSum));
    s.push_back(CUTE(testInputNumberX_Valid));
    s.push_back(CUTE(testInputNumberX_Invalid));
    s.push_back(CUTE(testInputNumberY_Negative));
    s.push_back(CUTE(testInputNumberZ_ValidInteger));

    ide_listener<> listener;
    makeRunner(listener)(s, "All Tests");
    return 0;
}