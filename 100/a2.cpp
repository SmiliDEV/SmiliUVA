#include <stdio.h>
#include <iostream>

int main()
{   
    int a, b, c, d, e, f, g;
    
    while(scanf("%d %d", &a, &b) == 2)
    {
        f = 0;
        std::cout<<a<<" "<<b<<" ";

        if (a > b) 
        {
            g = a;
            a = b;
            b = g;
        }

        for (int x = a; x <= b; x++) {
            c = 1;
            d = x;
            
            while (d > 1) {
                if (d % 2 != 0)
                    d = d * 3 + 1;
                else 
                    d /= 2;
                
                c++;
            }

            if (c >= f )
                f = c;
        }

        std::cout<<f<<std::endl;
    }

    return 0;
}