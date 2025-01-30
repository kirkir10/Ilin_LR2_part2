#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Ilin_LR2_Meth.h"

using namespace  cute;
void testFractionalSum()
{
    int x = 1.1;
    int y = 2.2;
    int z = 3.3;
    int expected = 6;
    int actual = calculateFractionalSum(x,y,z);
    ASSERT_EQUAL(expected, actual);
} 

void testIntegerSum()
{
    int x = 1.1;
    int y = 2.2;
    int z = 3.3;
    int expected = 6;
    int actual = calculateIntegerSum(x,y,z);
    ASSERT_EQUAL(expected, actual);
} 
void testInputNumberX() {
    double x = 0.0;
    inputNumberX(x);
    ASSERT_EQUAL(x, 6); 
}
void testInputNumberY_InvalidInput() {
    double y = 0.0;
    inputNumberY(y);
    ASSERT_EQUAL(y, 0.0);
}

void testUserInput_NegativeValue(){
    string str = "a";
    bool expected = false;
    inputNumberY(str);
    ASSERT_EQUAL (expected, actual);
}

int main(){
    suite s;
    s.push_back(CUTE(testFractionalSum));
    s.push_back(CUTE(testIntegerSum));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_NegativeValue));
    ide_listener<> listener;
    makeRunner(listener)(s, "All Rectanglefsdf Tests");

    return 0;
}