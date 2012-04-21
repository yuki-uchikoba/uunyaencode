/* 
 * File:   main.c
 *         for uunyaencode
 *  
 * Author: yuki
 *
 * Created on 2012/04/21, 11:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "consts.h"

/*
 * 
 */
int main(int argc, char** argv) {

    FILE *fi ;
    FILE *fo ;
    
    char ic ;
    char iw ;
    int  i ;
    int  outcount ;

    fi = stdin ;
    fo = stdout ;
    outcount = 0 ;
    while (1)
    {
        ic = fgetc(fi);
        if ( feof(fi) ) break ;
        for ( i = 0 ; i < 8 ; i ++ )
        {
            iw = ic & 1 ; ic = ic >> 1 ;
            if ( iw == 0 )      fputs( ENCODESTRING_UU  , fo ) ;
            else                fputs( ENCODESTRING_NYA , fo ) ;
            outcount ++ ;
            if ( outcount == LINEMAX )
            {
                fputs( "\n" , fo );
                outcount = 0 ;
            }
        }
    }
    
    return (EXIT_SUCCESS);
}

