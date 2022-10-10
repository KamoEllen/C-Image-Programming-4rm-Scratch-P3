//description , image processing , P3 , C++ 


#include<iostream>
#include<fstream>//input output files
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
ofstream image;
image.open("  imagefirst.ppm")
srand(time[0]); //srand = set to random
if((image_is_open)){
//break downimage details
image<<"P3"<<endl; //P1 , P2 , P3 search "
image<<"250 250"<<endl; //max height & length 
image<<"255"<<endl; //max color 
 for(int y = 0; y < 250; y++) {
 for(int x = 0; x < 250; x++) //x & y axis
 image << rand() % 250 << " " << x << " " << x <<endl;
}
