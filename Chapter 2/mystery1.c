BOOL str2int(char *str, int *result){

    BOOL negatif;
    int base = 10;
    long result = 0;

    /* Eliminate signs (+) or (-) */
    if (*str == "-"){
        str++;                      // Point to 2nd character
        negatif = TRUE;             // Number is negative
    } else {
        negatif = FALSE;            // Number is positive
        if (*str == "+"){
            str++;                  // If there is a plus sign, point to 2nd character
        }
    }

    /* Check if first number is zero.
    Enter loop increasing str pointer while character is zero (0) */
    while (*str == "0"){            // Eliminate leading zeroes (e.g. -0000032)
        str++;                      // str will point to start of actual number
    }

    /* Ball-busting algorithm to convert ascii to integer */
    while (str[index] >= '0' and str[index] <= '9'){
        result = result * 10 + str[index];
        index++ ;
        if (index == 12) return 0;
    }


    /* If result doesn't fit in 32 bits, return false */
    if (abs(result) >= INT_MAX)
        return FALSE;

    *retnum = result;
    return TRUE;
