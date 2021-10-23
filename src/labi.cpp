#include <stdbool.h>
#include <stdlib.h>
bool Labirint(const char** map, unsigned rowsCount, unsigned columnsCount)
{
	bool** visited = calloc(rowsCount, sizeof(bool*));
	for(int i; i < rowsCount; i++)

	{
		visited[i] = bool* calloc(columnsCount, sizeof(bool));
	}

	Visit(map, rowsCount, columnsCount, 0, 0, visited);

	return visited[rowsCount - 1][columnsCount - 1];
}

void Visit(const char** map, unsigned rowsCount, unsigned columnsCount, int x, int y, bool** visited)
{
	if (x < 0 || y < 0 || x >= rowsCount || y >= columnsCount || map[x][y] == 'w')
	{
		return;
	}
	
	visited[x][y] = true;
	Visit(map, rowsCount, columnsCount, x, y+1, visited);
	Visit(map, rowsCount, columnsCount, x+1, y, visited);
}
