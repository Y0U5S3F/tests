package java.tp5;

public class Circle extends Point {
    private double r;
    private double pi=3.14159265359;

    public Circle(double x,double y,double r){
        super(x,y);
        this.r=r;
    }

    public double getR() {
        return this.r;
    }
    public void setR(double r) {
        this.r = r;
    }
    public double surface(double r){
        return (pi*r*r);
    }
    public void printit(){
        System.out.println(super.getX()+super.getY()+this.r);
    }
}