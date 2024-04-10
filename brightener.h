#pragma once
#include <cstdint>
#include <malloc.h>

struct Image {
	int rows{};
	int columns{};
	//uint8_t pixels[1024 * 1024]; // max 1k x 1k image
	uint8_t* pixels = (uint8_t*)malloc(1024 * 1024);

	//std::unique_ptr<uint8_t> pixels(new uint8_t[1024*1024]);

};

class ImageBrightener {
private:
	Image m_inputImage;
public:
	ImageBrightener(Image& inputImage);
	int BrightenWholeImage();
	Image GetImage();
};
