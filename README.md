#### GhostJumble16

GhostJumble16 provides enhanced speed with an equivalent period and similar statistical test results as an ideal alternative to all variants of LCG that use 16 bits of state and up to 2¹⁵ parallel instances.

It has a period of 2¹⁶.

Seeding `x` with overlapping integers and changing the `+ 11111` integer to non-overlapping, odd integers between 0 and 65536 behaves as a jump function with up to 2¹⁵ parallel instances that each have a non-overlapping period of 2¹⁶. The first several results from each parallel instance should be skipped.

In non-parallel instances, `x` must be assigned a seed. Incrementing `x` by `(50560 - (x * 3072)) * (n / 128)` without changing the default `+ 11111` integer behaves as a jump function with up to 2⁹ parallel instances that each have a non-overlapping period of 2⁷. `n` is the count of steps forward as a multiple of 128.

##### C

`ghostJumble16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `GhostJumble16` generates and returns a pseudorandom `ushort` integer.

---

Additional GhostJumble variants are coming soon.
