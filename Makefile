DATA	=	src/*.cpp\
			src/Window/*.cpp\
			src/Sprite/*.cpp\
			src/Monster/Tomate/*.cpp\

VERSION	=	-std=c++2a\

MODULE	=	-lsfml-window\
			-lsfml-system\
			-lsfml-graphics\

NAME	=	MyDefender.obj\

compile:
	@(g++ -o $(NAME) $(DATA) $(MODULE) $(VERSION)) > /dev/null