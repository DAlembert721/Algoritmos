#pragma once
#include "Principal.h"

template<typename T>
class Seleccion:public Principal<T>
{
public:
	Seleccion(vector<T> v) :Principal<T>(v) {}
	~Seleccion() {}
	void Ordenar() {
		int k, min;
		for (int i = 0; i < Principal<T>::val.size()-1; i++)
		{
			k = i;
			min = Principal<T>::val[i];
			for (int j = i+1; j < Principal<T>::val.size(); j++)
			{
				if (Principal<T>::val[j] < min) {
					min = Principal<T>::val[j];
					k = j;
				}
			}
			Principal<T>::val[k] = Principal<T>::val[i];
			Principal<T>::val[i] = min;
		}
	}


};

