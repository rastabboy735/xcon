#include <windows.h>
#include <gl/gl.h>

char array1[578] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', 'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', ' ', ' ', ' ', };

char pointsarray[578] = {'9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', '9', '9', '9', '9', '9', ' ', ' ', ' ', };

int maxchar0=578;

char array2[578];

char array3[578];


















































































































































































































































































































































































































































int letterarraya[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0

};


int letterarrayb[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 0 , 0 , 0 , 0

};


int letterarrayc[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 1 , 0 , 0

};


int letterarrayd[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0

};


int letterarraye[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0

};


int letterarrayf[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0

};


int letterarrayg[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 1 , 1 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 0 , 0 , 0

};


int letterarrayh[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0

};


int letterarrayi[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0

};


int letterarrayj[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 1 , 1 , 0 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 0 , 1 , 1 , 0 , 0 , 0 , 0

};


int letterarrayk[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0

};


int letterarrayl[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 0 , 0

};


int letterarraym[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 1 , 0 , 0 , 1 , 1 , 0 ,
0 , 1 , 0 , 1 , 1 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0

};


int letterarrayn[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 1 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 1 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0

};


int letterarrayo[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 1 , 1 , 0 , 0 , 0

};


int letterarrayp[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0

};


int letterarrayq[65]= {

0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 1 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 1 , 0 ,
0 , 0 , 0 , 1 , 1 , 0 , 0 , 0

};


int letterarrayr[65]= {

0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0

};


int letterarrays[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 ,
0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , 1 , 1 , 1 , 1 , 0 , 0

};


int letterarrayt[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0

};


int letterarrayu[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , 1 , 1 , 1 , 1 , 0 , 0

};


int letterarrayv[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0

};


int letterarrayw[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 1 , 0 , 1 , 1 , 0 , 1 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 0 , 0

};


int letterarrayx[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 ,
0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 1 , 0

};


int letterarrayy[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 1 , 1 , 0 , 1 , 1 , 0 , 0 ,
0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0

};

int letterarrayz[65]= {
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 ,
0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 1 , 0

};








float laloopy=0 , laloopx=0;
int laloopi=0;


float colormode=0, colorrunlength=0, maxchar0f=0 , colorrunmath=0;
long colorrunlength1=0, colorrunlength2=0, colorrunlength3=0, colorrunlength4=0, colorrunlength5=0, colorrunlength6=0, colorrunlength7=0, colorrunlength8=0;
long colorrunlength9=0, colorrunlength10=0, colorrunlength11=0, colorrunlength12=0;
float rfin=0, gfin=0, bffin=0;
long count=0, startcount=0;
char specialchar=0;
float loopx=0;
float loopy=0;
float r=0 , g=0, bf=0;
long xcursor = 0 , ycursor = 0;
int maxcharplus=0 ; // maxcharminus=0 , maxcharminus28=0;
int clearloop=0;
float counter=0;
float scrollboost=0, yscrollsum=0;
int lockscroll=0, showtext=0, cancelupdown=0;
float xcursorf1=0, ycursorf1=0;
char colorchoice='b';
int drawthreebutton=0, dtloop=0, dtcounter=0;
char dtarray[4] = {'1', '1', '1'};
int array2loop=0, tintmodeon=0;
float colorbrightness=0;
int tintcolorselect=0, colorchoicesave=0;
char tintselection='1', tintselectionsave='1';
float rtint=.35, gtint=.35, bftint=.35;
int showbubbleon = 0 , bubblecolorselect=3;
char bubblecolor='3', bubblecolorsave='3';
float rbubble=.35, gbubble=0, bfbubble=0;
float colorboostdiv2=0, colorboostdiv1p25=0, colorbrightnessdiv2=0, colorbrightnessdiv1p25=0;
float colorboost=0;
LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);
void EnableOpenGL(HWND hwnd, HDC*, HGLRC*);
void DisableOpenGL(HWND, HDC, HGLRC);


