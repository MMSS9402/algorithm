import heapq
import sys
from collections import deque

input = sys.stdin.readline

n,m = map(int,input().split())
start = int(input())
INF = int(1e9)
graph = [[] for i in range(n+1)]
print(graph)
distance = [INF] * (n+1)

for _ in range(m):
    a,b,c = map(int,input().split())
    graph[a].append((b,c))
print(distance)
print(graph)

def dijkstra(start):
    q = []
    heapq.heappush(q,(0,start))
    distance[start] = 0

    while q:
        cost, now = heapq.heappop(q)
        if(distance[now] < cost): continue

        for i in graph[now]:
            next = i[0]
            total = cost + i[1]
            if(distance[next]>total):
                distance[next] = total
                heapq.heappush(q,(total,next))
dijkstra(start)
print(distance)


# 6 11
# 1
# 1 2 2
# 1 3 5
# 1 4 1
# 2 3 3
# 2 4 2 
# 3 2 3
# 3 6 5 
# 4 3 3
# 4 5 1
# 5 3 1
# 5 6 2