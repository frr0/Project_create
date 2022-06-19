F = note
F_MD=$(F).md
F_PDF=$(F).pdf
	# --lua-filter=/home/fra/Projects/Project_create/md/center.lua \
	# --highlight-style zenburn \

target: 
	pandoc -s -i -N -o $(F_PDF) $(F_MD) +RTS -Ksize -RTS
