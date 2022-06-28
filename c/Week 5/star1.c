#include <cstdio>

int main()
{
    for (int i = 0; i < 4; i++)
    {

        if (i == 0)
        {
            for (int j = 0; j < 6; j++)
            {

                printf("*");
            }
            printf("\n");
        }
        else
        {
            if (i == 1)
            {
                for (int j = 0; j < 6; j++)
                {
                    if (j == 0 || j == 5)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else
            {
                if (i == 2)
                {
                    for (int j = 0; j < 6; j++)
                    {
                        if (j == 0 || j == 5)
                        {
                            printf("*");
                        }
                        else
                        {
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                else
                {
                    for (int j = 0; j < 6; j++)
                    {

                        printf("*");
                    }
                }
            }
        }
    }
}