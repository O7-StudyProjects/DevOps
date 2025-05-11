#include "lib.h"

string FindLongestWords(string in_string)
{
    string word, final_string;
    int max_length = 0;

    for (string::iterator it = in_string.begin(); it != in_string.end(); it++)
    {
        const bool is_correct_char = isalpha(*it) || !word.empty() && ((*it) == '-' || (*it) == '\'');
        if (is_correct_char)
        {
            word += *it;
        }

        if (!is_correct_char || it + 1 == in_string.end())
        {
            if (word.empty())
            {
                continue;
            }

            if (word.length() < max_length)
            {
                word.clear();
                continue;
            }
            else if (word.length() > max_length)
            {
                max_length = word.length();
                final_string.clear();
            }


            if (!final_string.empty())
            {
                final_string += ' ';
            }

            final_string += word;
            word.clear();
        }
    }

    return final_string;
}
