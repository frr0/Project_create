#!/bin/sh

name=$1

f_md=$name.md
f_pdf=$name.pdf

#echo $f_csv
#echo $f_pdf

pandoc -s -i -N \
    --pdf-engine=xelatex \
    -V geometry:"top=2cm, bottom=2cm, left=2cm, right=2cm" \
    -V colorlinks \
    --highlight-style zenburn \
    -V urlcolor=NavyBlue \
    --toc \
    -o $f_pdf $f_md +RTS -Ksize -RTS
