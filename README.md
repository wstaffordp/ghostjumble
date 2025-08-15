### GhostJumble

---

[![GhostJumble](https://repository-images.githubusercontent.com/1038316859/95bea0b5-3939-4a2e-81b0-e03015dc4ad0 "GhostJumble")](https://github.com/wstaffordp/ghostjumble/tree/master/src)

---

GhostJumble is a PRNG that outperforms LCG as the fastest small-period, statistically-weak PRNG in the world. Anyone is free to use it without warranty.

---

#### GhostJumble16

`ghostjumble16` is a PRNG function that generates a 16-bit, pseudorandom, unsigned integer from a 16-bit state integer.

It accepts the following argument.

1. `s` is the `struct ghostjumble16_s` pointer that contains the state. `a` must be seeded with any `uint16_t` value.

The return value data type is `uint16_t`.

It has a period of 2¹⁶ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2¹⁶ numbers and zeroland escapes immediately after 1 subsequent number generation.

Assigning `a` with the value from `((50560 - (a * 3072)) * (n / 128)) + a` behaves as a jump function where `n` is the count of steps forward. `n` must be a multiple of 128.

In conclusion, GhostJumble16 provides enhanced parallelism, speed and statistical test results as an ideal alternative to 16-bit LCG.

---

#### GhostJumble8

`ghostjumble8` is a PRNG function that generates an 8-bit, pseudorandom, unsigned integer from an 8-bit state integer.

It accepts the following argument.

1. `s` is the `struct ghostjumble8_s` pointer that contains the state. `a` must be seeded with any `uint8_t` value.

The return value data type is `uint8_t`.

It has a period of 2⁸ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁸ numbers and zeroland escapes immediately after 1 subsequent number generation.

Incrementing `a` by `217 * n` outside of `ghostjumble8` behaves as a jump function where `n` is the count of steps forward. Decrementing `a` by `217 * n` outside of `ghostjumble8` behaves as a jump function where `n` is the count of steps in reverse.

In conclusion, GhostJumble8 provides enhanced parallelism, speed and statistical test results as an ideal alternative to 8-bit LCG.

---

Additional GhostJumble variants are coming soon.
