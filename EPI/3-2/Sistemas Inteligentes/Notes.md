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

## Recommender Systems