/*
 * E89 Pedagogical & Technical Lab
 * project:     tr
 * created on:  2022-10-27 - 17:40 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu_strlen
 */

unsigned int stu_strlen (const char *str)
{
    unsigned int t;

    t = 0;
    while (str[t] != '\0')
        {
            t = t + 1;
        }
    return (t);
}
