DATA	=	src/*.cpp\
			src/ControlPlayer/*.cpp\
			src/Defender/*.cpp\
			src/Game/*.cpp\
			src/Monster/*.cpp\
			src/Sprite/*.cpp\
			src/Stat/*.cpp\
			src/Window/*.cpp\

VERSION	=	-std=c++2a\

MODULE	=	-lsfml-window\
			-lsfml-system\
			-lsfml-graphics\

NAME	=	MyDefender.obj\

compile:
	@(g++ -o $(NAME) $(DATA) $(MODULE) $(VERSION)) > /dev/null