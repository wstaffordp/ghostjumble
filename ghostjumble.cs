using System;

public class GhostJumble16 {
  public ushort x;

  public ushort Next() {
    x += (ushort) ((x << 3) + 11111);
    return x;
  }
}
