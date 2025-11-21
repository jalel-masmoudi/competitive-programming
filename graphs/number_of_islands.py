"""
LeetCode #200: Number of Islands
Difficulty: Medium
Time: O(m*n), Space: O(m*n) for DFS recursion
Problem: Count number of connected islands in grid
"""

def numIslands(grid):
    """
    Count islands using DFS
    
    Args:
        grid: 2D list with '1' (land) and '0' (water)
    
    Returns:
        Number of islands
    """
    if not grid or not grid:
        return 0
    
    rows, cols = len(grid), len(grid)
    count = 0
    
    def dfs(r, c):
        """Mark entire island as visited"""
        if r < 0 or r >= rows or c < 0 or c >= cols or grid[r][c] == '0':
            return
        
        grid[r][c] = '0'  # Mark as visited
        
        # Explore neighbors
        dfs(r + 1, c)  # Down
        dfs(r - 1, c)  # Up
        dfs(r, c + 1)  # Right
        dfs(r, c - 1)  # Left
    
    # Find islands
    for i in range(row
