### GhostJumble

---

[![GhostJumble](https://repository-images.githubusercontent.com/1040449042/84e55193-8b2c-47bc-b89e-ea0e38fb8c98 "GhostJumble")](https://github.com/wstaffordp/ghostjumble#ghostjumble16)

---

GhostJumble is a PRNG that outperforms LCG as the fastest small-period, statistically-weak PRNG in the world. Anyone is free to use it without warranty.

---

#### GhostJumble16

GhostJumble16 provides enhanced parallelism, speed and statistical test results as an ideal alternative to 16-bit LCG.

It has a period of 2¹⁶.

`x` must be assigned a seed. Incrementing `x` by `(50560 - (x * 3072)) * (n / 128)` behaves as a jump function with up to 2⁹ parallel instances that each have a non-overlapping period of 2⁷. `n` is the count of steps forward as a multiple of 128.

##### C

`ghostjumble16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `GhostJumble16` generates and returns a pseudorandom `ushort` integer.

---

#### GhostJumble8

GhostJumble8 provides enhanced parallelism, speed and statistical test results as an ideal alternative to 8-bit LCG.

It has a period of 2⁸.

`x` must be assigned a seed. Incrementing `x` by `n * 217` behaves as a jump function where `n` is the count of steps forward. Decrementing `x` by `n * 217` behaves as a jump function where `n` is the count of steps in reverse.

##### C

`ghostjumble8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t`.

##### C#

`Next` from `GhostJumble8` generates and returns a pseudorandom `byte` integer.

---

Additional GhostJumble variants are coming soon.
