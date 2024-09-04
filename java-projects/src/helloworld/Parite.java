package helloworld;
import java.util.Scanner;

public class Parite {

	public Parite() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int number;
		boolean p;
		System.out.println("Entrer un nombre : ");
		number = sc.nextInt();
		p = number%2 == 0 ? true : false;
		if (p)
			System.out.println("nombre pair");
		else
			System.out.println("nombre impair");
		sc.close();
	}

}
