package FirstProject;
public class Person {

    private String name;
    private String breed;
    public String getName(){
        return name;
    }
    public void setNAme(String name){
        this.name=name;
    }
    public String getBreed(){
        return breed;
    }
    public void setBreed(String breed){
        this.breed=breed;
    }
    public static void main(String[] args) {
    Person myPerson=new Person();
    myPerson.setBreed("pakistan");
    myPerson.setNAme("shehzad");
   
    System.out.println("breed " + myPerson.getBreed());
    System.out.println("name " + myPerson.getName());
    }
}
