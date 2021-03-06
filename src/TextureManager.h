//
// Created by mine- on 29-08-21.
//

#ifndef RAYCASTINGENGINE_TEXTUREMANAGER_H
#define RAYCASTINGENGINE_TEXTUREMANAGER_H

#include "Color.h"

#define TEX_SIZE 64
#define MAX_TEXTURE 32

int loadTextures(char * file);
ColorRGB getPixel(int texture_number, int x, int y);

#endif //RAYCASTINGENGINE_TEXTUREMANAGER_H
