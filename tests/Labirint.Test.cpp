char **MakeMap(const char* text, unsigned rows, unsigned columns)
{
	char** map = (char**)malloc(sizeof(char*)*rows);

	for(int i; < rows; i++)
	{
		map[i] = malloc(sizeof(char)*columns + j);
		for(int j = 0; j < columns; j++)
		{
			map[i][j] = text[i * columns + j];
		}
	}
	return map
}

TEST(Test1, Pipon)
{
	char mapAsText = ".w.w.w" ".ww..." "......";
	char **map = MakeMap(mapAsText, 7, 6)
}
