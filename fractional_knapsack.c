#include <stdio.h>

int main()
{
    int U, i, n;
    float totalpro = 0.0;

    // Input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float w[n], p[n], x[n];

    // Input for weights
    printf("Enter the weights:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &w[i]); // Corrected %d to %f
    }

    // Input for profits
    printf("Enter the profits:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &p[i]); // Corrected %d to %f
    }

    int m;
    printf("Enter capacity: ");
    scanf("%d", &m);

    // Initialize fraction array
    for (i = 0; i < n; i++)
    {
        x[i] = 0.0;
    }

    U = m;

    
    for (i = 0; i < n - 1; i++) 
    {
        if ((p[i] / w[i]) >= (p[i + 1] / w[i + 1])) 
        {
            if (w[i] > U)
                break;

            x[i] = 1.0; // Take the full item
            U = U - w[i];
        }
    }

    if (i < n) // Fix condition
    {
        x[i] = (float)U / w[i];
    }

    // Calculate total profit
    for (i = 0; i < n; i++)
    {
        totalpro += p[i] * x[i];
    }

    // Print total profit
    printf("Total profit is: %.2f\n", totalpro);

    return 0;
}

