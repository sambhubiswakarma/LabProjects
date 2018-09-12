public class Circle extends Figure {
private double r;
public Circle(double r){
  this.r = r;
}

public double getArea(){
  return Math.PI*r*r;
}
public double getPerimeter(){
  return 2*r*Math.PI;
}
}
