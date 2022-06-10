F = note
F_MD=$(F).md
F_PDF=$(F).pdf

target: 
	pandoc -s -i \
	--lua-filter=/home/fra/Projects/Project_create/md/center.lua \
	--pdf-engine=xelatex \
	-V geometry:"top=2cm, bottom=2cm, left=2cm, right=2cm" \
	-V colorlinks \
	--highlight-style zenburn \
	-V urlcolor=NavyBlue \
	--toc -N \
	-o $(F_PDF) $(F_MD) +RTS -Ksize -RTS
