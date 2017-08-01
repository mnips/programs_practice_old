#include <stdio.h>
//find mode
int main()
{
    int t,f=0;scanf("%d",&t);
    while(f<t)
    {       int i,j,a[20]= {0}, sum = 0, n, t, b[20] = {0}, k = 0, c = 1, max = 0, mode;
        scanf("%d",&n);
            for (i = 0; i < n; i++)

    {

        scanf("%d", &a[i]);

    }

    for (i = 0; i < n - 1; i++)

    {

        mode = 0;

        for (j = i + 1; j < n; j++)

        {

            if (a[i] == a[j]) {

                mode++;

            }

        }

        if ((mode > max) && (mode != 0)) {

            k = 0;

            max = mode;

            b[k] = a[i];

            k++;

        }

        else if (mode == max) {

            b[k] = a[i];

            k++;

        }

    }

    for (i = 0; i < n; i++)

    {

        if (a[i] == b[i])

            c++;

        }

        if (c == n)

            printf("\nThere is no mode");

        else

        {



            for (i = k-1; i>=0; i--)

                printf("%d ",b[i]);

        }

        printf("\n");
        f++;
    }
    return 0;
}
