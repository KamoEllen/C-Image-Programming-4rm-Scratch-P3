#include<iostream>
#include<fstream>//input output files
#include<ctime>
#include<cstdlib>


using namespace std;
int main()
{
ifstream image;
ofstream newimage;
//download image , save as imagefirst
image.open("imagefirst.ppm");
newimage.open(" newimage.ppm");

//copy header info onto ne image
string type = " ", width = " ", height = " ", RGB = " ";//RGB =red green blue
image >> type;
image >> width;
image >> height;
image >> RGB;

newimage << type   << endl;
newimage << width << " " << height << endl;
newimage <<  RGB  << endl;
cout << type << width << height << RGB << endl;

string red = " " ,  green = " " , blue = " ";
int r = 0, g = 0, b= 0;

while(!image.eof()){//eof = end of file, function
image >> red;
image >> green;
image >> blue;

string redstream(red);
string greenstream(green);
string bluestream(blue);;

red  >> r;
green >> g;
blue >> b;

if(b + 50 >= 255) {
b = 255;
} else {
b += 50;
}

newimage <<  r << " " << g << " " << b << endl;
}
 image.close();
 newimage.close();
 


return 0;