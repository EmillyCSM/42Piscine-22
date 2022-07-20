#include<unistd.h>

void ft_put_char(char c)
{
    write(1, &c, 1);
}

void draw_line(int lines_length, char left, char middle, char right)
{
    int i;
    i = 1;
    int first_pos;
    int last_pos;
    first_pos = 1;
    last_pos = lines_length;

    while (i <= lines_length)
    {
        if (i == first_pos)
            ft_put_char(left);
        else if (i == last_pos)
            ft_put_char(right);
        else
            ft_put_char(middle);
        i++;
    }
}

void rush(int lines_lenght, int columns_lenght)
{
    if (lines_lenght <= 0 ||  columns_lenght <= 0)
	return;
	int column_index;
	column_index = 1;
	while (column_index <= columns_lenght)
	{
		if (column_index == 1 || column_index == columns_lenght)
			draw_line(lines_lenght, 'o', '-', 'o');
        else
            draw_line(lines_lenght, '|', ' ', '|');

        if (column_index != columns_lenght)
            ft_put_char('\n');

        column_index++;
    }
}

int	main(void)
{
	rush(5, 8);
	return (0);

}
