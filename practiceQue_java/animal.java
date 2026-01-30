class Cat{
  public String color;
  public int leg;
  public String voice;

}

class Sparrow{
  public String color;
  public int leg;
  public String voice;

}


public class animal {
    public static void display(Cat cat){

        System.out.println("cat detailes : ");
        System.out.println("color : "+cat.color);
        System.out.println("leg : "+cat.leg);
        System.out.println("voice : "+cat.voice);
    }

    public static void display(Sparrow sparrow){

        System.out.println("sparraow detailes : ");
        System.out.println("color : "+sparrow.color);
        System.out.println("leg : "+sparrow.leg);
        System.out.println("voice : "+sparrow.voice);
    }



    public static void main(String[] args) {
        Cat cat = new Cat();
        cat.color = "black";
        cat.leg = 4;
        cat.voice = "miyauuu";

        Sparrow sparrow  = new Sparrow();
        sparrow.color = "brown";
        sparrow.leg = 2;
        sparrow.voice = "chi_chi";

        display(cat);
        display(sparrow);
    }
    
}
