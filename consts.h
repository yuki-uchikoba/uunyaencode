/* 
 * File:   consts.h
 * Author: yuki
 *
 * Created on 2012/04/21, 11:44
 */

#ifndef CONSTS_H
#define	CONSTS_H

#define LINEMAX 4

/*                                 1        1 
                          1234567890123456789  */
#define ENCODESTRING_UU  "（」・ω・）」うー!"
#define ENCODESTRING_NYA "(／・ω・)／にゃー!"

#define USAGE_OUT \
                "uunyaencode ... encode binary with (」・ω・)」うー！(／・ω・)／にゃー！\n" \
                "\n" \
                "usage: uunyaencode [options] [source binary]\n" \
                "  options : " \
                "     -o <output filename> : output encoded text to <output filename>\n" \
                "                            (default: output to stdout) \n" \
                


#endif	/* CONSTS_H */

