package TREESINDSA.bank2;
import TREESINDSA.bank.*;
public class bank2 {
    public static void main(String[] args) {
        Dog dog = new Dog();// Create an instance of Dog
        dog.eat(); // Call the eat method
        dog.eating(); // Call the eating method
    }
}
interface  Animal {
     void eat();
   void eating();
}
class Dog implements Animal {
    @Override
    public void eat() {
        // TODO Auto-generated method stub
    }
    @Override
    public void eating() {
        // TODO Auto-generated method stub
        
    }
}
