
#include <unistd.h>
void  ft_putchar(char c)
  {
    write(1, &c, 1);
    }
void  kokab(int x, int y, int j, int i)

{
  while (j <= x)
        {
            if (i == 1 || i == y)
            {
                if (j == 1 || j == x)
                    write(1, "o", 1);
                else
                {
                    write(1, "-", 1);
                }
            }
            else
            {
                if (j == 1 || j == x)
                    write(1, "|", 1);
                else
                    write(1, " ", 1);
            }
            j++;
        }
}

 void    rush(int x, int y)
 
{
    int i, j;

    i = 1;
    while (i <= y)
    {
        j = 1;
    kokab(x,y,j,i);
        i++;
        write(1, "\n", 1);
    }
}


int main()
{
    rush(4,7);
    return 0;

}
