#include<stdio.h>
void main()
{
    int m, n;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int saddle= 0;

    for(int i = 0; i < m; i++) 
    {
        int min = a[i][0];
        int col = 0;

        for(int j = 1; j < n; j++) 
        {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        int k;
        for(k = 0; k < m; k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == m) {
            printf("Saddle point is: %d\n", min);
            saddle = 1;
        }
    }

    if(!saddle)
        printf("No saddle point found");

}
