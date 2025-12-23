#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;


    string item1, item2;
    string array1[999999];

    int num1=1;
    int num2=0;
    int topnum=0;
    int repeatarray[999999];
    int num3=0;
    int length=0;
    int loop1=0 , loop2=0, fulltopnum = 0;
    //int blacklistarray[50000];
    char anykey = ' ';
    string array2[999999];
    string array3[999999];
    int numA3=0, outcount=0;
    int repeatarray2[999999];
     int rankarray[999999];
     int xrank=0, yrank=0;
     int loopcert=10000;
     float multiplier = 0 ;
     float product = 0 ;
     int producti1 = 0 , producti2=0 ;
     int n=0, k=0, x=0, y=0, b=0 , c = 0 , bsave = 0;
    bool ordered = false;
bool ordered2 = false, ordered3 = false;
int d=0;
        int arraymakerloop=0, charcount=0, loop3=0;
        float loop1f=0, pointsmath=0;
        char pointcode='0';
        char chararray[999999];
        char pointsarray[999999];
        char periodcommaarray[999999];
int main()
{

   // ofstream outfile;
  //  outfile.open("sample.txt");

   // outfile << "hello";

    //outfile.close();

    ifstream infile;
    infile.open("sample.txt");

    if (infile.fail()) {
        cerr << "Error Opening File" << endl;


    }


    for (num3=0; num3<999999; num3++) {
        repeatarray[num3]=1;

        repeatarray2[num3]=1;
        array1[num3]=" ";
        array2[num3]=" ";
        rankarray[num3]=0;
        periodcommaarray[num3]=' ';
    }

    do {

    infile >> array1[num1];




      for (num3=0; num3<array1[num1].length(); num3++) {


 if ( array1[num1][num3] == 46 ) {
  periodcommaarray[num1]='.';
   }

if ( array1[num1][num3] == 44 ) {
    periodcommaarray[num1]=',';
    }


        if ( array1[num1][num3] >47 && array1[num1][num3] < 58 )
        array1[num1][num3]=' ';

         if ( array1[num1][num3] == 44 || array1[num1][num3] == 46 )
        array1[num1][num3]=' ';

         if ( array1[num1][num3] == 40 || array1[num1][num3] == 41 )
        array1[num1][num3]=' ';


         if ( array1[num1][num3] == 33 || array1[num1][num3] == 34 || array1[num1][num3] == 63 )
        array1[num1][num3]=' ';


    for (d=0; d<=array1[num1].length(); d++) {
            if (array1[num1][d]>64 && array1[num1][d]<91)
                {
                        array1[num1][d]=array1[num1][d]+32;
                }
    }
    }

    array3[num1]=array1[num1];
    num1++;
        } while (!infile.eof());
    cout<<"total = " << num1 <<endl;
    topnum=num1;
    numA3=num1;
    fulltopnum = num1;
    cout<<"\n\n\n";




  //  cout<<"Item "<< num1 << ":     " << array1[num1] << endl;
for (num1=0; num1<topnum; num1++) {
      if (num1%5000==0) { cout<<"\n"<<num1<<" of "<<topnum<<"\n"; }

      //start early sort lines 110-510
      if (num1==25000) {


    do {
            for (n=0; n <= topnum; n++) {
if (n==0) {ordered2=true;}
                  //  cout<<"\nworking on n = "<<n<<" k = "<< k << "   item1 = " << item1 << "   item 2 = " << item2 << endl;
        if (repeatarray2[n] < repeatarray2[n + 1] && repeatarray2[n]!=' ' && repeatarray2[n + 1]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 1];
            y = repeatarray2[n];

            item1=array2[n+1];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+1] = y;
            array2[n] = item1;
            array2[n+1] = item2;

            xrank = rankarray [ n + 1];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+1] = yrank;

		ordered2=false; }

		// ADD sixteen jumps to see if it really works

	// #2
		   if (repeatarray2[n] < repeatarray2[n + 2] && repeatarray2[n]!=' ' && repeatarray2[n + 2]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 2];
            y = repeatarray2[n];

            item1=array2[n+2];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+2] = y;
            array2[n] = item1;
            array2[n+2] = item2;

                     xrank = rankarray [ n + 2];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+2] = yrank;

		ordered2=false; }

		// #3
		   if (repeatarray2[n] < repeatarray2[n + 3] && repeatarray2[n]!=' ' && repeatarray2[n + 3]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 3];
            y = repeatarray2[n];

            item1=array2[n+3];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+3] = y;
            array2[n] = item1;
            array2[n+3] = item2;

                     xrank = rankarray [ n + 3];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+3] = yrank;

		ordered2=false; }

		// #4
		   if (repeatarray2[n] < repeatarray2[n + 4] && repeatarray2[n]!=' ' && repeatarray2[n + 4]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 4];
            y = repeatarray2[n];

            item1=array2[n+4];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+4] = y;
            array2[n] = item1;
            array2[n+4] = item2;

            xrank = rankarray [ n + 4];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+4] = yrank;

		ordered2=false; }
		// #5
		   if (repeatarray2[n] < repeatarray2[n + 5] && repeatarray2[n]!=' ' && repeatarray2[n + 5]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 5];
            y = repeatarray2[n];

            item1=array2[n+5];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+5] = y;
            array2[n] = item1;
            array2[n+5] = item2;


            xrank = rankarray [ n + 5];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+5] = yrank;

		ordered2=false; }
		// #6
		   if (repeatarray2[n] < repeatarray2[n + 6] && repeatarray2[n]!=' ' && repeatarray2[n + 6]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 6];
            y = repeatarray2[n];

            item1=array2[n+6];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+6] = y;
            array2[n] = item1;
            array2[n+6] = item2;


            xrank = rankarray [ n + 6];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+6] = yrank;

		ordered2=false; }
		//#7
		   if (repeatarray2[n] < repeatarray2[n + 7] && repeatarray2[n]!=' ' && repeatarray2[n + 7]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 7];
            y = repeatarray2[n];

            item1=array2[n+7];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+7] = y;
            array2[n] = item1;
            array2[n+7] = item2;


            xrank = rankarray [ n + 7];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+7] = yrank;

		ordered2=false; }
		//#8
		   if (repeatarray2[n] < repeatarray2[n + 8] && repeatarray2[n]!=' ' && repeatarray2[n + 8]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 8];
            y = repeatarray2[n];

            item1=array2[n+8];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+8] = y;
            array2[n] = item1;
            array2[n+8] = item2;


            xrank = rankarray [ n + 8];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+8] = yrank;

		ordered2=false; }
		//#9
		   if (repeatarray2[n] < repeatarray2[n + 9] && repeatarray2[n]!=' ' && repeatarray2[n + 9]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 9];
            y = repeatarray2[n];

            item1=array2[n+9];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+9] = y;
            array2[n] = item1;
            array2[n+9] = item2;


            xrank = rankarray [ n + 9];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+9] = yrank;

		ordered2=false; }
		// #10
		   if (repeatarray2[n] < repeatarray2[n + 10] && repeatarray2[n]!=' ' && repeatarray2[n + 10]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 10];
            y = repeatarray2[n];

            item1=array2[n+10];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+10] = y;
            array2[n] = item1;
            array2[n+10] = item2;


            xrank = rankarray [ n + 10];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+10] = yrank;

		ordered2=false; }
		//#11
		   if (repeatarray2[n] < repeatarray2[n + 11] && repeatarray2[n]!=' ' && repeatarray2[n + 11]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 11];
            y = repeatarray2[n];

            item1=array2[n+11];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+11] = y;
            array2[n] = item1;
            array2[n+11] = item2;


            xrank = rankarray [ n + 11];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+11] = yrank;

		ordered2=false; }
		// #12
		   if (repeatarray2[n] < repeatarray2[n + 12] && repeatarray2[n]!=' ' && repeatarray2[n + 12]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 12];
            y = repeatarray2[n];

            item1=array2[n+12];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+12] = y;
            array2[n] = item1;
            array2[n+12] = item2;


            xrank = rankarray [ n + 12];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+12] = yrank;

		ordered2=false; }
		//#13
		   if (repeatarray2[n] < repeatarray2[n + 13] && repeatarray2[n]!=' ' && repeatarray2[n + 13]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 13];
            y = repeatarray2[n];

            item1=array2[n+13];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+13] = y;
            array2[n] = item1;
            array2[n+13] = item2;


            xrank = rankarray [ n + 13];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+13] = yrank;

		ordered2=false; }
		// #14
		   if (repeatarray2[n] < repeatarray2[n + 14] && repeatarray2[n]!=' ' && repeatarray2[n + 14]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 14];
            y = repeatarray2[n];

            item1=array2[n+14];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+14] = y;
            array2[n] = item1;
            array2[n+14] = item2;


            xrank = rankarray [ n + 14];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+14] = yrank;

		ordered2=false; }
		// #15
		   if (repeatarray2[n] < repeatarray2[n + 15] && repeatarray2[n]!=' ' && repeatarray2[n + 15]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 15];
            y = repeatarray2[n];

            item1=array2[n+15];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+15] = y;
            array2[n] = item1;
            array2[n+15] = item2;


            xrank = rankarray [ n + 15];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+15] = yrank;

		ordered2=false; }
		//#16
		   if (repeatarray2[n] < repeatarray2[n + 16] && repeatarray2[n]!=' ' && repeatarray2[n + 16]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 16];
            y = repeatarray2[n];

            item1=array2[n+16];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+16] = y;
            array2[n] = item1;
            array2[n+16] = item2;


            xrank = rankarray [ n + 16];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+16] = yrank;

		ordered2=false; }
		//#17
		   if (repeatarray2[n] < repeatarray2[n + 17] && repeatarray2[n]!=' ' && repeatarray2[n + 17]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 17];
            y = repeatarray2[n];

            item1=array2[n+17];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+17] = y;
            array2[n] = item1;
            array2[n+17] = item2;


            xrank = rankarray [ n + 17];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+17] = yrank;

		ordered2=false; }





		//cout<<"\nhya\n";
		//if (n==topnum) break;


        }  if (ordered2==true) { break; }
           //took out k, hoping for ordered's angle run
            //rank sort
    } while (ordered==false);



    cout<<"\n\nEarly Sort Complete\n\n";
      } //end if num1=10,000

      //end early sort lines 110-510
      ordered=false; ordered2=false;
