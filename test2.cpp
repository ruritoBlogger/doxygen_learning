/**
 * @file test2.cpp
 * @brief テストコードその4<br>
 *        test関数をオーバーライドしている<br>
 *        また関数の引数を追加している<br>
 * @author るりと
 * @date 2019/12/16
 */

#include "test2.h"

/**
 * 継承している関数<br>
 * @param text 出力する文字列
 */

void TEST2::test(std::string text)
{
    std::cout << text << std::endl;
}

/**
 * メイン関数<br>
 * @return 0 終了のやつ
 */

int main()
{
    TEST test;
    test.test();
    std::string text = "TEXT";
    TEST2 test2;
    test2.test( text );
    return 0;
}
