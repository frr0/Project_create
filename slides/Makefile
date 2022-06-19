F = note
F_MD=$(F).md
F_PDF=$(F).pdf
# themes: default, Boadilla, CambridgeUS, Goettingen, Hannover, Montpellier, Berkeley ,Pittsburgh, Singapore
# colors: crane, beaver, albatross, wolverine 

target: 
	pandoc -s --dpi=300 --slide-level 2 --toc --listings -t beamer $(F_MD) -o $(F_PDF)
