# !/usr/bin/python

import os

n=0


def cria_pagina(dir):
	# Percorre todos os diretórios a partir de dir e asssimila
	# a raiz do dirétório no raiz
	for raiz, dirs, files in os.walk(dir):

		#tira os arquivos escondidos
		files = [f for f in files if not f[0] == '.']
		dirs[:] = [d for d in dirs if not d[0]=='.']

		for diretorio in dirs:
			
			print("-------------------------")
			print(os.path.join(raiz, diretorio)+"/index.html") 
			print("RAIZ:"+ raiz[2:] + "/index.html")
			print("-------------------------")

			
			#Cria um novo arquivo:
			

			arquivo_novo = open(os.path.join(raiz, diretorio)+"/index.html", 'w')
			#arquivo_velho = open(raiz+"/index.html", 'w')
			
			arquivo_novo.write("<html>\n<body>")
			for name in files:
				arquivo_novo.write("<div>")
				arquivo_novo.write(name)
				arquivo_novo.write("</div>")

			
			print(name)

			link = "<a href=\""+diretorio+"/index.html\" >"+ diretorio+ "</a>"
			#arquivo_velho.write(str(link))

			arquivo_novo.close()
			#arquivo_velho.close()

cria_pagina(".")