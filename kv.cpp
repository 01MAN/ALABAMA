#include <stdio.h>
#include <math.h>
main()
{
    float a,b,c;
    printf("vvedite a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                printf("x - lyboe 4islo");
            }
            else
            {
                printf("kornei net");
            }
        }
        else
        {
            printf ("x = %g", -c/b);
        }
    }
    
    return 0;
}
