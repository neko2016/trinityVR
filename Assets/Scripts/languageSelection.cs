using UnityEngine;
using System.Collections;

public class languageSelection : MonoBehaviour {

	public static bool langEng;
	public static bool langIre;
	public static bool langChi;
	public static bool langFre;
	public static bool langSpa;

	// Use this for initialization
	void Start () {

		langEng = true;
		langIre = false;
		langChi = false;
		langFre = false;
		langSpa = false;
	
	}
	
	public void chooseEng() {

		langEng = true;

	}

	public void chooseIre() {

		langEng = false;
		langIre = true;

	}

	public void chooseChi() {

		langEng = false;
		langChi = true;

	}

	public void chooseFre() {

		langEng = false;
		langFre = true;

	}

	public void chooseSpa() {

		langEng = false;
		langSpa = true;

	}

}
