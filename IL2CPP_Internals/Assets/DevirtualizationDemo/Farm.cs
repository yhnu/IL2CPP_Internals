public class Farm: MonoBehaviour {
   void Start () {
       Animal[] animals = new Animal[] {new Cow(), new Pig()};
       foreach (var animal in animals)
           Debug.LogFormat("Some animal says '{0}'", animal.Speak());

       var cow = new Cow();
       Debug.LogFormat("The cow says '{0}'", cow.Speak());
   }
}