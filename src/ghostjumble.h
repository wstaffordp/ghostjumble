#ifndef GHOSTJUMBLE_H
#define GHOSTJUMBLE_H

#include <stdint.h>

struct ghostjumble16_s {
  uint16_t a;
};

struct ghostjumble8_s {
  uint8_t a;
};

uint16_t ghostjumble16(struct ghostjumble16_s *s);

uint8_t ghostjumble8(struct ghostjumble8_s *s);

#endif