int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
    WNDCLASSEX wcex;
    HWND hwnd;
    HDC hDC;
    HGLRC hRC;
    MSG msg;
    BOOL bQuit = FALSE;
    float theta = 0.0f;

    /* register window class */
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_OWNDC;
    wcex.lpfnWndProc = WindowProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = "GLSample";
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);;


    if (!RegisterClassEx(&wcex))
        return 0;

    /* create main window */
    hwnd = CreateWindowEx(0,
                          "GLSample",
                          "Con HD",
                          WS_OVERLAPPEDWINDOW,
                          CW_USEDEFAULT,
                          CW_USEDEFAULT,
                          1390,
                          790,
                          NULL,
                          NULL,
                          hInstance,
                          NULL);

    ShowWindow(hwnd, nCmdShow);

    /* enable OpenGL for the window */
    EnableOpenGL(hwnd, &hDC, &hRC);

    startcount=500;
    maxcharplus=maxchar0+5700;
    maxchar0f=maxchar0;
    colorrunlength=maxchar0f/12;
    colorrunlength1=colorrunlength;

    colorrunmath=colorrunlength*2;
    colorrunlength2=colorrunmath;

    colorrunmath=colorrunlength*3;
     colorrunlength3=colorrunmath;



    colorrunmath=colorrunlength*4;
    colorrunlength4=colorrunmath;


    colorrunmath=colorrunlength*5;
    colorrunlength5=colorrunmath;


    colorrunmath=colorrunlength*6;
    colorrunlength6=colorrunmath;


    colorrunmath=colorrunlength*7;
    colorrunlength7=colorrunmath;


    colorrunmath=colorrunlength*8;
    colorrunlength8=colorrunmath;


    colorrunmath=colorrunlength*9;
    colorrunlength9=colorrunmath;



    colorrunmath=colorrunlength*10;
    colorrunlength10=colorrunmath;


    colorrunmath=colorrunlength*11;
    colorrunlength11=colorrunmath;


    colorrunmath=colorrunlength*12;
    colorrunlength12=colorrunmath;

    //tint code
    for (array2loop=0; array2loop<maxchar0; array2loop++) {

        array2[array2loop]='1';
        array3[array2loop]='3';

    }
    //end tint code

       //2780
       POINT cursorpos;
    /* program main loop */
    while (!bQuit)
    {
        /* check for messages */
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
        else
        {
            /* OpenGL animation code goes here */

            glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            glPushMatrix();
          //  glRotatef(theta, 0.5f, 0.25f, 0.5f);


   if (GetAsyncKeyState(0x01) ) {
            GetCursorPos(&cursorpos);
            xcursor = cursorpos.x ;
            ycursor = cursorpos.y ;


            // start lockscroll
            if (ycursor<160) {
            if (ycursor>60) {
            if (xcursor>1320) {
            //.928
                    if (lockscroll==1) {
                        lockscroll=0;
                        drawthreebutton=0;
                    }
                    else {
                        lockscroll=1;
                    }
                Sleep(600);

            }
            }
              } // end if ycursor less than 160


                           if (ycursor<160) {
                                if (ycursor>60) {
            if (xcursor>1250) {
                     if (xcursor<1320) {//.928
                         if (showtext==0) {
                showtext=1;
                         }
                         else {
                            showtext=0;
                         }
                cancelupdown=1;
                Sleep(600);
                     }
            }
                                }
               } // end if ycursor <80
            // end erase all

            //end lock scroll

            //start drawthree button sensor

                           if (ycursor<160) {
                                if (ycursor>60) {
            if (xcursor>1180) {
                     if (xcursor<1250) {//.928
                         if (drawthreebutton==0) {
                drawthreebutton=1;
                lockscroll=1;
                         }
                         else {
                            drawthreebutton=0;
                            lockscroll=0;
                                                 }
                        Sleep(600);
                     }
            }

            }
               } // end if ycursor <80
            // end drawthree button sensor



            //start tint button sensor

                           if (ycursor<160) {
                                if (ycursor>60) {
            if (xcursor>1110) {
                     if (xcursor<1180) {//.928

                    if (tintcolorselect==0) {
                    tintcolorselect=1;
                lockscroll=1;
                tintmodeon=1;
                         }

                        else {

                            lockscroll=0;
                            tintcolorselect=0;
                            tintmodeon=0;


                         } // end else




                        Sleep(600);
                     }
            }

            }
               } // end if ycursor <80
            // end tint button sensor


            //start bubble sort button sensor

                           if (ycursor<160) {
                                if (ycursor>60) {
            if (xcursor>1040) {
                     if (xcursor<1110) {//.928


                    if (showbubbleon==0) {
                    bubblecolorselect=1;
                lockscroll=1;
                showbubbleon=1;
                         }

                        else {

                            lockscroll=0;
                            bubblecolorselect=0;
                            showbubbleon=0;


                         } // end else




                        Sleep(600);
                     }
            }

            }
               } // end if ycursor <80
            // end bubblesort button sensor


            // start erase all
               if (ycursor<30) {
            if (xcursor<50) { //.928
                for (clearloop=0; clearloop<maxchar0; clearloop++) {
                    array1[clearloop]=colorchoice;
                }


            }
               } // end if ycursor <80
            // end erase all





if (lockscroll==0) {

         if (ycursor>424)     {
                scrollboost=scrollboost+.0088;
                if (scrollboost>.035)
                {
                    scrollboost=0;
                    startcount=startcount+100;
                    cancelupdown=0;
                }
      }
      if (cancelupdown==0) {
        if (ycursor<344) {
                scrollboost=scrollboost-.0088;
                                if (scrollboost<0)
                {
                    scrollboost=.035;
                     startcount=startcount-100; // 550 for 2 lines
                }

        }
      } //end if cancelupdown==0
} // end if lockscroll equ zero



if (lockscroll==1) {


                        GetCursorPos(&cursorpos);

                        xcursorf1=xcursor-683 ;
                          xcursorf1=xcursorf1/683 ;

                        ycursorf1 = 768 - ycursor -384; // 348
                        ycursorf1=ycursorf1/384;

                        colorchoicesave=colorchoice;

                        // start color pad button relay
                        if (ycursorf1>.82) {
                            if (xcursorf1>-.928) {
                                    if (xcursorf1<-.796) {
                                colorchoice='1';
                                    }
                            }

                            if (xcursorf1>-.796) {
                                if (xcursorf1<-.664) {
                                colorchoice='2';
                            }
                            }


                            if (xcursorf1>-.664) {
                                if (xcursorf1<-.532) {
                                colorchoice='3';
                            }
                            }


                            if (xcursorf1>-.532) {
                                if (xcursorf1<-.4) {
                                colorchoice='4';
                            }
                            }


                            if (xcursorf1>-.4) {
                                if (xcursorf1<-.268) {
                                colorchoice='5';
                            }
                            }


                            if (xcursorf1>-.268) {
                                if (xcursorf1<-.136) {
                                colorchoice='6';
                            }
                            }


                            if (xcursorf1>-.136) {
                                if (xcursorf1<-.004) {
                                colorchoice='7';
                            }
                            }


                            if (xcursorf1>-.004) {
                                if (xcursorf1<.128) {
                                colorchoice='8';
                            }
                            }


                            if (xcursorf1>.128) {
                                if (xcursorf1<.26) {
                                colorchoice='9';
                            }
                            }


                            if (xcursorf1>.26) {
                                    if (xcursorf1<.392) {
                                colorchoice='0';
                            }
                            }

                               if (xcursorf1>.392) { // new 2
                                    if (xcursorf1<.524) {
                                colorchoice='A';
                            }
                            }

                               if (xcursorf1>.524) { // new 3
                                    if (xcursorf1<.656) {
                                colorchoice='B';
                            }
                            }

                               if (xcursorf1>.656) { // new 4
                                    if (xcursorf1<.788) {
                                colorchoice='C';
                            }
                            }

                               if (xcursorf1>.788) { // new 5
                                    if (xcursorf1<.92) {
                                colorchoice='D';
                            }
                            }

                if (tintcolorselect==0) {
                if (drawthreebutton==1) {
                        dtarray[2]=dtarray[1];
                        dtarray[1]=dtarray[0];
                    dtarray[0]=colorchoice;

                    Sleep(600);
                }
                } // end if tint color select equ 0

                if (tintcolorselect==1) {

                    tintselectionsave=tintselection;
                    tintselection=colorchoice;
                    colorchoice=colorchoicesave;

                        if (tintselection=='1') { rtint=.35; gtint=.35; bftint=.35;}
                if (tintselection=='2') { rtint=0; gtint=0; bftint=0; }
                if (tintselection=='3') {rtint=.35; gtint=0; bftint=0; }
                if (tintselection=='4') { rtint=.35; gtint=.175; bftint=0; }
               if (tintselection=='5') { rtint=.35; gtint=.35; bftint=0; }
                if (tintselection=='6') { rtint=.175; gtint=.35; bftint=0; }
                if (tintselection=='7') { rtint=0; gtint=.35; bftint=0; }
                if (tintselection=='8') {rtint=0; gtint=.35; bftint=.175;}
                if (tintselection=='9') {rtint=0; gtint=.35; bftint=.35; }
                if (tintselection=='0') { rtint=0; gtint=.175; bftint=.35;}
                if (tintselection=='A') { rtint=0; gtint=0; bftint=.35;}
                if (tintselection=='B') { rtint=.175; gtint=0; bftint=.35;}
                if (tintselection=='C') { rtint=.35; gtint=0; bftint=.35;}
                if (tintselection=='D') { rtint=.35; gtint=0; bftint=.175;}

                                for (clearloop=0; clearloop<maxchar0; clearloop++) {
                                        if (array2[clearloop]==tintselectionsave) {
                    array2[clearloop]=tintselection;
                                        } // end if array2 equ tint selection save
                }
                tintcolorselect=0;
                } // end if tint color select equ 1

                                if (bubblecolorselect==1) {

                    bubblecolorsave=bubblecolor;
                    bubblecolor=colorchoice;
                    colorchoice=colorchoicesave;


                        if (bubblecolor=='1') { rbubble=.35; gbubble=.35; bfbubble=.35;}
                if (bubblecolor=='2') { rbubble=0; gbubble=0; bfbubble=0; }
                if (bubblecolor=='3') {rbubble=.35; gbubble=0; bfbubble=0; }
                if (bubblecolor=='4') { rbubble=.35; gbubble=.175; bfbubble=0; }
               if (bubblecolor=='5') { rbubble=.35; gbubble=.35; bfbubble=0; }
                if (bubblecolor=='6') { rbubble=.175; gbubble=.35; bfbubble=0; }
                if (bubblecolor=='7') { rbubble=0; gbubble=.35; bfbubble=0; }
                if (bubblecolor=='8') {rbubble=0; gbubble=.35; bfbubble=.175;}
                if (bubblecolor=='9') {rbubble=0; gbubble=.35; bfbubble=.35; }
                if (bubblecolor=='0') { rbubble=0; gbubble=.175; bfbubble=.35;}
                if (bubblecolor=='A') { rbubble=0; gbubble=0; bfbubble=.35; }
                if (bubblecolor=='B') {rbubble=.175; gbubble=0; bfbubble=.35;}
                if (bubblecolor=='C') {rbubble=.35; gbubble=0; bfbubble=.35; }
                if (bubblecolor=='D') { rbubble=.35; gbubble=0; bfbubble=.175;}


                                for (clearloop=0; clearloop<maxchar0; clearloop++) {
                                        if (array3[clearloop]==bubblecolorsave) {
                    array3[clearloop]=bubblecolor;
                                        } // end if array2 equ tint selection save
                }

                bubblecolorselect=0;
                } // end if bubble color select equ 1


                        } // end if y cursor greater than .95
                        // end colorpad button relay
} // end if lockscroll equ one


if (startcount<-10000) {startcount=-10000; }
if (startcount>maxcharplus) {startcount=maxcharplus; }

   } // end getkeystate

count=startcount;



for (loopy=1; loopy>-1.1; loopy=loopy-.035) {
        yscrollsum=scrollboost+loopy;
for (loopx=-1; loopx<.98; loopx=loopx+.02) {


if (count>-1 && count<maxchar0) {

if (lockscroll==1) {
        if (ycursorf1<.85) {
if (xcursorf1>loopx) {
    if (xcursorf1<loopx+.02) {
if (ycursorf1<yscrollsum+.035) {
    if (ycursorf1>yscrollsum) {
        if (showbubbleon==0) {
            if (tintmodeon==0) {
        array1[count]=colorchoice;

            if (drawthreebutton==1) {
                    if (count>1) {
                array1[count-1]=dtarray[0];
                    }
                array1[count]=dtarray[1];
                array1[count+1]=dtarray[2];
            }
    } // end if tintmode on equ 0

    if (tintmodeon==1) {
            array2[count]=colorchoice;

                if (drawthreebutton==1) {
                    if (count>1) {
                array2[count-1]=dtarray[0];
                    }
                array2[count]=dtarray[1];
                array2[count+1]=dtarray[2];
            }
    } // end if tintmodeon == 1
        } // end if showbubbleon==0

    //start if showbubbleon
        if (showbubbleon==1) {
            array3[count]=colorchoice;

                if (drawthreebutton==1) {
                    if (count>1) {
                array3[count-1]=dtarray[0];
                    }
                array3[count]=dtarray[1];
                array3[count+1]=dtarray[2];
            }
        }

    //end if showbubbleon
    } // end if y cursor < yscrollsum
    }
}
}
}
}
if (tintmodeon==0) {
               if (array1[count]=='a') {  r=0; g=.02 ; bf=0; specialchar=0;}
                if (array1[count]=='b') {  r=0; g=.04 ; bf=0; specialchar=0;}
                if (array1[count]=='c') {  r=0; g=.06; bf=0; specialchar=0;}
                if (array1[count]=='d') {  r=0; g=.08 ; bf=0; specialchar=0; }
                if (array1[count]=='e') {  r=0; g=.1 ; bf=0; specialchar=0; }
                     if (array1[count]=='f') {  r=0; g=.12 ; bf=0; specialchar=0;}
                if (array1[count]=='g') {  r=0; g=.14; bf=0; specialchar=0;}
                if (array1[count]=='h') {  r=0; g=.16 ; bf=0; specialchar=0;}
                if (array1[count]=='i') {  r=0; g=.18; bf=0; specialchar=0;}
                if (array1[count]=='j') {  r=0; g=.2; bf=0; specialchar=0; }
                     if (array1[count]=='k') {  r=0; g=.22; bf=0; specialchar=0;}
                if (array1[count]=='l') { r=0; g=.24; bf=0; specialchar=0;}
                if (array1[count]=='m') {  r=0; g=.26; bf=0; specialchar=0;}
                if (array1[count]=='n') {  r=0; g=.28 ; bf=0; specialchar=0;}
                if (array1[count]=='o') {  r=0; g=.3 ; bf=0; specialchar=0;}
                     if (array1[count]=='p') {  r=0; g=.32 ; bf=0; specialchar=0;}
                if (array1[count]=='q') {  r=0; g=.34 ; bf=0; specialchar=0; }
                if (array1[count]=='r') {  r=0; g=.36 ; bf=0; specialchar=0;}
                if (array1[count]=='s') {  r=0; g=.38 ; bf=0; specialchar=0;}
                if (array1[count]=='t') {  r=0; g=.4 ; bf=0; specialchar=0; }
                     if (array1[count]=='u') {  r=0; g=.42 ; bf=0; specialchar=0;}
                if (array1[count]=='v') {  r=0; g=.44 ; bf=0; specialchar=0;}
                if (array1[count]=='w')  {r=0; g=.46 ; bf=0; specialchar=0; }
                if (array1[count]=='x') { r=0; g=.48 ; bf=0; specialchar=0;}
                if (array1[count]=='y') { r=0; g=.5 ; bf=0; specialchar=0; }
                      if (array1[count]=='z') { r=0; g=.52 ; bf=0; specialchar=0;}
/*
                        if (array1[count]=='.') { r=.39; g=.39 ; bf=.26; specialchar=1;}
                           if (array1[count]==',') { r=.35; g=.35; bf=.35; specialchar=1;}
                           if (array1[count]==' ') { r=0; g=0; bf=0; specialchar=1;}
*/

               if (array1[count]=='1') { r=.75; g=.75; bf=.75; specialchar=1;}
                if (array1[count]=='2') { r=0; g=0; bf=0; specialchar=1;}
                if (array1[count]=='3') {r=.5; g=0; bf=0; specialchar=1;}
                if (array1[count]=='4') { r=.5; g=.25; bf=0; specialchar=1;}
               if (array1[count]=='5') { r=.5; g=.5; bf=0; specialchar=1;}
                if (array1[count]=='6') { r=.25; g=.5; bf=0; specialchar=1;}
                if (array1[count]=='7') { r=0; g=.5; bf=0; specialchar=1;}
                if (array1[count]=='8') {r=0; g=.5; bf=.25; specialchar=1;}
                if (array1[count]=='9') {r=0; g=.5; bf=.5; specialchar=1;}
                if (array1[count]=='0') { r=0; g=.25; bf=.5; specialchar=1;}
                if (array1[count]=='A') { r=0; g=0; bf=.5; specialchar=1;}
                if (array1[count]=='B') {r=.25; g=0; bf=.5; specialchar=1;}
                if (array1[count]=='C') {r=.5; g=0; bf=.5; specialchar=1;}
                if (array1[count]=='D') { r=.5; g=0; bf=.25; specialchar=1;}


                if (count<colorrunlength1) {rfin=g; gfin=0; bffin=0;} // red
                if (count>colorrunlength1) { if (count<colorrunlength2) { rfin=g; gfin=g*.5; bffin=0;}} // orange
                if (count>colorrunlength2) { if (count<colorrunlength3)  {rfin=g; gfin=g; bffin=0;}} // yellow
                if (count>colorrunlength3) { if (count<colorrunlength4)  {rfin=g*.5; gfin=g; bffin=0;}} // pre green
                if (count>colorrunlength4) { if (count<colorrunlength5)  {rfin=0; gfin=g; bffin=0;}} //true green
                if (count>colorrunlength5) { if (count<colorrunlength6)  {rfin=0; gfin=g; bffin=g*.5;}} // pre cyan
                if (count>colorrunlength6) { if (count<colorrunlength7)  {rfin=0; gfin=g; bffin=g;}} // cyan
                if (count>colorrunlength7) { if (count<colorrunlength8)  {rfin=0; gfin=g*.5; bffin=g;}} // pre blue
                if (count>colorrunlength8) { if (count<colorrunlength9)  {rfin=0; gfin=0; bffin=g;}} // blue
                  if (count>colorrunlength9) { if (count<colorrunlength10)  {rfin=g*.5; gfin=0; bffin=g;}} // pre pink
                if (count>colorrunlength10) { if (count<colorrunlength11)  {rfin=g; gfin=0; bffin=g;}} // pink
                if (count>colorrunlength11) { if (count<colorrunlength12)  {rfin=g; gfin=0; bffin=g*.5;}} // pre red

                if (specialchar==0) {glColor3f(rfin , gfin , bffin);}
                if (specialchar==1) {glColor3f(r , g , bf);}

                } // end if tintmodeon equ 0

                 if (tintmodeon==1) {


               if (array1[count]=='a') {  colorbrightness=.014 ;}
                if (array1[count]=='b') { colorbrightness=.028 ;}
                if (array1[count]=='c') {  colorbrightness=.042;}
                if (array1[count]=='d') { colorbrightness=.056 ;  }
                if (array1[count]=='e') {  colorbrightness=.07 ; }
                     if (array1[count]=='f') { colorbrightness=.084 ;}
                if (array1[count]=='g') { colorbrightness=.098; }
                if (array1[count]=='h') {  colorbrightness=.112 ;}
                if (array1[count]=='i') {  colorbrightness=.126;}
                if (array1[count]=='j') {  colorbrightness=.14; }
                     if (array1[count]=='k') {  colorbrightness=.154; }
                if (array1[count]=='l') { colorbrightness=.168;}
                if (array1[count]=='m') {  colorbrightness=.182; }
                if (array1[count]=='n') {  colorbrightness=.196 ; }
                if (array1[count]=='o') {  colorbrightness=.21 ;}
                     if (array1[count]=='p') {  colorbrightness=.224 ;}
                if (array1[count]=='q') {  colorbrightness=.238 ; }
                if (array1[count]=='r') {  colorbrightness=.252 ;}
                if (array1[count]=='s') {   colorbrightness=.266 ;}
                if (array1[count]=='t') {   colorbrightness=.28 ;}
                     if (array1[count]=='u') { colorbrightness=.294 ; }
                if (array1[count]=='v') {  colorbrightness=.308 ; }
                if (array1[count]=='w')  {colorbrightness=.322 ; }
                if (array1[count]=='x') { colorbrightness=.336 ; }
                if (array1[count]=='y') { colorbrightness=.35 ;}
                      if (array1[count]=='z') { colorbrightness=.364 ;}

                    colorbrightnessdiv2=colorbrightness/2;
                    colorbrightnessdiv1p25=colorbrightness/1.25;



                if (array2[count]=='1') { r=colorbrightness; g=colorbrightness; bf=colorbrightness; }
                if (array2[count]=='2') { r=0; g=0; bf=0; }
                if (array2[count]=='3') {r=colorbrightness; g=0; bf=0; }
                if (array2[count]=='4') { r=colorbrightness; g=colorbrightnessdiv2; bf=0; }
               if (array2[count]=='5') { r=colorbrightness; g=colorbrightness; bf=0;}
                if (array2[count]=='6') { r=colorbrightnessdiv1p25; g=colorbrightness; bf=0;}
                if (array2[count]=='7') { r=0; g=colorbrightness; bf=0;}
                if (array2[count]=='8') {r=0; g=colorbrightness; bf=colorbrightnessdiv1p25; }
                if (array2[count]=='9') {r=0; g=colorbrightness; bf=colorbrightness; }
                if (array2[count]=='0') { r=0; g=colorbrightnessdiv1p25; bf=colorbrightness;}
                if (array2[count]=='A') { r=0; g=0; bf=colorbrightness;}
                if (array2[count]=='B') { r=colorbrightnessdiv1p25; g=0; bf=colorbrightness;}
                if (array2[count]=='C') { r=colorbrightness; g=0; bf=colorbrightness;}
                if (array2[count]=='D') { r=colorbrightness; g=0; bf=colorbrightnessdiv1p25;}



                        if (array1[count]=='1') { r=.75; g=.75; bf=.75; }
                if (array1[count]=='2') { r=0; g=0; bf=0; }
                if (array1[count]=='3') {r=.5; g=0; bf=0; }
                if (array1[count]=='4') { r=.5; g=.25; bf=0; }
               if (array1[count]=='5') { r=.5; g=.5; bf=0; }
                if (array1[count]=='6') { r=.25; g=.5; bf=0; }
                if (array1[count]=='7') { r=0; g=.5; bf=0; }
                if (array1[count]=='8') {r=0; g=.5; bf=.25; }
                if (array1[count]=='9') {r=0; g=.5; bf=.5; }
                if (array1[count]=='0') { r=0; g=.25; bf=.5; }
                if (array1[count]=='A') { r=0; g=0; bf=.5; }
                if (array1[count]=='B') {r=.25; g=0; bf=.5; }
                if (array1[count]=='C') {r=.5; g=0; bf=.5; }
                if (array1[count]=='D') { r=.5; g=0; bf=.25; }

                        glColor3f(r , g , bf);



                        } // end if tint mode = 1

                        if (showbubbleon==1) {

                if (pointsarray[count]=='9') {colorboost=.25; colorboostdiv2=.125; colorboostdiv1p25=.2;}
                if (pointsarray[count]=='8') {colorboost=.225; colorboostdiv2=.11; colorboostdiv1p25=.18;}
                if (pointsarray[count]=='7') {colorboost=.2; colorboostdiv2=.1; colorboostdiv1p25=.16;}

                if (pointsarray[count]=='6') {colorboost=.175; colorboostdiv2=.088; colorboostdiv1p25=.14;}
                if (pointsarray[count]=='5') {colorboost=.15; colorboostdiv2=.075; colorboostdiv1p25=.12;}
                if (pointsarray[count]=='4') {colorboost=.125; colorboostdiv2=.06; colorboostdiv1p25=.1;}

                if (pointsarray[count]=='3') {colorboost=.1; colorboostdiv2=.05; colorboostdiv1p25=.08;}
                if (pointsarray[count]=='2') {colorboost=.075; colorboostdiv2=.038; colorboostdiv1p25=.06;}
                if (pointsarray[count]=='1') {colorboost=.05; colorboostdiv2=.03; colorboostdiv1p25=.04;}

                if (pointsarray[count]=='0') {colorboost=0; colorboostdiv2=0; colorboostdiv1p25=0;}




                if (tintmodeon==0) {
                rfin=rfin-.1;
                gfin=gfin-.1;
                bffin=bffin-.1;



                if (array3[count]=='1') { rfin=rfin+colorboost; gfin=gfin+colorboost; bffin=bffin+colorboost; }
                if (array3[count]=='2') { rfin=0; gfin=0; bffin=0; }
                if (array3[count]=='3') {rfin=rfin+colorboost; gfin=gfin; bffin=bffin; }
                if (array3[count]=='4') { rfin=rfin+colorboost; gfin=gfin+colorboostdiv2; bffin=bffin; }
               if (array3[count]=='5') { rfin=rfin+colorboost; gfin=gfin+colorboost; bffin=bffin;}
                if (array3[count]=='6') { rfin=rfin+colorboostdiv1p25; gfin=gfin+colorboost; bffin=bffin;}
                if (array3[count]=='7') { rfin=rfin; gfin=gfin+colorboost; bffin=bffin;}
                if (array3[count]=='8') {rfin=rfin; gfin=gfin+colorboost; bffin=bffin+colorboostdiv1p25; }
                if (array3[count]=='9') {rfin=rfin; gfin=gfin+colorboost; bffin=bffin+colorboost; }
                if (array3[count]=='0') { rfin=rfin; gfin=gfin+colorboostdiv1p25; bffin=bffin+colorboost;}
                if (array3[count]=='A') { rfin=rfin; gfin=gfin; bffin=bffin+colorboost;}
                if (array3[count]=='B') { rfin=rfin+colorboostdiv1p25; gfin=gfin; bffin=bffin+colorboost;}
                if (array3[count]=='C') { rfin=rfin+colorboost; gfin=gfin; bffin=bffin+colorboost;}
                if (array3[count]=='D') { rfin=rfin+colorboost; gfin=gfin; bffin=bffin+colorboostdiv1p25;}




                glColor3f(rfin , gfin , bffin);
                } // end if tintmodeon == 0

                if (tintmodeon==1) {

                r=r-.1;
                g=g-.1;
                bf=bf-.1;

                if (array3[count]=='1') { r=r+colorboost; g=g+colorboost; bf=bf+colorboost; }
                if (array3[count]=='2') { r=0; g=0; bf=0; }
                if (array3[count]=='3') {r=r+colorboost; g=g; bf=bf; }
                if (array3[count]=='4') { r=r+colorboost; g=g+colorboostdiv2; bf=bf; }
               if (array3[count]=='5') { r=r+colorboost; g=g+colorboost; bf=bf;}
                if (array3[count]=='6') { r=r+colorboostdiv1p25; g=g+colorboost; bf=bf;}
                if (array3[count]=='7') { r=r; g=g+colorboost; bf=bf;}
                if (array3[count]=='8') {r=r; g=g+colorboost; bf=bf+colorboostdiv1p25; }
                if (array3[count]=='9') {r=r; g=g+colorboost; bf=bf+colorboost; }
                if (array3[count]=='0') { r=r; g=g+colorboostdiv1p25; bf=bf+colorboost;}

                if (array3[count]=='A') { r=r; g=g; bf=bf+colorboost;}
                if (array3[count]=='B') {r=r+colorboostdiv1p25; g=g; bf=bf+colorboost; }
                if (array3[count]=='C') {r=r+colorboost; g=g; bf=bf+colorboost; }
                if (array3[count]=='D') { r=r+colorboost; g=g; bf=bf+colorboostdiv1p25;}

                glColor3f(r , g , bf);
                }

                        } // end if showbubbleon equ 1



                        if (array1[count]=='.') { glColor3f(.39 , .39 , .26);}
                           if (array1[count]==',') { glColor3f(.35 , .35 , .35);}
                           if (array1[count]==' ') { glColor3f(0 , 0 , 0);}


    glBegin(GL_QUADS);

            glVertex2f(loopx,   yscrollsum);
         //   glColor3f(r+.15 , g+.15 , bf+.15);
                glVertex2f(loopx,  yscrollsum+.035);
           //   glColor3f(r+.12 , g+.12 , bf+.12);
                  glVertex2f(loopx+.02, yscrollsum+.035);
             //    glColor3f(r+.24 , g+.24 , bf+.24);
                   glVertex2f(loopx+.02, yscrollsum);
            glEnd();

// 8 percent x = .0016 , 8 percent y = .0028



// end if not equal to space
}
else {
   // color=.1;
        r=0; g=0; bf=0;
    glBegin(GL_QUADS);
            glColor3f(r , g , bf);
            glVertex2f(loopx,   yscrollsum);
                glVertex2f(loopx,  yscrollsum+.035);
                  glVertex2f(loopx+.02, yscrollsum+.035);
                   glVertex2f(loopx+.02, yscrollsum);
            glEnd();


}

count++;

    } // end loopx
 } // end loopy

if (showtext==1) {
 // start loopx loopy #2
 count=startcount;
glColor3f(.4 , .4 , .4);
for (loopy=1.035; loopy>-1.1; loopy=loopy-.035) {
        yscrollsum=scrollboost+loopy;
for (loopx=-1; loopx<.98; loopx=loopx+.02) {
 //start text command
if (count>-1 && count<maxchar0) {

if (array1[count]=='a') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarraya[laloopi]==1) {
           glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum+laloopy-.0028);
                glVertex2f(loopx+laloopx,  yscrollsum+laloopy);
                  glVertex2f(loopx+laloopx+.0016, yscrollsum+laloopy);
                   glVertex2f(loopx+laloopx+.0016, yscrollsum+laloopy-.0028);
                   glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy-.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='b') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayb[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='c') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayc[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='d') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayd[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='e') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarraye[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='f') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayf[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a



if (array1[count]=='g') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayg[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a



if (array1[count]=='h') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayh[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='i') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayi[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='j') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayj[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a



if (array1[count]=='k') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayk[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='l') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayl[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='m') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarraym[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a

if (array1[count]=='n') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayn[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='o') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayo[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='p') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayp[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a



if (array1[count]=='q') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayq[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='r') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayr[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='s') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrays[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='t') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayt[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='u') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayu[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='v') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayv[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='w') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayw[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='x') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayx[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='y') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayy[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a


if (array1[count]=='z') {
            laloopx=0;
            laloopy=0;
        for (laloopi=0; laloopi<64; laloopi++) {
        if (letterarrayz[laloopi]==1) {
            glBegin(GL_QUADS);
            glVertex2f(loopx+laloopx,   yscrollsum-laloopy-.0028);
            glVertex2f(loopx+laloopx,  yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy);
            glVertex2f(loopx+laloopx+.0016, yscrollsum-laloopy-.0028);
            glEnd();
        } // end if laa equal 1
        laloopx=laloopx+.0016;
        if (laloopi%8==0) {laloopy=laloopy+.0028; laloopx=0;}

    } //end for laloopi
}  //  end if arrayc = a
//end text command

}
//end if (count>-1
count++;

    } // end loopx #2
 } // end loopy #2
        } // end if showtext ==1

// start draw drawlock button

    glBegin(GL_QUADS);
            glColor3f(.4 , .4 , .4);
            glVertex2f(.9,   .75);
                glVertex2f(.9,  1);
                  glVertex2f(1, 1);
                   glVertex2f(1, .75);
            glEnd();

if (lockscroll==1) {
if (drawthreebutton==0) {
               if (colorchoice=='1') { glColor3f(.75 ,.75 ,.75 ); }
                if (colorchoice=='2') { glColor3f(0 ,0 ,0 );}
                if (colorchoice=='3') {glColor3f(.5 ,0 ,0 ); }
                if (colorchoice=='4') { glColor3f(.5 ,.25 ,0 ); }
               if (colorchoice=='5') { glColor3f(.5 ,.5 ,0 ); }
                if (colorchoice=='6') { glColor3f(0 ,.5 ,0 ); }
                if (colorchoice=='7') { glColor3f(0 ,.5 ,.5 ); }
                if (colorchoice=='8') {glColor3f(0 ,0 ,.5 ); }
                if (colorchoice=='9') {glColor3f(.25 ,0 ,.5 );}
                if (colorchoice=='0') { glColor3f(.5 ,0 ,.5 ); }



                    glBegin(GL_QUADS);
            glVertex2f(.933,   .75);
                glVertex2f(.933,  .85);
                  glVertex2f(.966, .85);
                   glVertex2f(.966, .75);
            glEnd();
} // end if drawthree button =0
} // end if lockscroll =1
//end draw drawlock button

// start draw showtext button

    glBegin(GL_QUADS);
            glColor3f(0 , .2 , .2);
            glVertex2f(.8,   .75);
                glVertex2f(.8,  1);
                  glVertex2f(.9, 1);
                   glVertex2f(.9, .75);
            glEnd();

            if (showtext==1) {
                glBegin(GL_QUADS);
            glColor3f(0 , .35 , .35);
            glVertex2f(.833,   .75);
                glVertex2f(.833,  .85);
                  glVertex2f(.866, .85);
                   glVertex2f(.866, .75);
            glEnd();

            } // end if showtext ==1

//end draw showtext button




// start draw draw three button

    glBegin(GL_QUADS);
            glColor3f(.2 , 0 , .2);
            glVertex2f(.7,   .75);
                glVertex2f(.7,  1);
                  glVertex2f(.8, 1);
                   glVertex2f(.8, .75);
            glEnd();

if (drawthreebutton==1) {
            for (dtloop=0; dtloop<3; dtloop++) {


               if (dtarray[dtloop]=='1') { glColor3f(.75 ,.75 ,.75 ); }
                if (dtarray[dtloop]=='2') { glColor3f(0 ,0 ,0 );}
                if (dtarray[dtloop]=='3') {glColor3f(.5 ,0 ,0 ); }
                if (dtarray[dtloop]=='4') { glColor3f(.5 ,.25 ,0 ); }
               if (dtarray[dtloop]=='5') { glColor3f(.5 ,.5 ,0 ); }
                if (dtarray[dtloop]=='6') { glColor3f(.25 ,.5 ,0 ); }
                if (dtarray[dtloop]=='7') { glColor3f(0 ,.5 ,0 ); }
                if (dtarray[dtloop]=='8') {glColor3f(0 ,.5 ,.25 ); }
                if (dtarray[dtloop]=='9') {glColor3f(0 ,.5 ,.5 );}
                if (dtarray[dtloop]=='0') { glColor3f(0 ,.25 ,.5 ); }

                if (dtarray[dtloop]=='A') { glColor3f(0 ,0 ,.5 ); }
                if (dtarray[dtloop]=='B') {glColor3f(.25 ,0 ,.5 ); }
                if (dtarray[dtloop]=='C') {glColor3f(.5 ,0 ,.5 );}
                if (dtarray[dtloop]=='D') { glColor3f(.5 ,0 ,.25 ); }


                if (dtloop==0) {
                    glBegin(GL_QUADS);
            glVertex2f(.7,   .75);
                glVertex2f(.7,  .85);
                  glVertex2f(.733, .85);
                   glVertex2f(.733, .75);
            glEnd();
                } // end if dtloop==0


                            if (dtloop==1) {
                    glBegin(GL_QUADS);
            glVertex2f(.733,   .75);
                glVertex2f(.733,  .85);
                  glVertex2f(.766, .85);
                   glVertex2f(.766, .75);
            glEnd();
                } // end if dtloop==0


                                if (dtloop==2) {
                    glBegin(GL_QUADS);
            glVertex2f(.766,   .75);
                glVertex2f(.766,  .85);
                  glVertex2f(.8, .85);
                   glVertex2f(.8, .75);
            glEnd();
                } // end if dtloop==0

            } //end dtloop
} // end if drawthreebutton == 1
//end draw draw three button


// start tint color select button

    glBegin(GL_QUADS);
            glColor3f(.1 , .1 , .1);
            glVertex2f(.6,   .75);
                glVertex2f(.6,  1);
                  glVertex2f(.7, 1);
                   glVertex2f(.7, .75);
            glEnd();


if (tintmodeon==1) {
                glBegin(GL_QUADS);
            glColor3f(rtint , gtint , bftint);
            glVertex2f(.633,   .75);
                glVertex2f(.633,  .85);
                  glVertex2f(.666, .85);
                   glVertex2f(.666, .75);
            glEnd();
}


//end tint color select button

// start bubble sort button

    glBegin(GL_QUADS);
            glColor3f(.2 , 0, 0);
            glVertex2f(.5,   .75);
                glVertex2f(.5,  1);
                  glVertex2f(.6, 1);
                   glVertex2f(.6, .75);
            glEnd();


if (showbubbleon==1) {
                glBegin(GL_QUADS);
            glColor3f(rbubble , gbubble , bfbubble);
            glVertex2f(.533,   .75);
                glVertex2f(.533,  .85);
                  glVertex2f(.566, .85);
                   glVertex2f(.566, .75);
            glEnd();
}


//end bubble sort button




// start erase all button

    glBegin(GL_QUADS);
            glColor3f(.5 , .25 , .25);
            glVertex2f(-1,   .98);
                glVertex2f(-1,  1);
                  glVertex2f(-.928, 1);
                   glVertex2f(-.928, .98);
            glEnd();

//end erase all button

//start color pad quads


if (lockscroll==1) {
//a white
    glBegin(GL_QUADS);
            glColor3f(.75,.75,.75);
            glVertex2f(-.928,   .86);
                glVertex2f(-.928,  1);
                  glVertex2f(-.796, 1);
                   glVertex2f(-.796, .86);
            glEnd();

//b black
    glBegin(GL_QUADS);
            glColor3f(0 ,0 , 0);
            glVertex2f(-.796,.86   );
                glVertex2f(-.796,1  );
                  glVertex2f(-.664,1 );
                   glVertex2f(-.664,.86 );
            glEnd();

            // c red
    glBegin(GL_QUADS);
            glColor3f(.5,0 , 0);
            glVertex2f(-.664,.86   );
                glVertex2f(-.664, 1  );
                  glVertex2f(-.532, 1 );
                   glVertex2f(-.532, .86 );
            glEnd();

            // d orange
    glBegin(GL_QUADS);
            glColor3f(.5,.25 ,0 );
            glVertex2f(-.532,.86   );
                glVertex2f(-.532,1  );
                  glVertex2f(-.4,1 );
                   glVertex2f(-.4,.86 );
            glEnd();

            // e yellow
    glBegin(GL_QUADS);
            glColor3f(.5, .5, 0);
            glVertex2f(-.4,.86   );
                glVertex2f(-.4,1  );
                  glVertex2f(-.268,1 );
                   glVertex2f(-.268,.86 );
            glEnd();

            // f yellow green
    glBegin(GL_QUADS);
            glColor3f(.25,.5 ,0 );
            glVertex2f(-.268,.86   );
                glVertex2f(-.268,1  );
                  glVertex2f(-.136,1 );
                   glVertex2f(-.136,.86 );
            glEnd();
//701pm continue from here
            // g green
    glBegin(GL_QUADS);
            glColor3f(0 ,.5 ,0 );
            glVertex2f(-.136,.86   );
                glVertex2f(-.136,1  );
                  glVertex2f(-.004,1 );
                   glVertex2f(-.004,.86 );
            glEnd();

            // h green blue
    glBegin(GL_QUADS);
            glColor3f(0, .5, .25);
            glVertex2f(-.004,.86   );
                glVertex2f(-.004,1  );
                  glVertex2f(.128,1 );
                   glVertex2f(.128,.86 );
            glEnd();

            // i cyan
    glBegin(GL_QUADS);
            glColor3f(0, .5,.5 );
            glVertex2f(.128,.86   );
                glVertex2f(.128,1  );
                  glVertex2f(.26,1 );
                   glVertex2f(.26,.86 );
            glEnd();

            // j blue green
    glBegin(GL_QUADS);
            glColor3f(0, .25, .5 );
            glVertex2f(.26,.86   );
                glVertex2f(.26,1  );
                  glVertex2f(.392,1 );
                   glVertex2f(.392,.86 );
            glEnd();


            // j blue
    glBegin(GL_QUADS);
            glColor3f(0, 0, .5 );
            glVertex2f(.392,.86   );
                glVertex2f(.392,1  );
                  glVertex2f(.524,1 );
                   glVertex2f(.524,.86 );
            glEnd();


            // j blue purple
    glBegin(GL_QUADS);
            glColor3f(.25, 0, .5 );
            glVertex2f(.524,.86   );
                glVertex2f(.524,1  );
                  glVertex2f(.656,1 );
                   glVertex2f(.656,.86 );
            glEnd();


            // j purple
    glBegin(GL_QUADS);
            glColor3f(.5, 0, .5 );
            glVertex2f(.656,.86   );
                glVertex2f(.656,1  );
                  glVertex2f(.788,1 );
                   glVertex2f(.788,.86 );
            glEnd();


            // j redder purple
    glBegin(GL_QUADS);
            glColor3f(.5, 0, .25 );
            glVertex2f(.788,.86   );
                glVertex2f(.788,1  );
                  glVertex2f(.92,1 );
                   glVertex2f(.92,.86 );
            glEnd();
} // end if lock scroll equ 1
//end colorpad quads
//count=startcount;

            glPopMatrix();

            SwapBuffers(hDC);

            Sleep (1);
        }
    }

    /* shutdown OpenGL */
    DisableOpenGL(hwnd, hDC, hRC);

    /* destroy the window explicitly */
    DestroyWindow(hwnd);

    return msg.wParam;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        case WM_CLOSE:
            PostQuitMessage(0);
        break;

        case WM_DESTROY:
            return 0;

        case WM_KEYDOWN:
        {
            switch (wParam)
            {
                case VK_ESCAPE:
                    PostQuitMessage(0);
                break;
            }
        }
        break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}

void EnableOpenGL(HWND hwnd, HDC* hDC, HGLRC* hRC)
{
    PIXELFORMATDESCRIPTOR pfd;

    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC(hwnd);

    /* set the pixel format for the DC */
    ZeroMemory(&pfd, sizeof(pfd));

    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW |
                  PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;

    iFormat = ChoosePixelFormat(*hDC, &pfd);

    SetPixelFormat(*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext(*hDC);

    wglMakeCurrent(*hDC, *hRC);
}

void DisableOpenGL (HWND hwnd, HDC hDC, HGLRC hRC)
{
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(hRC);
    ReleaseDC(hwnd, hDC);
}

