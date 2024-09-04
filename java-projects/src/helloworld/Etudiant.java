package helloworld;

public class Etudiant {

	String nomE = new String();
	String prenomE = new String();
	String filliereE = new String();
	String specialiteE = new String();
	int age = 0;
	// SETTERS
	/**
	 * 
	 * @param n
	 */
	public void setNomE(String n) {
		this.nomE = n;
	}
	/**
	 * 
	 * @param p
	 */
	public void setPrenomE(String p) {
		this.prenomE = p;
	}
	/**
	 * 
	 * @param f
	 */
	public void setFilliereE(String f) {
		this.filliereE = f;
	}
	/**
	 * 
	 * @param s
	 */
	public void setSpecialiteE(String s) {
		this.specialiteE = s;
	}
	/**
	 * 
	 * @param a
	 */
	public void setAge(int a) {
		this.age = a;
	}
	// GETTERS 
	/**
	 * 
	 * @return
	 */
	public String getNomE() {
		return this.nomE;
	}
	/**
	 * 
	 * @return
	 */
	public String getPrenomE() {
		return this.prenomE;
	}
	/**
	 * 
	 * @return
	 */
	public String getFilliereE() {
		return this.filliereE;
	}
	/**
	 * 
	 * @return
	 */
	public int getAge() {
		return this.age;
	}
	/**
	 * 
	 * @return
	 */
	public String getSpecialiteE() {
		return this.specialiteE;
	}
	
	// OTHERS METHODS
	/**
	 * 
	 */
	public Etudiant() {
		// TODO Auto-generated constructor stub
	}
	/**
	 * 
	 */
	public void presentation() {
		System.out.println(this.getNomE() + " est inscrit dans la filière : " + this.getFilliereE() + "; dans la spécialité : " + this.getSpecialiteE()+".");
	}
	/**
	 * 
	 */
	public void composer() {
		System.out.println(this.getNomE() + "compose");
	}

}
