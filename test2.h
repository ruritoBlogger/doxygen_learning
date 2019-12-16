#include<iostream>
/**
 * @file test2.h
 * @brief  実際に動かしているコード
 * @author るりと
 * @date 2019/12/16
 */


#include "test.h"

/**
 * TEST2クラス<br>
 * 派生クラスです<br>
 * test関数をオーバーライドしています<br>
 */
class TEST2 :
    public TEST
{
    public:
        void test(std::string text);
};
