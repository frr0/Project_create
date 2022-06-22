---
title: Title
author: Author
date: \today
abstract: |
  This is the abstract. It consists of two paragraphs.
geometry: "letterpaper,top=2cm,bottom=2cm,left=2cm,right=2cm"
fontsize: 11pt
urlcolor: red
toc: true

header-includes:
	\usepackage{mathtools}
	\usepackage{multicol}
---
\newpage


# Prova

Lorem[@DY:1] ipsum dolor sit amet, officia[@DUMMY:2] excepteur ex fugiat@DY:1 reprehenderit enim labore culpa sint ad nisi Lorem pariatur mollit ex esse exercitation amet. Nisi anim cupidatat excepteur officia. Reprehenderit nostrud nostrud ipsum Lorem est aliquip amet voluptate voluptate dolor[^ciao] minim nulla est proident. Nostrud officia pariatur ut officia. Sit irure elit esse ea nulla sunt ex occaecat reprehenderit commodo officia dolor Lorem duis laboris cupidatat officia voluptate. Culpa proident adipisicing id nulla nisi laboris ex in Lorem sunt duis officia eiusmod. Aliqua reprehenderit commodo ex non excepteur duis sunt velit enim. Voluptate laboris sint cupidatat ullamco ut ea consectetur et est culpa et culpa duis. Here is an inline note.^[Inlines notes are easier to write, since you don't have to pick an identifier and move down to type the note.]

[^ciao]: loremSent


## Code

~~~~ {#mycode .c .numberLines startFrom="1"}
#include <stdio.h>

int main() {
  printf("Hello World");
  return 0;
}
~~~~~~~~~~~~~~~~~~~~~~~~~~

```c 
#include <stdio.h>

int main() {
  printf("Hello World");
  return 0;
}
```
<!-- # Bibliography -->
<!-- bibliography: prova.bib -->
<!-- link-citations: true -->
