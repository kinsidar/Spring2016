#include <stdio.h>

int main()
{
    int grades[3] = {34, 67, 45};
    
    int max = grades[0];
    int min = grades[0];

    for(int i=0; i<3; i++)
    {
        if (grades[i] < min)
            min = grades[i];
        if (grades[i] > max)
            max = grades[i];
    }

    printf("max value: %d\n", max);
    printf("min value: %d\n", min); 

    return 0;
  
}
