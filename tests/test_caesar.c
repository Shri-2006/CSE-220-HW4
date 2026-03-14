//Shriyans Singh 114807762
#include <criterion/criterion.h>
#include "../cse_caesar.h"

//edge null case test for plaintext
Test(encryptCaesar, test_1) {
    char buf[32] = "xxxxxxxxxxxxxxxxxxxxxxxx";
    int r = encryptCaesar(NULL, buf, 2);
    cr_expect_eq(r, -2);
   
}
Test(encryptCaesar, test_2) {
    //char buf[32] = "xxxxxxxxxxxxxxxxxxxxxxxx";
    int r = encryptCaesar("shri", NULL, 2);
    cr_expect_eq(r, -2);
   
}
Test(encryptCaesar, test_3) {
  //  char buf[32] = "xxxxxxxxxxxxxxxxxxxxxxxx";
    int r = encryptCaesar(NULL, NULL, 2);
    cr_expect_eq(r, -2);
   
}
Test(encryptCaesar, test_4) {
    char buf[32] = "";
    int r = encryptCaesar("sdas", buf, 2);
    cr_expect_eq(r, -1);
   
}

Test(encryptCaesar, test_5) {
    char buf[32] = "i sm dhti                  ";
    int r = encryptCaesar("shri", buf, 2);
    cr_expect_eq(r, 4);
    cr_expect_str_eq(buf, "ukvn__EOM__");
   
}
//edge case of empty plaintext
Test(encryptCaesar, test_6){
    char buf[32]="00000000";
    int r = encryptCaesar("",buf,2);
    cr_expect_eq(r,0);
    cr_expect_str_eq(buf,"__EOM__");
}


//check for null pointer
Test(decryptCaesar, test_1) {
    char buf[32];
    int r = decryptCaesar(NULL, buf, 2);
    cr_expect_eq(r, -2);
   
}
//check for plaintext length of 0
Test(decryptCaesar, test_2) {
    char buf[32] = "xxxxxxxx";
    int r = decryptCaesar("", buf, 2);
    cr_expect_eq(r, 0);
    cr_expect_str_eq(buf, "xxxxxxxx");
}
//missing EOM
Test(decryptCaesar, test_3){
    char buf[32] = "xxxxxxxx";
    int r = decryptCaesar("sss", buf, 2);
    cr_expect_eq(r, -1);
}

//letter test
Test(decryptCaesar, test_4){
    char buf[32] = "i sm dhti                  ";
    int r = decryptCaesar("ukvn__EOM__", buf, 2);
    cr_expect_eq(r, 4);
    cr_expect_str_eq(buf, "shri");
}

//blank string
Test(decryptCaesar, test_5){
    char buf[32] = "xxxxxxxx";
    int r = decryptCaesar("__EOM__", buf, 2);
    cr_expect_eq(r, 0);
    cr_expect_str_eq(buf, "");
}
//digit test
Test(decryptCaesar, test_6){
    char buf[32] = "xxxxxxxx";
    int r = decryptCaesar("21__EOM__", buf, 2);
    cr_expect_eq(r, 2);
    cr_expect_str_eq(buf, "07");

}
//cap test

Test(decryptCaesar, test_7){
    char buf[32] = "xxxxxxxx";
    int r = decryptCaesar("I__EOM__", buf, 2);
    cr_expect_eq(r, 1);
    cr_expect_str_eq(buf, "G");

}
Test(decryptCaesar, test_8){
    char buf[32] = "xxxxxxxx";
    int r = decryptCaesar("Shri 20__EOM__", buf, 2);
    cr_expect_eq(r, 6);
    cr_expect_str_eq(buf, "Qend 06");

}



