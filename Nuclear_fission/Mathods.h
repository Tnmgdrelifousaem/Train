#pragma once
#include <iostream>

void quickSort(double arr[], int low, int high) {
	if (low < high) {
		int pivot = arr[(low + high) / 2];
		int i = low;
		int j = high;
		while (i <= j) {
			while (arr[i] < pivot) {
				i++;
			}
			while (arr[j] > pivot) {
				j--;
			}
			if (i <= j) {
				std::swap(arr[i], arr[j]);
				i++;
				j--;
			}
		}
		quickSort(arr, low, j);
		quickSort(arr, i, high);
	}
}