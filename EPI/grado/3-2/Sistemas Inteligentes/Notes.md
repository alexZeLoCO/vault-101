# Notes
<% tp.file.creation_date() %> (YYYY-MM-DD) @ 14:19
Rodríguez López, Alejandro // UO281827

Tags:
	#showable
	Hecho en #Ribadeo
	Sobre #Sistemas_Inteligentes 
	Para #Apuntes
	Otros: #Examen
	Refs:
 
<hr>

## Machine Learning
Uses datasets whose entries have been previously categorized to learn.

### Algorithms

#### Rule Based Algorithms

**ZeroR**: The output category will always be the most frequent category in the dataset used to learn.
**OneR**: The output category will depend on the most decisive attribute. If this is not enough to solve the problem, then the most frequent category from the remaining possible categories will be used.
**C4.5**: The output category is calculated using a decision tree. Similarly to OneR, the first decision is made depending on the most decisive attribute, but instead of finishing there, C4.5 keeps on developing the decision tree, using the most decisive attributes first until a category is reached. If no more decision can be taken and the model is yet to find a solution category, then the most frequent category from the remaining categories will be used.

#### Classification by Neighbor

**Nearest Neighbor**: The output category will be that of the most similar entry in the dataset.
**K-Nearest Neighbors**: The output category will be the most frequent among the K most similar entries in the dataset.

#### Scalar Products (SVM) [MIT](https://web.mit.edu/6.034/wwwbob/svm-notes-long-08.pdf)

Category is found by calculating a hyperplane: $y = w \cdot x + b$ that separates items from category $A$ from those from category $B$:
let $A$ and $B$ be two sets of items with different categories so that $\forall x \in A$ $x$ is of category $A$ and $\forall x \in B$ $x$ is of category $B$ and let $k$ be a real number.
$$
\matrix{
	y>k&\forall x \in A\\
	y<k&\forall x \in B\\
	
}
$$
SVM tries to optimize the margin of the hyperplane. Let the margin be defined as:
$$
M = { 1 \over ||W||}
$$


## Deep Learning
Uses datasets whose entries are not categorized to learn.

## Graph Search
### Graph Search
Algorithm that finds a sequence of actions that gets from the initial state to a goal state.

#### Measures
- Complete <=> Algorithm finds a solution (if $\exists$).
- Optimal <=> Algorithm finds an optimal solution.
- Time Complexity: Time taken to find a solution.
- Space Complexity: Memory needed to find a solution.

#### Basic Algorithms
- Trees: Test nodes from frontier, add children of tested node to frontier.
- Graphs: Same as trees, check for loops.

##### Uninformed
- Breadth First: Test nodes left to right, top to bottom.
- Uniform Cost: Same as breadth first, store nodes sorted by step cost $g(n)$.
- Depth First: Test nodes top to bottom, left to right.
- Backtracking: Same as depth first, store only the tested child.

| Algorithm | Complete | Optimal | Time complexity | Space complexity |
| --- | --- | --- | --- | --- |
| Breadth First | if finite | if constant $g(n)$ | $O(b^d)$ | $O(b^d)$ |
| Uniform Cost | if finite and $g(n) > 0$ | Yes | $O(b^{1+[{C* \over \epsilon}]})$ | $O(b^{1+[{C* \over \epsilon}]})$ |
| Depth First | No | No | $O(b^m)$ | $O(b \cdot m)$ |

- $b$: Branching factor.
- $d$: Depth of shallowest goal node.
- $m$: Total depth of search tree.

##### Informed (A*)
Nodes are evaluated using $f(n) = g(n) + h(n)$.
- $g(n)$: Cost of getting to node $n$ from the starting node.
- $h(n)$: Estimated cost of getting to a goal node from node $n$.
Therefore, $f(n$) is the estimated cost of getting to a goal node through node $n$.

An **admissible heuristic** is one that **never overestimates** the cost of getting to a goal node.
A **consistent heuristic** is one that fulfills  $h(n) \le c(n, n') + h(n')$ for every node $n$ and child of $n$, $n'$ where $c(a, b)$ is the cost of getting from $a$ to $b$.

### Local Search
Sometimes, the path taken to reach the goal state is irrelevant. Local search algorithms try to optimize a function $w* = \matrix{argmax \\ w}f(w)$.
- Hill Climbing
The algorithm starts with an initial state, its next state is the highest-valued neighbor node. This is repeated until there is no better neighbor. The final state will be a local maximum, but it may not be the global maximum.
- Hill Climbing with random restart: Same as Hill Climbing, but the algorithm is restarted several times to get a better chance at finding the global maximum.

### Genetic Algorithms

The algorithm starts with a random population $k$.
The next population is obtained by calculating a fitness function for each node in the current $k$. The probability of having a node persist to the 

## Recommender Systems