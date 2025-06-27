import hashlib

maze = [
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0],
    [0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
]

def DFS(maze, x, y, visited, path, all_paths):
    # 检查坐标是否合法、未被访问且不是墙
    if 0 <= x < len(maze) and 0 <= y < len(maze[0]) and not visited[x][y] and maze[x][y] != 0:
        visited[x][y] = 1  # 标记为已访问
        path.append((x, y))  # 记录路径

        if maze[x][y] == 2:
            all_paths.append(path.copy())  # 找到一条路径，记录下来
        else:
            # 递归搜索四个方向
            DFS(maze, x + 1, y, visited, path, all_paths)  # 下
            DFS(maze, x - 1, y, visited, path, all_paths)  # 上
            DFS(maze, x, y + 1, visited, path, all_paths)  # 右
            DFS(maze, x, y - 1, visited, path, all_paths)  # 左

        path.pop()  # 回溯
        visited[x][y] = 0  # 标记为未访问

def find_start(maze):
    for i in range(len(maze)):
        for j in range(len(maze[0])):
            if maze[i][j] == 11:
                return i, j
    return None, None

def find_shortest_path(maze):
    start_x, start_y = find_start(maze)
    if start_x is None or start_y is None:
        print("未找到起点")
        return None

    visited = [[0] * len(maze[0]) for _ in range(len(maze))]
    all_paths = []
    DFS(maze, start_x, start_y, visited, [], all_paths)

    if not all_paths:
        print("未找到路径")
        return None

    # 找到最短路径
    shortest_path = min(all_paths, key=len)
    return shortest_path

shortest_path = find_shortest_path(maze)
if shortest_path:
    print("最短路径：", shortest_path)
    print("路径长度：", len(shortest_path))