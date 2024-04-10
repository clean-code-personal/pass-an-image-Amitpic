#include <iostream>
#include "brightener.h"

int main() {
    Image image;
    image.rows = 512;
    image.columns = 512;
	std::cout << "Brightening a 512 x 512 image\n";
    ImageBrightener brightener(image);
    int attenuatedCount = brightener.BrightenWholeImage();
    if (image.pixels != NULL)
    {
        image.pixels[0] = '\0';
        // code...
        free(image.pixels);
    }
    std::cout << "Attenuated " << attenuatedCount << " pixels\n";
}
