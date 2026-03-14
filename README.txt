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

strgInterleave edge{
    test 3: checks for when no space for change. no change overall
    test 4: checks for only 1 char change, null char insertion
    test 6: s1=null, do nothing
    test 7: s2=null, do nothing
    test 8: d=null, error code is 1 so 1 in cr_expect
    
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



