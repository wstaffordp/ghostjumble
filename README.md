#### GhostJumble16

GhostJumble16 provides enhanced parallelism, speed and statistical test results as an ideal alternative to 16-bit LCG.

It has a period of 2¹⁶.

`x` must be assigned a seed. Incrementing `x` by `(50560 - (x * 3072)) * (n / 128)` behaves as a jump function with up to 2⁹ parallel instances that each have a non-overlapping period of 2⁷. `n` is the count of steps forward as a multiple of 128.

##### C

`ghostJumble16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `GhostJumble16` generates and returns a pseudorandom `ushort` integer.

---

Additional GhostJumble variants are coming soon.
