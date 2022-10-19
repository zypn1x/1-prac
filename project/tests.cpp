#include <gtest/gtest.h>
#include "regular.h"

TEST(test, res_1) {
    EXPECT_EQ(-1, Answer("b", 'c', 2));
}
TEST(test, res_2) {
    EXPECT_EQ(-1, Answer("aa.", 'a', 5));
}
TEST(test, res_3) {
    EXPECT_EQ(-1, Answer("ba+", 'a', 2));
}
TEST(test, res_4) {
    EXPECT_EQ(-1, Answer("a", 'a', 2));
}
TEST(test, res_5) {
    EXPECT_EQ(-1, Answer("cb.bca*+++", 'c', 2));
}
TEST(test, res_6) {
    EXPECT_EQ(-1, Answer("ac.c+", 'c', 5));
}
TEST(test, res_7) {
    EXPECT_EQ(-1, Answer("bba*+ab*...", 'c', 2));
}
TEST(test, res_8) {
    EXPECT_EQ(3, Answer("aa+ac..", 'c', 1));
}
TEST(test, res_9) {
    EXPECT_EQ(-1, Answer("abc**++b.", 'a', 2));
}
TEST(test, res_10) {
    EXPECT_EQ(5, Answer("ca*+", 'a', 5));
}
TEST(test, res_11) {
    EXPECT_EQ(-1, Answer("a*", 'c', 5));
}
TEST(test, res_12) {
    EXPECT_EQ(-1, Answer("cc*.c.", 'a', 4));
}
TEST(test, res_13) {
    EXPECT_EQ(-1, Answer("b", 'a', 3));
}
TEST(test, res_14) {
    EXPECT_EQ(4, Answer("cbcb...", 'c', 2));
}
TEST(test, res_15) {
    EXPECT_EQ(6, Answer("bbc.ca.ca+...", 'c', 3));
}
TEST(test, res_16) {
    EXPECT_EQ(-1, Answer("a*c+b+cc++", 'b', 2));
}
TEST(test, res_17) {
    EXPECT_EQ(-1, Answer("cbb..", 'c', 2));
}
TEST(test, res_18) {
    EXPECT_EQ(3, Answer("aac**ab.b++.+", 'a', 2));
}
TEST(test, res_19) {
    EXPECT_EQ(-1, Answer("ccc+.", 'b', 4));
}
TEST(test, res_20) {
    EXPECT_EQ(-1, Answer("c", 'c', 5));
}
TEST(test, res_21) {
    EXPECT_EQ(-1, Answer("bb*+", 'c', 5));
}
TEST(test, res_22) {
    EXPECT_EQ(-1, Answer("aa+*", 'c', 5));
}
TEST(test, res_23) {
    EXPECT_EQ(-1, Answer("aaaaa+bc**....+", 'a', 4));
}
TEST(test, res_24) {
    EXPECT_EQ(1, Answer("c", 'c', 1));
}
TEST(test, res_25) {
    EXPECT_EQ(-1, Answer("caaba.+++", 'a', 2));
}
TEST(test, res_26) {
    EXPECT_EQ(-1, Answer("ab*+", 'a', 3));
}
TEST(test, res_27) {
    EXPECT_EQ(2, Answer("c*bac+*++", 'c', 2));
}
TEST(test, res_28) {
    EXPECT_EQ(-1, Answer("acb*b*c.+b..+", 'a', 2));
}
TEST(test, res_29) {
    EXPECT_EQ(5, Answer("c*c.*b+", 'c', 5));
}
TEST(test, res_30) {
    EXPECT_EQ(4, Answer("ab*.*ca.+", 'b', 3));
}
TEST(test, res_31) {
    EXPECT_EQ(-1, Answer("acacc.+.+", 'c', 4));
}
TEST(test, res_32) {
    EXPECT_EQ(4, Answer("ca.ca.b+.", 'c', 2));
}
TEST(test, res_33) {
    EXPECT_EQ(-1, Answer("aa.", 'b', 2));
}
TEST(test, res_34) {
    EXPECT_EQ(3, Answer("bbb*ba++..", 'b', 3));
}
TEST(test, res_35) {
    EXPECT_EQ(-1, Answer("a*bb.*a.+", 'c', 1));
}
TEST(test, res_36) {
    EXPECT_EQ(4, Answer("c*b*c.+", 'b', 3));
}
TEST(test, res_37) {
    EXPECT_EQ(-1, Answer("cabaaba..++.+", 'c', 4));
}
TEST(test, res_38) {
    EXPECT_EQ(-1, Answer("ba.", 'a', 3));
}
TEST(test, res_39) {
    EXPECT_EQ(3, Answer("abc..", 'c', 1));
}
TEST(test, res_40) {
    EXPECT_EQ(-1, Answer("c", 'b', 5));
}
TEST(test, res_41) {
    EXPECT_EQ(-1, Answer("ba+", 'c', 5));
}
TEST(test, res_42) {
    EXPECT_EQ(3, Answer("cb.**b.", 'c', 1));
}
TEST(test, res_43) {
    EXPECT_EQ(2, Answer("bc*+c+", 'c', 2));
}
TEST(test, res_44) {
    EXPECT_EQ(-1, Answer("ab.", 'b', 3));
}
TEST(test, res_45) {
    EXPECT_EQ(-1, Answer("cb+b+a+", 'b', 3));
}
TEST(test, res_46) {
    EXPECT_EQ(-1, Answer("cabbca.+.++", 'a', 3));
}
TEST(test, res_47) {
    EXPECT_EQ(-1, Answer("ba.", 'c', 1));
}
TEST(test, res_48) {
    EXPECT_EQ(1, Answer("b*", 'b', 1));
}
TEST(test, res_49) {
    EXPECT_EQ(-1, Answer("a*a.a+", 'b', 4));
}
TEST(test, res_50) {
    EXPECT_EQ(1, Answer("bab*+*ac.+.", 'b', 1));
}
TEST(test, res_51) {
    EXPECT_EQ(-1, Answer("b", 'b', 4));
}
TEST(test, res_52) {
    EXPECT_EQ(4, Answer("ac+**c+", 'a', 4));
}
TEST(test, res_53) {
    EXPECT_EQ(1, Answer("b*c.aba+++", 'b', 1));
}
TEST(test, res_54) {
    EXPECT_EQ(-1, Answer("ba+", 'c', 2));
}
TEST(test, res_55) {
    EXPECT_EQ(-1, Answer("baabab....+", 'a', 4));
}
TEST(test, res_56) {
    EXPECT_EQ(7, Answer("cbbbac*..+++", 'c', 5));
}
TEST(test, res_57) {
    EXPECT_EQ(-1, Answer("cc.", 'c', 5));
}
TEST(test, res_58) {
    EXPECT_EQ(3, Answer("aab*..", 'b', 1));
}
TEST(test, res_59) {
    EXPECT_EQ(-1, Answer("aa+", 'c', 1));
}
TEST(test, res_60) {
    EXPECT_EQ(2, Answer("ca.", 'a', 1));
}
TEST(test, res_61) {
    EXPECT_EQ(-1, Answer("cc+a+bb+.", 'a', 4));
}
TEST(test, res_62) {
    EXPECT_EQ(-1, Answer("ca+", 'c', 3));
}
TEST(test, res_63) {
    EXPECT_EQ(1, Answer("a*", 'a', 1));
}
TEST(test, res_64) {
    EXPECT_EQ(-1, Answer("ab.", 'a', 4));
}
TEST(test, res_65) {
    EXPECT_EQ(1, Answer("cbba+a.++", 'c', 1));
}
TEST(test, res_66) {
    EXPECT_EQ(3, Answer("bb.c.ab++", 'b', 2));
}
TEST(test, res_67) {
    EXPECT_EQ(-1, Answer("ac+", 'a', 3));
}
TEST(test, res_68) {
    EXPECT_EQ(-1, Answer("babb..*+", 'b', 3));
}
TEST(test, res_69) {
    EXPECT_EQ(-1, Answer("ba.", 'c', 2));
}
TEST(test, res_70) {
    EXPECT_EQ(-1, Answer("c", 'a', 5));
}
TEST(test, res_71) {
    EXPECT_EQ(2, Answer("bc.a.*acb+..", 'c', 1));
}
TEST(test, res_72) {
    EXPECT_EQ(5, Answer("bc.c*.a+*", 'c', 4));
}
TEST(test, res_73) {
    EXPECT_EQ(-1, Answer("b", 'a', 4));
}
TEST(test, res_74) {
    EXPECT_EQ(2, Answer("cb.baa*ac+++++", 'a', 2));
}
TEST(test, res_75) {
    EXPECT_EQ(3, Answer("ca*bba**....", 'b', 2));
}
TEST(test, res_76) {
    EXPECT_EQ(-1, Answer("cc+*c+", 'a', 3));
}
TEST(test, res_77) {
    EXPECT_EQ(-1, Answer("cac+bbb*++..", 'a', 4));
}
TEST(test, res_78) {
    EXPECT_EQ(2, Answer("caa*+.a.", 'a', 1));
}
TEST(test, res_79) {
    EXPECT_EQ(-1, Answer("b*a+", 'a', 4));
}
TEST(test, res_80) {
    EXPECT_EQ(-1, Answer("bc+a+", 'c', 2));
}
TESTS(test, rez81) {
    EXPECT_EQ(1, Answer("bc+", "a", 0))
}