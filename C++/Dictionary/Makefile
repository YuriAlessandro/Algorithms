### Programas
CXX = g++
DELETAR = /bin/rm

### Variáveis
#DEPURA = -ggdb
AVISA = -Wall
#PROFILA = -pg
#OTIMIZA = -O2
PADRAO_LINGUAGEM = c++11  #c++0x  # c++98
BIBLIOTECA_PADRAO = libc++
#BIBLIOTECAS = -lm


### Diretórios
#DIRBIBLIOTECAS = -L/opt/local/lib
DIREXECUTAVEL = bin
DIRFONTE = src
DIRINCLUDE = include
DIRDECLARACOES = -I. -I $(DIRINCLUDE) -I $(DIRFONTE)

### Flags de compilação
CFLAGS = $(AVISA) $(DEPURA)$ $(PROFILA) $(OTIMIZA) -std=$(PADRAO_LINGUAGEM)

### Flags de linkedição
LFLAGS = $(AVISA) $(DIRBIBLIOTECAS) $(BIBLIOTECAS) #-stdlib=$(BIBLIOTECA_PADRAO)

### Dependências
OBJS = $(DIREXECUTAVEL)/drive_arraylist.o # outras ...

### Entradas
# a primeira entrada eh para o programa alvo
arraylist: $(OBJS)
	@echo ">>> Gerando executavel."
	$(CXX) $(LFLAGS) $(OBJS) -o $(DIREXECUTAVEL)/drive_arraylist

# essa entrada define como produzir o arquivo
#Classe_LLSeq.o: Classe_LLSeq.cpp Classe_LLSeq.h
$(DIREXECUTAVEL)/drive_arraylist.o: $(DIRFONTE)/drive_arraylist.cpp $(DIRINCLUDE)/dal.h $(DIRINCLUDE)/dal.inl
	@echo ">>> Compilando dependencias."
	$(CXX) $(CFLAGS) $(DIRDECLARACOES) -c $(DIRFONTE)/drive_arraylist.cpp  \
	    -o $(DIREXECUTAVEL)/drive_arraylist.o

$(DIRINCLUDE)/dal.h: $(DIRINCLUDE)/dal.inl

# a entrada seguinte elimina os arquivos inuteis.
clean:
	@echo ">>> Limpando projeto."
	$(DELETAR) $(DIREXECUTAVEL)/*.o $(DIRFONTE)/*~ \
	   $(DIRINCLUDE)/*~ $(DIREXECUTAVEL)/drive_arraylist
