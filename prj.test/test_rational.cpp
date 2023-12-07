#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include"../prj.lab/rational/rational.hpp"

#include<iostream>


/////////////////////////////////////////////////////////////TEST///////////////////////////////////////////


TEST_CASE("testing +=operator") {
    Rational r1(2, 3);
    Rational r2(3, 4);
    r1 += r2;
    CHECK((r1.get_num()==17 && r1.get_den()==12));

}


/////////////////////////////////////////////////////////////TEST///////////////////////////////////////////
