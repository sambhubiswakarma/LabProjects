public class Student{
private String Name, Roll;
private int year;
private static int count;

public Student(String name, String roll, int year){
  this.Name = name;
  this.Roll = roll;
  this.year = year;
  count++;
}

public String getName(){
  return Name;
}

public String getRoll(){
  return Roll;
}

 public int getYear(){
  return year;
}


public static int getCnt(){
  return count;
}
/*
public void printStudentDetail(){
  System.out.println("Detail of student "+count);
  System.out.println("Name of the student "+getName());
  System.out.println("Roll number of the student"+getRoll());
  System.out.println("Year "+getYear());
}
*/
}
