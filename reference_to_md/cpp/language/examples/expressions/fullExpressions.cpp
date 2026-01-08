int num1 = 0;
num1 += 1; // Case 1: the constituent expression of “num += 1” is “num += 1”

int arr2[2] = {2, 22} // Case 2: the constituent expressions
//         of “{2, 22}” are “2” and “22”
// Case 3: the constituent expressions of “= {2, 22}”
//         are the constituent expressions of “{2, 22}”
//         (i.e also “2” and “22”)