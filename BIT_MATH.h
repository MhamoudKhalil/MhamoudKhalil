//header gard
#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SET_BIT(num,bitnum) (num) |=  (1 << (bitnum))
#define CLR_BIT(num,bitnum) (num) &= ~(1 << (bitnum))
#define TOG_BIT(num,bitnum) (num) ^=  (1 << (bitnum))
#define GET_BIT(num,bitnum) (((num) >> (bitnum)) & 1)


#endif