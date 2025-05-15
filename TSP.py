import heapq  # For priority queue (Best-First Search)

class Node:
    def __init__(self, path, cost, bound):
        self.path = path
        self.cost = cost
        self.bound = bound

    def __lt__(self, other):
        return self.bound < other.bound  # Prioritize smaller bounds

def branch_and_bound(cost_matrix):
    n = len(cost_matrix)
    pq = []  # Priority queue
    best_cost = float('inf')  # Initialize with infinity
    best_path = None

    # Initial node: Start at city 0
    root = Node([0], 0, calculate_bound([0], cost_matrix))
    heapq.heappush(pq, root)

    while pq:
        current = heapq.heappop(pq)

        if current.bound >= best_cost:
            continue  # Prune

        # Expand the current node
        for next_city in range(n):
            if next_city not in current.path:
                new_path = current.path + [next_city]
                new_cost = current.cost + cost_matrix[current.path[-1]][next_city]

                if len(new_path) == n:
                    # Complete path
                    total_cost = new_cost + cost_matrix[next_city][0]  # Return to start
                    if total_cost < best_cost:
                        best_cost = total_cost
                        best_path = new_path + [0]
                else:
                    bound = calculate_bound(new_path, cost_matrix)
                    if bound < best_cost:
                        heapq.heappush(pq, Node(new_path, new_cost, bound))

    return best_path, best_cost

def calculate_bound(path, cost_matrix):
    # Example heuristic: Sum of minimum edges from unvisited cities
    bound = 0
    visited = set(path)
    for i in range(len(cost_matrix)):
        if i not in visited:
            bound += min(cost_matrix[i][j] for j in range(len(cost_matrix)) if j not in visited)
    return bound
