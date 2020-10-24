#include <bits/stdc++.h>
using namespace std ;


int main()
{

    int t ;

    cin>>t ;

    while(t--)
    {
        string a , b ;
        getchar() ;
        cin>>a;
        cin>>b ;
getchar() ;
        int len_a , len_b ;

        len_b = b.length();
        len_a = a.length();

        int result = len_a - len_b ;

        string j , k  ;
        int counter = len_b ;
        for(int i = len_a ; i >= result ; --i )
        {
            j+= a[i] ;
            k+= b[counter] ;
            --counter ;
        }

        if( k == j)cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;


    }




    return(0);
}
