package java.tp5;

public class her {
    public static void main(String [ ] args) {
    Point p = new Point(2.0,2.0);
    System.out.println("Point -> "+p.printit());
    Circle c = new Circle(2.0, 2.0, 3.0);
    System.out.println ("Cercle -> "+c.printit()+",surface :"+c.surface(3.0));
    Cylindre ce = new Cylindre(2.0, 2.0, 3.0, 10.0);
    System.out.println("Cylindre -> "+ce.printit()+",surface :" + ce.surface(3.0));
    }
}