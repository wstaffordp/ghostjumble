#include <stdint.h>

struct ghostJumbleState16 {
  uint16_t x;
};

uint16_t ghostJumble16(struct ghostJumbleState16 *s) {
  s->x += (s->x << 3) + 11111;
  return s->x;
}
