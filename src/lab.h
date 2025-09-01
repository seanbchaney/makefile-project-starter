#ifndef LAB_H
#define LAB_H

/** 
 * @brief Returns a greeting message.
 *
 * This function returns a string that contains a greeting message.
 * The string is allocated with malloc and should be freed by the caller.
 * @param name The name to include in the greeting.
 * @return A greeting string.
 */
char* get_greeting(const char* restrict name);

/** 
 * @brief Adds two integers.
 *
 * This function adds two integers and returns the result.
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */
int add(int a, int b);

/** 
 * @brief Subtracts two integers.
 *
 * This function subtracts the second integer from the first and returns the result.
 * @param a The first integer.
 * @param b The second integer.
 * @return The result of a - b.
 */
int subtract(int a, int b);

/** 
 * @brief Multiplies two integers.
 *
 * This function multiplies two integers and returns the product.
 * @param a The first integer.
 * @param b The second integer.
 * @return The product of a and b.
 */
int multiply(int a, int b);

/** 
 * @brief Returns an incorrect sum of two integers.
 *
 * This function intentionally returns an incorrect sum
 * by adding an extra 1 to the result.
 * @param a The first integer.
 * @param b The second integer.
 * @return The incorrect sum of a and b.
 */
int bad_add(int a, int b);

#endif // LAB_H
