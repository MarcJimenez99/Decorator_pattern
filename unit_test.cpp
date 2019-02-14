#include "gtest/gtest.h"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Rand.cpp"
#include "Op.cpp" 
#include "RandMock.cpp"
#include "ListContainer.h"
#include "VectorContainer.h"
#include "bubble.h"
#include "SelectionSort.h"
#include "Ceil.cpp"
#include "Floor.cpp"
#include "Abs.cpp"
#include "Decorator.hpp"
#include "Trunc.cpp"
#include "Paren.cpp"

TEST(CeilTest, wholeNum){
	Op * five = new Op(5.0);
	Op * three = new Op(3.0);
	Mult* TreeA = new Mult(five, three);
	
	Ceil* ceil2 = new Ceil(TreeA);
	ASSERT_EQ(ceil2->evaluate(), 15.0);
}

TEST(CeilTest, num){
	Op* four = new Op(4.2);
	Op* three = new Op(3);
	Add* TreeA = new Add(four, three);
	
	Op* two = new Op(2);
	Mult* TreeB = new Mult(two, TreeA);
	
	Ceil* ceil2 = new Ceil(TreeB);
	ASSERT_EQ(ceil2->evaluate(), 15.0);
}

TEST(AbsTest, negNum){
	Op * two = new Op(-2.0);
	Op * four = new Op(4.0);
	Mult* TreeA = new Mult(two, four);
	
	Abs* ab2 = new Abs(TreeA);
	ASSERT_EQ(ab2->evaluate(), 8.0);
}

TEST(AbsTest, posNum){
	Op* eight = new Op(8.0);
	Op* seven = new Op(7.0);
	Mult* TreeA = new Mult(eight, seven);
	
	Abs* ab = new Abs(TreeA);
	ASSERT_EQ(ab->evaluate(), 56.0);
}

TEST(FloorTest, num){
	Op* one = new Op(1.0);
	Op* two = new Op(2.5);
	Add* TreeA = new Add(one,two);
	
	Floor * floor2 = new Floor(TreeA);
	ASSERT_EQ(floor2->evaluate(), 3.0);
}

TEST(FloorTest, num2){
	Op* three = new Op(3.0);
	Op* four = new Op(4.0);
	Add* TreeB = new Add(three,four);
	
	Floor * floor2 = new Floor(TreeB);
	ASSERT_EQ(floor2->evaluate(), 7.0);
}

TEST(num, truncate){
	Op* four = new Op(4);

	Op* five = new Op(5.0);
	Mult* TreeA = new Mult(four, five);
	
	Trunc* trunk = new Trunc(TreeA);
	ASSERT_EQ(trunk->stringify(),"20.000000");
} 
	
TEST (num, paren){
	Op* six = new Op(6);
	Op* seven = new Op(7);
	Add* total = new Add(six, seven);
	
	Paren* result = new  Paren(total);
	ASSERT_EQ(result->stringify(), "(6.000000 + 7.000000)");
}

TEST(Combine, TruncCeil){
	Op* num1 = new Op(20);
	Op* num2 = new Op(10.4);
	Add* TreeA = new Add(num1, num2);
	
	Ceil* ceil2 = new Ceil(TreeA);
	Trunc* trunk = new Trunc(ceil2);
	ASSERT_EQ(ceil2->evaluate(), 31.0);
	ASSERT_EQ(trunk->stringify(), "31.000000");
}

TEST(combine, parenAbs){
	Op* num1 = new Op(32);
	Op* num2 = new Op(12);
	Sub* TreeA = new Sub(num2, num1);
	
	Abs* ab = new Abs(TreeA);
	Paren* p = new Paren(ab);
	ASSERT_EQ(p->stringify(), "(12.000000 - 32.000000)");
} 

TEST(combine, TrAbsCeil){
	Op* num2 = new Op(2);
	Op* num1 = new Op(-9.3);
	Mult* treeA = new Mult(num2, num1);
	
	Abs* ab = new Abs(treeA);
	Ceil* c = new Ceil(ab);
	Trunc* t = new Trunc(c);

	ASSERT_EQ(t->stringify(), "19.000000");
}
	
TEST(combine, ParenFloor){
	Op* num = new Op(1.0);
	Op* num2 = new Op(3.2);
	Add* a = new Add(num, num2);
	
	Floor* f = new Floor(a);
	Op* num3 = new Op(2.0);
	Mult* m = new Mult(f,num3);
	Paren* p = new Paren(m);
	ASSERT_EQ(p->stringify(), "(4.000000 * 2.000000)");
}	

TEST(combine, ParenCeilAbs){
	Op* num1 = new Op(3.9);
	Op* num2 = new Op(2.0);
	Sub* s = new Sub(num1, num2);
	
	Ceil* c = new Ceil(s);
	Op* num3 = new Op(8);
	Mult* m = new Mult(num3, c);

	Paren* p = new Paren(m);
	Op* num4 = new Op(-2);
	Abs* a = new Abs(num4);
	Add* a2 = new Add(p, a);
	Paren* p2 = new Paren(a2);
	ASSERT_EQ(p2->stringify(),"(16.000000 + 2.000000)");
}

TEST(combine, trFloor){
	Op* num1 = new Op(1.2);
	Op* num2 = new Op(1.3);
	Add* a = new Add(num1, num2);
	Floor* f = new Floor(a);
	Op* num3 = new Op(4);
	Mult* m = new Mult(num3, f);
	Trunc* t = new Trunc(m);
	ASSERT_EQ(t->stringify(),"8.000000");
}
	
int main(int argc, char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
