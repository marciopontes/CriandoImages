#include <iostream>
#include <fstream> // abre e le imagens 

using namespace std;

inline int newimage2() {

// Create imagens
std::ofstream image;

image.open("./images/newimage2.ppm");

if (image.is_open()) {
	//headings
	image << "P3" << endl;
	image << "100 100" << endl;
	image << "255" << endl;

	//image body

	//image << "255 0 0" << endl;				//red
	//image << "0 255 0" << endl;				//green
	//image << "0 0 255" << endl;				//blue
	//image << "255 255 0" << endl;			//yellow
	//image << "255 255 255" << endl;			//white
	//image << "0 0 0" << endl;				//black


	for (int ImgH = 0; ImgH <= 100; ImgH++) {
		for (int ImgV = 0; ImgV <= 100; ImgV++) {
			image << rand() % 255 << " " << rand() % 255 << " " << rand() % 255 << endl;				//red
		}
	}

}


image.close();
return 0;
}