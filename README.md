# Dijkistra-Algorithm-From-Scratch
Implementing Dijkistra Algorithm from scratch to solve Single Destination Shortest Path using priority queues and heaps. Single  destination shortest path is finding  shortest path from all the vertices to the given vertex.

Input graph is read from adjacencylist.txt file.

## Input File

1. Vertices are numbered 1 to n 
2. First line represents number of vertices
3. This is followed by a set of lines.
4. Each line starts with a integer (any integer from 1 to n in any order) which represents vertex number (v_id) followed by space followed by a set of d pairs where d represents outdegree of the vertex v_id .First number in the pair  represents  neighbour  vertex id  and  second number  weight of the edge  which connects vertex to the  neighbour.  Weight is  always a non-negative integer

Sample Input File

4 

1 2 4 3 5 

4 5 4 1 7 3 3 

2 1 3 4 10

Represents the graph

![ Sample Graph Picture](https://github.com/Abhishek-Aditya-bs/Dijkistra-Algorithm-From-Scratch/blob/main/Sample-Graph-picture.png)

Sample Output

1 1 4 5 

2 2 1 4 8 

3 NO PATH 

## List of functionalities Implemented

1. Reading data from file and creating Graph  (Adjacency list and not adjacency matrix)
2. Implementation for Priority queue using min heap  (Insert, delete, search update)
3. Implementation of Dijkstra’s algorithm to determine shortest path from all vertices to nthvertex in the list (Single Destination Shortest path) 
4. Determining shortest path distance and shortest path from all the vertices to destination vertex.
5. Printing shortest path and shortest path distance from all the vertices to the  destination  starting  with  vertex  numbered  1,2,3---n-1 

