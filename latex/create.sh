#!/bin/sh

git init
latex main.tex
bibtex main
latex main.tex
latex main.tex
pdflatex main.tex
