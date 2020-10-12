#include <iostream>
#define max_length 11

using namespace std;
int main()
{
    int a,b,c,d,x,i;
    a=b=c=d=x=i=1;

    // assumption: we're supposed to add parens to show the associativity of the different
    // operators, without changing the meaning of the statement. this shows that a number
    // of the expressions are nonsensical.

    a = (((b + (c * d)) << 2) & 8) ;
    (a & (077 !=3));
    ((a == b) || ((a == c) && (c < 5)));
    (c = (x !=0)) ;
    ((0<=i)<7);
    f(1,2)+3;
    a=((-1)+ (+(b--)) -5);
    a=(b==(c++));
    a[4][2] *= ((*b) ? (c):((*d)*2));
    ((a-b),(c=d));


    // assumption: we're not supposed to add parens to show the associativity of the different

    a = (b + (c*d (<< (2 & 8))));
    ((a&077)!=3);
    ((a==b) || ((a==c) && (c<5))); (((a==b) || (a==c)) && (c<5));
    ((c=x)!=0);
    (0<=i)&&(i<7);
    (f(1,2)+3);
    a=((-1)+ +(b--)) -5;
    a=(b=(c++));
    a[4][2] *= ((*b) ? (c) : ((*d)*2));
    ((a-b),(c=d));
    return 0;
}
