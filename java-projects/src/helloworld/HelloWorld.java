package helloworld;
import helloworld.*;

public class HelloWorld {

	public HelloWorld() {
		// TODO Auto-generated constructor stub
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		User u1 = new User();
		u1.userAge = 1>>4;
		u1.userName = "Noumecha";
		System.out.println("User u1 = { name = \""+ u1.userName + "\" ; age = "+ u1.userAge + " };");
		// type converting
		double a = 5.7;
		long l = (long)a;
		System.out.println(l);
		// Array manipulation 
		//in t[] notes = {2,4,5,7};
		//String cars[];
		// Classes 
		Etudiant e1 = new Etudiant();
		e1.setNomE("Johnny");
		e1.setPrenomE("Spaker");
		e1.setFilliereE("GENIE INFORMATIQUE");
		e1.setSpecialiteE("Cybersécurité");
		e1.presentation();
		
	}

}
