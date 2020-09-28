/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_sort_int_array
*/

void my_sort_int_array(int *array, int size)
{
    int check = 1;
    while (check != 0) {
        check = 0;
        for (int i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                check = 1;
                my_swap(array + i, array + i + 1);
            }
        }
    }
}