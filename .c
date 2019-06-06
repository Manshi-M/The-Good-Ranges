#include<stdio.h>

void swap(long long *xp, long long *yp)  
{  
    long long temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void selectSort(long long a[], long long n)  
{  
    long long i, j, min_idx;  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (a[j] < a[min_idx])  
            min_idx = j;  
        // Swap the found minimum element with the first element  
        swap(&a[min_idx], &a[i]);  
    }  
}  
int main() {
    long long n, m, i,j;
    scanf("%d", &n);
    scanf("%d", &m);
    long long a[m];
    for(i=0;i<m;i++){
        scanf("%lld", &a[i]);
    }
    printf("%lld\n",n+1);
    
    for(i=1;i<m;i++)
    {
        selectSort(a,i+1);
        long long sum = 0,l=1,h;
        for(j=0;j<i+1;j++)
        {
            if(a[j]!=a[j+1] && (j!=i))
            {
                if(j!=i)
                    h=a[j+1]-1;
                else
                    h=n;
                sum+=(l+h);
                l=a[j]+1;
            }
            else if(j==i)
            {
                h=n;
                sum+=(l+h);
                l=a[j]+1;
            }
            
        }
        printf("%lld\n",sum);
    }
}
