#include "lib.h"

int LibTest()
{
    string test_string1 = "She wanted to be healthy, so she bought plain cake donuts instead of the ones covered in chocolate.";
    string test_string_result1 = "chocolate";

    string test_string2 = "She wanted to be healthy, so she bought plain cake donuts instead of the ones covered in glaze.";
    string test_string_result2 = "healthy instead covered";

    string test_string3 = "Let's play a game!";
    string test_string_result3 = "Let's";

    string test_string2 = "On her next trip to LA, she really wants to try In-N-Out.";
    string test_string_result3 = "In-N-Out";

   const bool result1 = FindLongestWords(test_string1) == test_string_result1;
   const bool result2 = FindLongestWords(test_string2) == test_string_result2;
   const bool result3 = FindLongestWords(test_string3) == test_string_result3;

   if (result1 && result2 && result3)
   {
        return 1;
   }
   else
   {
        return 0;
   }
}

int main()
{
    return LibTest();
}