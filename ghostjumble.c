#include <stdint.h>

struct ghostJumbleState16 {
  uint16_t x;
};

struct ghostJumbleState8 {
  uint8_t x;
};

uint16_t ghostJumble16(struct ghostJumbleState16 *s) {
  s->x += (s->x << 3) + 11111;
  return s->x;
}

uint8_t ghostJumble8(struct ghostJumbleState8 *s) {
  s->x += 217;
  return s->x;
}
