public class Book{
  private String title, author,isbn;
  private static int count;

  public Book(String title, String author, String isbn){
    this.title = title;
    this.author = author;
    this.isbn = isbn;
    count++;
  }

  public String gettitle(){
    return title;
  }

  public String getauthor(){
    return author;
  }

  public String getisbn(){
    return isbn;
  }


  public static int getCnt(){
    return count;
  }
  /*
  public void printBookDetail(){
    System.out.println("Detail of Book "+count);
    System.out.println("Title of the book "+gettitle());
    System.out.println("Author of the book "+getauthor());
    System.out.println("isbn  "+getisbn());
  }
*/
}
