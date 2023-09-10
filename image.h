#ifndef IMAGE_H
#define IMAGE_H

#include <stdint.h>
#include <stdbool.h>

// Declaración de la estructura de imagen PGM
typedef struct PGMImage {
  char pgmType[3];
  uint8_t** data;
  unsigned int width;
  unsigned int height;
  unsigned int maxValue;
} PGMImage;

// Declaración de funciones relacionadas con imágenes PGM
void openPGM(PGMImage* pgm, const char* filename);

#endif // IMAGE_H