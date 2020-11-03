#include <bits/stdc++.h>
using namespace std ;

void swap_ar(int *a , int *b )
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
}
void function_sort(int arr[] , int size_3)
{
    for(int i = 0 ; i < size_3 ; ++i )
    {
        for(int j = i + 1 ; j < size_3 ; ++j )
        {
            if(arr[i] > arr[j])
            {
                swap_ar(&arr[i] , &arr[j]);
            }
        }
    }
}

int main()
{
    int t ;

    cin>>t ;///scanf("%d", &t);

    int ar[3];
    int a , b , c ;
    int counter = 0 ;



    while(t--)
    {
        cin>>a>>b>>c ;

        ar[0] = a ;
        ar[1] = b ;
        ar[2] = c ;

        function_sort(ar , 3 );
        printf("Case %d: %d\n",++counter,ar[1]);

    }

    return(0);
}
