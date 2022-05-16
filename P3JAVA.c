package Parte3;

import java.util.ArrayList;

public class Pessoa {
	private int idPessoa;
	private String nomePessoa;
	private double alturaPessoa;
	
	public Pessoa(int idPessoa, String nomePessoa, double alturaPessoa) {
		this.idPessoa = idPessoa;
		this.nomePessoa = nomePessoa;
		this.alturaPessoa = alturaPessoa;
	}

	public int getIdPessoa() {
		return idPessoa;
	}

	public void setIdPessoa(int idPessoa) {
		this.idPessoa = idPessoa;
	}

	public String getNomePessoa() {
		return nomePessoa;
	}

	public void setNomePessoa(String nomePessoa) {
		this.nomePessoa = nomePessoa;
	}

	public double getAlturaPessoa() {
		return alturaPessoa;
	}

	public void setAlturaPessoa(double alturaPessoa) {
		this.alturaPessoa = alturaPessoa;
	}
	
	public double mediaAltura(ArrayList<Pessoa> lista) {
		double media = 0;
		for(Pessoa i : lista) {
			media += i.alturaPessoa;
		}
		return media / lista.size();
	}
	
	
}