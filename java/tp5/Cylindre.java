package java.tp5;

public class Cylindre extends Circle {
    private double h;
    String text = new String();

    public Cylindre(double x,double y,double z,double h){
        super(x,y,z);
        this.h=h;
    }

    public double getH(){
        return this.h;
    }

    public void setH(double h){
        this.h=h;
    }

    public double surface (double z){
        return (super.surface(z)*2);
    }
    public void printit(){
    text=super.getX()+super.getY()+super.getR()+this.h;
    }
}