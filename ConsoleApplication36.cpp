#include <iostream>
#include "ImageProcessor.h"
#include "JPEG.h"
#include "PNG.h"
using namespace std;

int main()
{
	ImageProcessor* jpeg = new JPEG();

	jpeg->load();
	jpeg->save();

	ImageProcessor* png = new PNG();

	png->load();
	png->save();
}