package Parte3;

import java.util.List;
import java.util.ArrayList;

public class Turma {
	private int idTurma;
	private int qtdAlunos;
	private double[] notas;
	
	public Turma(int idTurma, int qtdAlunos, double[] notas) {
		this.idTurma = idTurma;
		this.qtdAlunos = qtdAlunos;
		this.notas = notas;
	}

	public int getIdTurma() {
		return idTurma;
	}

	public void setIdTurma(int idTurma) {
		this.idTurma = idTurma;
	}

	public int getQtdAlunos() {
		return qtdAlunos;
	}

	public void setQtdAlunos(int qtdAlunos) {
		this.qtdAlunos = qtdAlunos;
	}

	public double[] getNotas() {
		return notas;
	}

	public void setNotas(double[] notas) {
		this.notas = notas;
	}
	
	private double mediaTurma() {
		double media = 0;
		for(double i : this.notas) {
			media += i;
		}
		return media;
	}
	
	private List<Double> notasAcimaDaMedia() {
		ArrayList<Double> medias = new ArrayList<Double>();
		double media = this.mediaTurma();
		for(double i : this.notas) {
			if(i >= media) {
				medias.add((Double)i);
			}
			
		}
		return medias;
	}
	
	

}
