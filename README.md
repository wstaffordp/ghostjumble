### GhostJumble

---

[![GhostJumble](https://repository-images.githubusercontent.com/1040449042/84e55193-8b2c-47bc-b89e-ea0e38fb8c98 "GhostJumble")](https://github.com/wstaffordp/ghostjumble#ghostjumble16)

---

GhostJumble is a PRNG that outperforms LCG as the fastest small-period, statistically-weak PRNG in the world. Anyone is free to use it without warranty.

---

#### GhostJumble16

`Next` generates and returns a pseudorandom `ushort` integer.

GhostJumble16 has a period of 2¹⁶ by seeding `x` with a `ushort` integer.

Assigning `x` with the value from `x + ((50560 - (x * 3072)) * (n / 128))` behaves as a jump function where `n` is the count of steps forward. `n` must be a multiple of 128.

In conclusion, GhostJumble16 provides enhanced parallelism, speed and statistical test results as an ideal alternative to 16-bit LCG.

---

#### GhostJumble8

`Next` generates and returns a pseudorandom `byte` integer.

GhostJumble8 has a period of 2⁸ by seeding `x` with a `byte` integer.

Incrementing `x` by `n * 217` behaves as a jump function where `n` is the count of steps forward. Decrementing `x` by `n * 217` behaves as a jump function where `n` is the count of steps in reverse.

In conclusion, GhostJumble8 provides enhanced parallelism, speed and statistical test results as an ideal alternative to 8-bit LCG.

---

Additional GhostJumble variants are coming soon.
