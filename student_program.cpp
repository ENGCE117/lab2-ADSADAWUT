#include <stdio.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
}//end function

char* reverse( char str1[]) {
    printf( "Enter str1 : " ) ;
    fgets(str1 , 50 , stdin) ;
    str1[strcspn(str1 , "\n" )] = '\0' ; 

    int len = strlen(str1) ;

    for (int i = 0 , j = len - 1 ; i < j ; i++ , j--) {
        char temp = str1[i] ;
        str1[i] = str1[j] ;
        str1[j] = temp ;
    }

    printf( "FUNC : %s\n" , str1 ) ;

    return str1 ;
}
