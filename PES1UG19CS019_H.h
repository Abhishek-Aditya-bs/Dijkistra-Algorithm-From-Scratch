#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define INF INT_MAX

typedef struct heap_node{
  unsigned int vertex;
  unsigned int d;
  unsigned int p;
}HEAP_NODE;

typedef struct heap{
  HEAP_NODE ** Array;
  int number_of_elements;
  int size;
}HEAP;

typedef struct adj_list_node{
  unsigned int vertex;
  unsigned int weights;
  struct adj_list_node * next_vertex;
}LIST_NODE;

typedef struct adj_list_vnode{
  unsigned int vertex;
  LIST_NODE * connections;
  struct adj_list_vnode * next_vertex;
}NODE;

typedef struct graph{
  NODE * graph;
  int number_of_vertices;
}GRAPH;

  //graph functions
  GRAPH * create();
  GRAPH * build_graph(char * filename);
  GRAPH * read(GRAPH * G,char * filename);
  GRAPH * add_connection(GRAPH * G,int vertex,int * connection);
  GRAPH * add_vertex(GRAPH * G,int vertex);

  //Node creation functions
  NODE * create_node(int vertex);
  LIST_NODE * create_connection(int vertex, int weight);
  
  //Min Heap functions
  HEAP * create_heap();
  HEAP_NODE * create_heap_node(int vertex,int distance,int predecessor);
  HEAP * make_heap(GRAPH * G,int source_vertex);
  HEAP * heap_insert(HEAP * heap,int vertex,int dist);
  void swap_nodes(HEAP_NODE ** A, HEAP_NODE ** B);
  void heapify(HEAP * heap, int idx);
  HEAP_NODE * heap_delete(HEAP * heap);
  int isEmpty(HEAP * heap);
  HEAP_NODE * extract_min(HEAP * heap);
  int getHeapIdx(HEAP * heap, int vertex);
  HEAP*decrease_key(HEAP * heap,int pre_vertex, int vertex,int distance);
  HEAP * relax(HEAP * heap, HEAP_NODE * extracted_vertex, LIST_NODE * next_vertex, int dist);

  //dijkstra and printing shortest path from all vertices to the destination functions
  void dijkstra(GRAPH * G, int destination_vertex);
  void print_shortest_path(HEAP_NODE ** stack,int index);
  