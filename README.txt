Shriyans Singh
114807762

Edge Cases:

strgLen edgetest cases{
Test 4 for strgLen: Checking if special charactrs like newline is counted as 1.
Test 5: check to ensure program stops once string stopper is found.
Test 7: check for largish strigns work or not.
}

strgCopy edge test cases{
    test 3 for if size is 1
    Test 4 checks for if size is 0, should return without changing d.
    Test 5 checks when d is NULL. Should return d without changing it.
    Test 6 checks when not enough space in d
    Test 7 checks null source, should not changee d
}

strgChangeCase edge test cases{
    test 5 checks if NULL enterance
    test 6 checks for special characters like newline \n
}
strgDiff edge case{
    test 2: if same strings, return -1
    test 3: if s1==null return -2
    test 4L if s2==null return -2
    test 5 if all strings null
    test 6 checks special char
    test 8 of shorter string
}

strgInterleave edge{
    test 3: checks for when no space for change. no change overall
    test 4: checks for only 1 char change, null char insertion
    test 6: s1=null, do nothing
    test 7: s2=null, do nothing
    test 8: d=null, error code is 1 so 1 in cr_expect
    test 10: case sensitivity
}

strgReverseLetters edge{
    test-3 checks for digits staying still. Honestly a bit surprised it worked first time
    test 4 checks for special char also staying stll
    test 6 checks if s==NULL, return and do nothing
}

encryptCaesar edge{
    test1: null plaintext
    test 2: ciphertext null
    test3: btoh cipher and plain are null
    test4: check if no space in memory what happens
    test 6: check empty plaintext
}
decryptCaesar edge{
    test 1, null pointer
    test 2, plaintext lenbth==0
    test 3: missing EOM
    test4: decryption of a cipher done earlier
    test5: blank cause only EOM
    test_6: check digit transfer
    Test 7 capilization test
    test 8: mix of letter and digits
}

Order for decryptCaesear error precedence is based on red text, as according to the piazza


























Was told to delete sample test cases, just kept originals here and deleted tthe ones from the pdf
Test(strgLen, basic) {
    cr_expect_eq(strgLen("Stony Brook"), 11);
    cr_expect_eq(strgLen(""), 0);
    cr_expect_eq(strgLen(NULL), -1);
}



Test(strgCopy, truncation) {
    char d[5];
    strgCopy("Computer Science", d, 5);
    cr_expect_str_eq(d, "Comp");
}

Test(strgChangeCase, adjacency) {
    char s[] = "Stony Brook";
    strgChangeCase(s);
    cr_expect_str_eq(s, "sTONY bROOK");
}

Test(strgInterleave, priority) {
    char d[6];
    strgInterleave("abcdef", "12", d, 6);
    cr_expect_str_eq(d, "a1b2c");
}



Test(encryptCaesar, basic) {
    char buf[32] = "xxxxxxxxxxxxxxxxxxxxxxxx";
    int r = encryptCaesar("abc", buf, 2);
    cr_expect_eq(r, 3);
    cr_expect_str_eq(buf, "ceg__EOM__");
}

Test(decryptCaesar, basic) {
    char buf[32] = "xxxxxxxx";
    int r = decryptCaesar("ceg__EOM__", buf, 2);
    cr_expect_eq(r, 3);
    cr_expect_str_eq(buf, "abc");
}
