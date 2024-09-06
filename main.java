// Shape.java
sealed class Shape permits Circle, Square, Rectangle {
    public void printType() {
        System.out.println("This is a shape.");
    }
}

// Circle.java
 final class Circle extends Shape {
    @Override
    public void printType() {
        System.out.println("This is a circle.");
    }
}

// Square.java
final class Square extends Shape {
    @Override
    public void printType() {
        System.out.println("This is a square.");
    }
}

// Rectangle.java
final class Rectangle extends Shape {
    @Override
    public void printType() {
        System.out.println("This is a rectangle.");
    }
}

// Main.java
public class Main {
    public static void main(String[] args) {
        Shape circle = new Circle();
        Shape square = new Square();
        Shape rectangle = new Rectangle();

        circle.printType();    // Output: This is a circle.
        square.printType();    // Output: This is a square.
        rectangle.printType(); // Output: This is a rectangle.
    }
}