package TAD;

public class utilizarTV {
    public static void main(String args[]){
        televisao t1 = new televisao();
        televisao t2 = new televisao();

        t1.defineMarca("Samsung");
        t1.defineLocal("Sala");
        t1.ligar();
        t1.defineCanal(2);
        t1.aumentarVolume();
        t1.aumentarVolume();
        t1.defineCanal(1);
        t1.aumentarVolume();
        t1.abaixarVolume();
        t1.desligar();
    }
}
