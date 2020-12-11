public abstract class Animal {
  public abstract string Speak();
}

public class Cow : Animal {
   public override string Speak() {
       return "Moo";
   }
}

public class Pig : Animal {
    public override string Speak() {
        return "Oink";
   }
}