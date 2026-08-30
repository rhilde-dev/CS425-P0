#ifndef LAB_H
#define LAB_H

/** * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char* get_greeting(const char* restrict name);

/** * @brief Returns a sum of two integers.
 *
 * This function returns a sum of two integers.
 * @param int1 integer one.
 * @param int2 integer two.
 * @return An integer representing the sum of the two integers passed.
 */
int sum(int int1, int int2);

/** * @brief Returns a incorrect sum of two integers.
 *
 * This function returns a incorrect sum of two integers by using an offset of 4.
 * @param int1 integer one.
 * @param int2 integer two.
 * @return An integer representing the incorrect sum of the two integers passed.
 */
int bad_sum(int int1, int int2);

#endif // LAB_H
