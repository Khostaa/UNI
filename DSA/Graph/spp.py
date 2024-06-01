import math
from queue import PriorityQueue
G = {
    'A' : { 'B':3,'C': 1},
    'B' : { 'A':3, 'C':7,'D':5,'E':1},
    'C' : { 'A': 1,'B':7,'D': 2},
    'D' : { 'B': 5, 'C':2 , 'E':7},
    'E' : { 'B': 1,'D':7}
}
def initialize(G, start):
    cost = dict()
    previous = dict()
    for vertex in G:
        cost[vertex] = math.inf
        previous[vertex] = ''
    cost[start] = 0
    return cost, previous
# here relax(graph,current vertex,chimeki,cost,previous)
def relax(G, u, v, cost, previous):
    if cost[v]>cost[u]+G[u][v]:
        cost[v] = cost[u] = G[u][v]
        previous[v] = u
    return cost, previous

def DJ(G, start):
    cost, previous = initialize(G, start)
    visited = list()
    Q = PriorityQueue()
    for vertex in G:
        Q.put((cost[vertex],vertex))
    while(Q.empty() == False):
        c, u = Q.get()
        visited.append(u)
        for chimeki in G[u]:
            if chimeki not in visited:
                cost, previous = relax(G, u, chimeki, cost, previous)       
    return cost, previous


def constructPath(previous, start, end):
    path = end
    while (previous[end] != ''):
        path = previous[end]+'->'+path
        end = previous[end]
    return path


start = 'A'
cost, previous = DJ(G, start)
for vertex in G:
    print("Path from ",start," to ",vertex," is ", constructPath(previous,start,vertex))








