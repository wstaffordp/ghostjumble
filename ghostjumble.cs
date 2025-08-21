using System;

public class GhostJumble16 {
  public ushort x;

  public ushort Next() {
    x += (ushort) ((x << 3) + 11111);
    return x;
  }
}

public class GhostJumble8 {
  public byte x;

  public byte Next() {
    x += 217;
    return x;
  }
}
