#pragma once
#include "Principal.h"

template<class T>
class Insertion:public Principal<T>
{
private:
	int n;
public:
	Insertion(vector<T> v) :Principal<T>(v) { n = v.size(); }
	~Insertion(){}

	void Ordenar() {
		int aux, k;
		for (int i = 1; i < n; i++)
		{
			aux = Principal<T>::val[i];
			k = i - 1;
			while (k>=0&&aux< Principal<T>::val[k])
			{
				Principal<T>::val[k + 1] = Principal<T>::val[k];
				k--;
			}
			Principal<T>::val[k + 1] = aux;
		}
	}

};

