public class Square extends Figure {
protected double s;
public Square(double a){
  this.s = a;
  // this.b = b;
}

public double getArea(){
  return s*s;
}
public double getPerimeter(){
  return 4*s;
}
}
