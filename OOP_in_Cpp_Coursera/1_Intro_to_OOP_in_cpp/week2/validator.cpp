/**
 * true if is valid and false if is invalid,
 * true if in range between 1 - 6 else false
*/
bool isValidRangeUserOption(int userOption){
    return 1 <= userOption && userOption <= 6 ? true: false;
}