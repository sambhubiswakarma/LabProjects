public class Main{
  public static void main(String args[]){
  Figure s = new Square(3);
  System.out.println("Area of Square :"+s.getArea());
  System.out.println("Perimeter of Square:"+s.getPerimeter());


  Figure c = new Circle(5);
  System.out.println("Area of Circle :"+c.getArea());
  System.out.println("Perimeter of Circle:"+c.getPerimeter());

  Square r = new Rectangle(5,3);
  System.out.println("Area of Rectangle :"+r.getArea());
  System.out.println("Perimeter of Rectangle:"+r.getPerimeter());

  }
}
