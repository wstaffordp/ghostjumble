#include <stdint.h>

struct ghostjumble16_s {
  uint16_t x;
};

struct ghostjumble8_s {
  uint8_t x;
};

uint16_t ghostjumble16(struct ghostjumble16_s *s) {
  s->x += (s->x << 3) + 11111;
  return s->x;
}

uint8_t ghostjumble8(struct ghostjumble8_s *s) {
  s->x += 217;
  return s->x;
}
