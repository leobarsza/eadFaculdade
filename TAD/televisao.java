package TAD;

public class televisao {
    String marca;
    boolean ligado;
    int volume;
    int canal;
    String local;

    public televisao(){
        ligado = false;
    }

    public void ligar(){
        ligado = true;
        System.out.println("TV " + marca + " Ligada - Local: " + local);
    }

    public void desligar(){
        System.out.println("TV " + marca + " Desligada - Local: " + local);
        ligado = false;
    }

    public void defineMarca(String nomeMarca){
        marca = nomeMarca;
        System.out.println("TV " + marca);
    }

    public void defineLocal(String plocal){
        local = plocal;
        System.out.println("Local: " + local);
    }
    
    public void aumentarVolume(){
        if(ligado){
            volume++;
            System.out.println("Volume em: " + volume);
        } else {
            System.out.println("TV desligada");
        }
    }
    
    public void abaixarVolume(){
        if(ligado & volume > 0){
            volume--;
            System.out.println("Volume em: " + volume);
        } else if (ligado & volume <= 0){
            System.out.println("Volume em: " + volume);
        } else {
            System.out.println("TV desligada");
        }
    }

    public void defineCanal(int pcanal){
        if(ligado){
            canal = pcanal;
            System.out.println("Canal definido: " + canal);
        } else {
            System.out.println("TV desligada");
        }
    }


}
