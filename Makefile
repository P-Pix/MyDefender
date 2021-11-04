DATA	=	src/*.cpp\
			src/Game/*.cpp\
			src/Sprite/*.cpp\
			src/Stat/*.cpp\
			src/Window/*.cpp\
			src/Defender/*.cpp\
			src/Monster/*.cpp\

VERSION	=	-std=c++2a\

MODULE	=	-lsfml-window\
			-lsfml-system\
			-lsfml-graphics\

NAME	=	MyDefender.obj\

compile:
	@(g++ -o $(NAME) $(DATA) $(MODULE) $(VERSION)) > /dev/null