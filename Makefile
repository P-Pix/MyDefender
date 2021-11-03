DATA	=	src/*.cpp\
			src/Game/*.cpp\
			src/Sprite/*.cpp\
			src/Stat/*.cpp\
			src/Window/*.cpp\
			\
			src/Defender/Tower1/*.cpp\
			src/Defender/Tower2/*.cpp\
			\
			src/Monster/*.cpp\
			src/Monster/Tomate/*.cpp\
			src/Monster/Courgette/*.cpp\

VERSION	=	-std=c++2a\

MODULE	=	-lsfml-window\
			-lsfml-system\
			-lsfml-graphics\

NAME	=	MyDefender.obj\

compile:
	@(g++ -o $(NAME) $(DATA) $(MODULE) $(VERSION)) > /dev/null