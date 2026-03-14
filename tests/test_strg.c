//Shriyans Singh 114807762
#include <criterion/criterion.h>
#include "../strgPtr.h"
#include <stdio.h>

//Shriyans Test Case strgLen:

Test(strgLen, basic_1){
    cr_expect_eq(strgLen("Hello"), 5);
}

Test(strgLen, basic_2){
    cr_expect_eq(strgLen("I am Shri"), 9);
}

Test(strgLen, basic_3){
    cr_expect_eq(strgLen("This is Hw4"), 11);
}
//-edge case of special char
Test(strgLen, basic_4){
    cr_expect_eq(strgLen("\n"), 1);
}
//-edge case of early termination
Test(strgLen, basic_5){
    cr_expect_eq(strgLen("This is CSE\0 220"), 11);
}
//edge of null character early.
Test(strgLen, basic_6){
    cr_expect_eq(strgLen("\0"), 0);
}
//edge test of long string
Test(strgLen, basic_7){
    cr_expect_eq(strgLen("1234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890e"), 101);
}

Test(strgLen, basic_8){
    cr_expect_eq(strgLen("I want to sleep"), 15);
}
Test(strgLen,basic_9){
    cr_expect_eq(strgLen("I am a TA for CSE 114 & 160"), 27);
}
Test(strgLen, basic_10){
    cr_expect_eq(strgLen("I felt so bad grading"), 21);
}
Test(strgLen,basic_11){
    cr_expect_eq(strgLen("Last strgLen huh?"), 17);
}



//strgCopy test cases now
Test(strgCopy, test_1){
    char d[20];
    strgCopy("I am under the water ",d, 21);
    cr_expect_str_eq(d, "I am under the water");
}

Test(strgCopy, test_2){
    char d[5];
    strgCopy("1234",d,4);
    cr_expect_str_eq(d, "123");
}
//edge case tests if size==1
Test(strgCopy, test_3){
    char d[1];
    strgCopy("321",d,1);
    cr_expect_str_eq(d, "\0");
}

//edge case tests if size==0
Test(strgCopy, test_4){
    char d[1]="z";
    strgCopy("213",d,0);
    cr_expect_str_eq(d, "z");

}
//edge case when destination is NULL
Test(strgCopy, test_5){
    char d[10]="zxzxzxzxz";
    (void)d;
    strgCopy("Hello",NULL,2);
    cr_expect_str_eq(d,"zxzxzxzxz");
}
//edge case of when not enough space in d
Test(strgCopy, test_6){
    char d[5];
    strgCopy("TestingSize",d,5);
    cr_expect_str_eq(d, "Test");
}
//test if sourcec is Null
Test(strgCopy, test_7){
    char d[10]="000000000";
    strgCopy(NULL,d,10);
    cr_expect_str_eq(d,"000000000");
}
Test(strgCopy, test_8){
    char d[6];
    strgCopy("Sleep",d,6);
    cr_expect_str_eq(d, "Sleep");
}
Test(strgCopy,test_9){
    char d[3];
    strgCopy("99",d,3);
    cr_expect_str_eq(d, "99");
}
Test(strgCopy,test_10){
    char d[10];
    strgCopy("hand hurts",d,10);
    cr_expect_str_eq(d,"hand hurt");

}
Test(strgCopy, test_11){
    char d[100];
    strgCopy("last strgCopy",d,20);
    cr_expect_str_eq(d,"last strgCopy");
}







//Change case time
Test(strgChangeCase, test_1) {
    char s[] = "strgChangeCase time";
    strgChangeCase(s);
    cr_expect_str_eq(s, "STRGcHANGEcASE TIME");
}

Test(strgChangeCase, test_2){
    char s[] = "1234";
    strgChangeCase(s);
    cr_expect_str_eq(s,"1234");
}

Test(strgChangeCase, test_3){
    char s[] ="I have a car";
    strgChangeCase(s);
    cr_expect_str_eq(s,"i HAVE A CAR");
}

Test(strgChangeCase, test_4){
    char s[]="a2a";
    strgChangeCase(s);
    cr_expect_str_eq(s,"a2a");
}
//edge case NULL should return 1
Test(strgChangeCase, test_5){

    strgChangeCase(NULL);
    cr_expect(1);
    
}
//special char
Test(strgChangeCase, test_6){
    char s[] ="\n";
    strgChangeCase(s);
    cr_expect_str_eq(s,"\n");
}

Test(strgChangeCase, test_7){
    char s[]= "Stony Br00k W1N";
    strgChangeCase(s);
    cr_expect_str_eq(s, "sTONY br00k W1N");
}

Test(strgChangeCase, test_8){
    char s[]= "Pointers are interesting";
    strgChangeCase(s);
    cr_expect_str_eq(s,"pOINTERS ARE INTERESTING");
}

Test(strgChangeCase, test_9){
    char s[]="Midterm 1 scared me";
    strgChangeCase(s);
    cr_expect_str_eq(s,"mIDTERM 1 SCARED ME");
}

Test(strgChangeCase, test_10){
    char s[] = "gas is pretty expensive, 3.30I think";
    strgChangeCase(s);
    cr_expect_str_eq(s,"GAS IS PRETTY EXPENSIVE, 3.30I THINK");
}
Test(strgChangeCase, test_11){
    char s[]= "I do commute";
    strgChangeCase(s);
    cr_expect_str_eq(s,"i DO COMMUTE");
}




//interleave tests now


Test(strgInterleave, test_1) {
    char d[6];
    strgInterleave("sh", "ri", d, 6);
    cr_expect_str_eq(d, "srhi");
}