for (num2=0; num2<num1; num2++) {
        if (array1[num1] == array1[num2])
        {
            repeatarray[num2]++;
            //boost the early bird, num1 is the highest in the second loop


            array1[num1]="[cleared]";
            repeatarray[num1]=0;
		break;
        }


} //end num2 for loop
}







    //print all strings
num3=0;
   for (num1=0; num1<=topnum; num1++) {
        if ( array1[num1]!="[cleared]" && array1[num1][0]!=' ') {//repeatarray[num1]>50 &&
     //   cout<< array1[num1] << " : \t"<<repeatarray[num1] <<endl;
        array2[num3] = array1[num1];
        repeatarray2[num3] = repeatarray[num1];
        rankarray[num3]=num3;
        num3++; }
    }
topnum=num3;
    /*add bubble sort */
cout<<"\nnow starting bubblesort\n";

    do {
            for (n=0; n <= topnum; n++) {
if (n==0) {ordered2=true;}
                  //  cout<<"\nworking on n = "<<n<<" k = "<< k << "   item1 = " << item1 << "   item 2 = " << item2 << endl;
        if (repeatarray2[n] < repeatarray2[n + 1] && repeatarray2[n]!=' ' && repeatarray2[n + 1]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 1];
            y = repeatarray2[n];

            item1=array2[n+1];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+1] = y;
            array2[n] = item1;
            array2[n+1] = item2;

            xrank = rankarray [ n + 1];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+1] = yrank;

		ordered2=false; }

		// ADD sixteen jumps to see if it really works

	// #2
		   if (repeatarray2[n] < repeatarray2[n + 2] && repeatarray2[n]!=' ' && repeatarray2[n + 2]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 2];
            y = repeatarray2[n];

            item1=array2[n+2];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+2] = y;
            array2[n] = item1;
            array2[n+2] = item2;

                     xrank = rankarray [ n + 2];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+2] = yrank;

		ordered2=false; }

		// #3
		   if (repeatarray2[n] < repeatarray2[n + 3] && repeatarray2[n]!=' ' && repeatarray2[n + 3]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 3];
            y = repeatarray2[n];

            item1=array2[n+3];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+3] = y;
            array2[n] = item1;
            array2[n+3] = item2;

                     xrank = rankarray [ n + 3];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+3] = yrank;

		ordered2=false; }

		// #4
		   if (repeatarray2[n] < repeatarray2[n + 4] && repeatarray2[n]!=' ' && repeatarray2[n + 4]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 4];
            y = repeatarray2[n];

            item1=array2[n+4];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+4] = y;
            array2[n] = item1;
            array2[n+4] = item2;

            xrank = rankarray [ n + 4];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+4] = yrank;

		ordered2=false; }
		// #5
		   if (repeatarray2[n] < repeatarray2[n + 5] && repeatarray2[n]!=' ' && repeatarray2[n + 5]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 5];
            y = repeatarray2[n];

            item1=array2[n+5];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+5] = y;
            array2[n] = item1;
            array2[n+5] = item2;


            xrank = rankarray [ n + 5];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+5] = yrank;

		ordered2=false; }
		// #6
		   if (repeatarray2[n] < repeatarray2[n + 6] && repeatarray2[n]!=' ' && repeatarray2[n + 6]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 6];
            y = repeatarray2[n];

            item1=array2[n+6];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+6] = y;
            array2[n] = item1;
            array2[n+6] = item2;


            xrank = rankarray [ n + 6];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+6] = yrank;

		ordered2=false; }
		//#7
		   if (repeatarray2[n] < repeatarray2[n + 7] && repeatarray2[n]!=' ' && repeatarray2[n + 7]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 7];
            y = repeatarray2[n];

            item1=array2[n+7];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+7] = y;
            array2[n] = item1;
            array2[n+7] = item2;


            xrank = rankarray [ n + 7];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+7] = yrank;

		ordered2=false; }
		//#8
		   if (repeatarray2[n] < repeatarray2[n + 8] && repeatarray2[n]!=' ' && repeatarray2[n + 8]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 8];
            y = repeatarray2[n];

            item1=array2[n+8];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+8] = y;
            array2[n] = item1;
            array2[n+8] = item2;


            xrank = rankarray [ n + 8];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+8] = yrank;

		ordered2=false; }
		//#9
		   if (repeatarray2[n] < repeatarray2[n + 9] && repeatarray2[n]!=' ' && repeatarray2[n + 9]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 9];
            y = repeatarray2[n];

            item1=array2[n+9];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+9] = y;
            array2[n] = item1;
            array2[n+9] = item2;


            xrank = rankarray [ n + 9];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+9] = yrank;

		ordered2=false; }
		// #10
		   if (repeatarray2[n] < repeatarray2[n + 10] && repeatarray2[n]!=' ' && repeatarray2[n + 10]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 10];
            y = repeatarray2[n];

            item1=array2[n+10];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+10] = y;
            array2[n] = item1;
            array2[n+10] = item2;


            xrank = rankarray [ n + 10];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+10] = yrank;

		ordered2=false; }
		//#11
		   if (repeatarray2[n] < repeatarray2[n + 11] && repeatarray2[n]!=' ' && repeatarray2[n + 11]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 11];
            y = repeatarray2[n];

            item1=array2[n+11];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+11] = y;
            array2[n] = item1;
            array2[n+11] = item2;


            xrank = rankarray [ n + 11];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+11] = yrank;

		ordered2=false; }
		// #12
		   if (repeatarray2[n] < repeatarray2[n + 12] && repeatarray2[n]!=' ' && repeatarray2[n + 12]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 12];
            y = repeatarray2[n];

            item1=array2[n+12];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+12] = y;
            array2[n] = item1;
            array2[n+12] = item2;


            xrank = rankarray [ n + 12];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+12] = yrank;

		ordered2=false; }
		//#13
		   if (repeatarray2[n] < repeatarray2[n + 13] && repeatarray2[n]!=' ' && repeatarray2[n + 13]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 13];
            y = repeatarray2[n];

            item1=array2[n+13];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+13] = y;
            array2[n] = item1;
            array2[n+13] = item2;


            xrank = rankarray [ n + 13];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+13] = yrank;

		ordered2=false; }
		// #14
		   if (repeatarray2[n] < repeatarray2[n + 14] && repeatarray2[n]!=' ' && repeatarray2[n + 14]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 14];
            y = repeatarray2[n];

            item1=array2[n+14];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+14] = y;
            array2[n] = item1;
            array2[n+14] = item2;


            xrank = rankarray [ n + 14];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+14] = yrank;

		ordered2=false; }
		// #15
		   if (repeatarray2[n] < repeatarray2[n + 15] && repeatarray2[n]!=' ' && repeatarray2[n + 15]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 15];
            y = repeatarray2[n];

            item1=array2[n+15];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+15] = y;
            array2[n] = item1;
            array2[n+15] = item2;


            xrank = rankarray [ n + 15];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+15] = yrank;

		ordered2=false; }
		//#16
		   if (repeatarray2[n] < repeatarray2[n + 16] && repeatarray2[n]!=' ' && repeatarray2[n + 16]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 16];
            y = repeatarray2[n];

            item1=array2[n+16];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+16] = y;
            array2[n] = item1;
            array2[n+16] = item2;


            xrank = rankarray [ n + 16];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+16] = yrank;

		ordered2=false; }
		//#17
		   if (repeatarray2[n] < repeatarray2[n + 17] && repeatarray2[n]!=' ' && repeatarray2[n + 17]!=' ') {
       //   cout<<"n = "<<n<<"    "<<array2[n] << "( "<<repeatarray2[n]<<" )    vs   " << array2[n+1] <<"("<<repeatarray2[n+1]<<")"<<endl;

            x = repeatarray2 [ n + 17];
            y = repeatarray2[n];

            item1=array2[n+17];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+17] = y;
            array2[n] = item1;
            array2[n+17] = item2;


            xrank = rankarray [ n + 17];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+17] = yrank;

		ordered2=false; }





		//cout<<"\nhya\n";
		//if (n==topnum) break;


        }  if (ordered2==true) { break; }
           //took out k, hoping for ordered's angle run
            //rank sort
    } while (ordered==false);

    do {
            for (n=0; n <= topnum; n++) {
            ordered3=true;

            //#1
            if (repeatarray2[n]==repeatarray2[n+1] && rankarray[n]>rankarray[n+1]  && array2[n+1]!=" ") {
                //swap

            x = repeatarray2 [ n + 1];
            y = repeatarray2[n];

            item1=array2[n+1];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+1] = y;
            array2[n] = item1;
            array2[n+1] = item2;


            xrank = rankarray [ n + 1];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+1] = yrank;
            ordered3=false;
            }

            //#2

            if (repeatarray2[n]==repeatarray2[n+2] && rankarray[n]>rankarray[n+2]  && array2[n+2]!=" ") {
                //swap

            x = repeatarray2 [ n + 2];
            y = repeatarray2[n];

            item1=array2[n+2];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+2] = y;
            array2[n] = item1;
            array2[n+2] = item2;


            xrank = rankarray [ n + 2];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+2] = yrank;
            ordered3=false;
            }

            //#3

            if (repeatarray2[n]==repeatarray2[n+3] && rankarray[n]>rankarray[n+3]  && array2[n+3]!=" ") {
                //swap

            x = repeatarray2 [ n + 3];
            y = repeatarray2[n];

            item1=array2[n+3];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+3] = y;
            array2[n] = item1;
            array2[n+3] = item2;


            xrank = rankarray [ n + 3];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+3] = yrank;
            ordered3=false;
            }

            //#4

            if (repeatarray2[n]==repeatarray2[n+4] && rankarray[n]>rankarray[n+4]  && array2[n+4]!=" ") {
                //swap

            x = repeatarray2 [ n + 4];
            y = repeatarray2[n];

            item1=array2[n+4];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+4] = y;
            array2[n] = item1;
            array2[n+4] = item2;


            xrank = rankarray [ n + 4];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+4] = yrank;
            ordered3=false;
            }

            //#5

            if (repeatarray2[n]==repeatarray2[n+5] && rankarray[n]>rankarray[n+5]  && array2[n+5]!=" ") {
                //swap

            x = repeatarray2 [ n + 5];
            y = repeatarray2[n];

            item1=array2[n+5];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+5] = y;
            array2[n] = item1;
            array2[n+5] = item2;


            xrank = rankarray [ n + 5];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+5] = yrank;
            ordered3=false;
            }

            //#6

            if (repeatarray2[n]==repeatarray2[n+6] && rankarray[n]>rankarray[n+6]  && array2[n+6]!=" ") {
                //swap

            x = repeatarray2 [ n + 6];
            y = repeatarray2[n];

            item1=array2[n+6];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+6] = y;
            array2[n] = item1;
            array2[n+6] = item2;


            xrank = rankarray [ n + 6];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+6] = yrank;
            ordered3=false;
            }

            //#7

            if (repeatarray2[n]==repeatarray2[n+7] && rankarray[n]>rankarray[n+7]  && array2[n+7]!=" ") {
                //swap

            x = repeatarray2 [ n + 7];
            y = repeatarray2[n];

            item1=array2[n+7];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+7] = y;
            array2[n] = item1;
            array2[n+7] = item2;


            xrank = rankarray [ n + 7];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+7] = yrank;
            ordered3=false;
            }

            //#8

            if (repeatarray2[n]==repeatarray2[n+8] && rankarray[n]>rankarray[n+8]  && array2[n+8]!=" ") {
                //swap

            x = repeatarray2 [ n + 8];
            y = repeatarray2[n];

            item1=array2[n+8];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+8] = y;
            array2[n] = item1;
            array2[n+8] = item2;


            xrank = rankarray [ n + 8];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+8] = yrank;
            ordered3=false;
            }

            //#9


            if (repeatarray2[n]==repeatarray2[n+9] && rankarray[n]>rankarray[n+9] && array2[n+9]!=" ") {
                //swap

            x = repeatarray2 [ n + 9];
            y = repeatarray2[n];

            item1=array2[n+9];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+9] = y;
            array2[n] = item1;
            array2[n+9] = item2;


            xrank = rankarray [ n + 9];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+9] = yrank;
            ordered3=false;
            }

            //#10


            if (repeatarray2[n]==repeatarray2[n+10] && rankarray[n]>rankarray[n+10]  && array2[n+10]!=" ") {
                //swap

            x = repeatarray2 [ n + 10];
            y = repeatarray2[n];

            item1=array2[n+10];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+10] = y;
            array2[n] = item1;
            array2[n+10] = item2;


            xrank = rankarray [ n + 10];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+10] = yrank;
            ordered3=false;
            }

            //#11


            if (repeatarray2[n]==repeatarray2[n+11] && rankarray[n]>rankarray[n+11]  && array2[n+11]!=" ") {
                //swap

            x = repeatarray2 [ n + 11];
            y = repeatarray2[n];

            item1=array2[n+11];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+11] = y;
            array2[n] = item1;
            array2[n+11] = item2;


            xrank = rankarray [ n + 11];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+11] = yrank;
            ordered3=false;
            }

            //#12


            if (repeatarray2[n]==repeatarray2[n+12] && rankarray[n]>rankarray[n+12] && array2[n+12]!=" ") {
                //swap

            x = repeatarray2 [ n + 12];
            y = repeatarray2[n];

            item1=array2[n+12];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+12] = y;
            array2[n] = item1;
            array2[n+12] = item2;


            xrank = rankarray [ n + 12];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+12] = yrank;
            ordered3=false;
            }

            //#13

            if (repeatarray2[n]==repeatarray2[n+13] && rankarray[n]>rankarray[n+13]  && array2[n+13]!=" ") {
                //swap

            x = repeatarray2 [ n + 13];
            y = repeatarray2[n];

            item1=array2[n+13];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+13] = y;
            array2[n] = item1;
            array2[n+13] = item2;


            xrank = rankarray [ n + 13];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+13] = yrank;
            ordered3=false;
            }

            //#14

            if (repeatarray2[n]==repeatarray2[n+14] && rankarray[n]>rankarray[n+14]  && array2[n+14]!=" " ) {
                //swap

            x = repeatarray2 [ n + 14];
            y = repeatarray2[n];

            item1=array2[n+14];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+14] = y;
            array2[n] = item1;
            array2[n+14] = item2;


            xrank = rankarray [ n + 14];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+14] = yrank;
            ordered3=false;
            }

            //#15


            if (repeatarray2[n]==repeatarray2[n+15] && rankarray[n]>rankarray[n+15]  && array2[n+15]!=" ") {
                //swap

            x = repeatarray2 [ n + 15];
            y = repeatarray2[n];

            item1=array2[n+15];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+15] = y;
            array2[n] = item1;
            array2[n+15] = item2;


            xrank = rankarray [ n + 15];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+15] = yrank;
            ordered3=false;
            }

            //#16


            if (repeatarray2[n]==repeatarray2[n+16] && rankarray[n]>rankarray[n+16] && array2[n+16]!=" ") {
                //swap

            x = repeatarray2 [ n + 16];
            y = repeatarray2[n];

            item1=array2[n+16];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+16] = y;
            array2[n] = item1;
            array2[n+16] = item2;


            xrank = rankarray [ n + 16];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+16] = yrank;
            ordered3=false;
            }

            //#17

            if (repeatarray2[n]==repeatarray2[n+17] && rankarray[n]>rankarray[n+17] && array2[n+17]!=" ") {
                //swap

            x = repeatarray2 [ n + 17];
            y = repeatarray2[n];

            item1=array2[n+17];
            item2=array2[n];

            repeatarray2[n]= x;
            repeatarray2 [n+17] = y;
            array2[n] = item1;
            array2[n+17] = item2;


            xrank = rankarray [ n + 17];
            yrank = rankarray [n];
            rankarray[n] = xrank;
            rankarray[n+17] = yrank;
            ordered3=false;
            }
    loopcert--;
    if (loopcert%500==0) { cout<<"loopcert = "<<loopcert<<"\n"; }
    } if (ordered3==true && loopcert<1) { break; } //end for loop and offer break
} while (ordered==false);
int a=0;
 ofstream myfile;
    myfile.open ("double arrays.txt");



   for (a=1; a<=fulltopnum; a++) { // play true data




    //if (repeatarray2[0]>=125) { multiplier =   }

    //if (repeatarray2[0]>=125) { multiplier =   }


    for (loop1=0; loop1<topnum; loop1++) {

        if (array3[a]==array2[loop1] ) { // find a match in the data

                loop1f=loop1;
                pointsmath=1-(loop1f/topnum);

                if (pointsmath>.9) {pointcode='9';}
                 if (pointsmath<.9 && pointsmath>.8) {pointcode='8';}
                  if (pointsmath<.8 && pointsmath>.7) {pointcode='7';}
                   if (pointsmath<.7 && pointsmath>.6) {pointcode='6';}
                    if (pointsmath<.6 && pointsmath>.5) {pointcode='5';}
                     if (pointsmath<.5 && pointsmath>.4) {pointcode='4';}
                      if (pointsmath<.4 && pointsmath>.3) {pointcode='3';}
                       if (pointsmath<.3 && pointsmath>.2) {pointcode='2';}
                        if (pointsmath<.2 && pointsmath>0) {pointcode='1';}
    break;
    }
} // end loop 1


//end added code AND post finished data
//myfile<<".style"<<a<< "{background-color: #"<< std::hex<< r<<g<<b<<std::dec<<";}\n";

for (arraymakerloop=0; arraymakerloop<array3[a].length(); arraymakerloop++) {

    if (array3[a][arraymakerloop]>96 && array3[a][arraymakerloop]<123) {
    chararray[charcount]=array3[a][arraymakerloop];
        pointsarray[charcount]=pointcode;
    charcount++;
    }



} // end arraymakerloop

    if (periodcommaarray[a]=='.') {
            pointsarray[charcount]=0;
        chararray[charcount]='.';
    charcount++;
}
if (periodcommaarray[a]==',') {
        pointsarray[charcount]=0;
            chararray[charcount]=',';
    charcount++;

}


    chararray[charcount]=' ';
    pointsarray[charcount]=0;
    charcount++;


   } //end loop a 1




    myfile<<"char array1"<<"["<<charcount<<"] = {";

    for (loop3=0; loop3<charcount; loop3++) {
        myfile <<"'"<<chararray[loop3] <<"', ";
    }

    myfile<<"};\n\n";

        myfile<<"char pointsarray"<<"["<<charcount<<"] = {";

    for (loop3=0; loop3<charcount; loop3++) {
         myfile <<"'"<<pointsarray[loop3] <<"', ";
    }

    myfile<<"};\n\n";



        myfile<<"int maxchar0"<<"="<<charcount<<";";


    myfile<<"\n\n";



        myfile<<"char array2["<<charcount<<"];";


    myfile<<"\n\n";



        myfile<<"char array3["<<charcount<<"];";

myfile.close();
//end array maker code the new new guy was it







    for (a=0; a<17; a++) {

        printf("\t%i\t%x\n",a, a);


    }



    cout << "Hello world!" << endl;
    return 0;
}

