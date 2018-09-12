public class Rectangle extends Square{
  private double l, b;
  public Rectangle(double a, double b){
    super(a);
    this.l = a;
    this.b = b;
  }
  // public Rectangle(double a){
  //   super(a);
  //
  // }
  public  double getArea(){
if(l == b){
  return super.getArea();
}
return l*b;
  }
  public double getPerimeter(){
    if(l == b){
      return super.getPerimeter();
    }
    return 2*(l+b);
  }
}
