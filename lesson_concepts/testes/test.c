#include "src/unity.h"
#include "main.h"

void setUp(){};
void tearDown(){};

void somaTest(){
    TEST_ASSERT_EQUAL(soma(15, 30), 45);
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(somaTest);
    UNITY_END();
}