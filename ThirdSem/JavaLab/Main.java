public class Main{
  public static void main(String args[]){

    //creating four objects of student
    Student s1 = new Student("Sambhu","b170026",2);
    Student s2 = new Student("Worship","b170025",2);
    Student s3 = new Student("Avinash","b170027",2);
    Student s4 = new Student("Nikhil","b170008",2);

   //creating three objects of stud
   Book b1 = new Book("title1", "author1","isbn1");
   Book b2 = new Book("title2", "author2","isbn2");
   Book b3 = new Book("title3", "author3","isbn3");

   //for std1
   System.out.println("Number of student :"+Student.getCnt());
   System.out.println(s1.getName());
   System.out.println(s1.getRoll());
   System.out.println(s1.getYear());

   //for std2
   System.out.println(s2.getName());
   System.out.println(s2.getRoll());
   System.out.println(s2.getYear());

   //for std3
   System.out.println(s3.getName());
   System.out.println(s3.getRoll());
   System.out.println(s3.getYear());




   //printing details of Books
   System.out.println("Number of Books :"+Book.getCnt());


   //for book 1
   System.out.println(b1.gettitle());
   System.out.println(b1.getauthor());
   System.out.println(b1.getisbn());

   //for book2
   System.out.println(b2.gettitle());
   System.out.println(b2.getauthor());
   System.out.println(b2.getisbn());

   //for book3
   System.out.println(b3.gettitle());
   System.out.println(b3.getauthor());
   System.out.println(b3.getisbn());



  }
}
