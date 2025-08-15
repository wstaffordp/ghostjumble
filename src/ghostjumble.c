#include "ghostjumble.h"

uint16_t ghostjumble16(struct ghostjumble16_s *s) {
  s->a += (s->a << 3) + 11111;
  return s->a;
}

uint8_t ghostjumble8(struct ghostjumble8_s *s) {
  s->a += 217;
  return s->a;
}
