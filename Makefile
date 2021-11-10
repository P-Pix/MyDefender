DATA	=	src/*.cpp\
			src/ControlPlayer/*.cpp\
			src/Defender/*.cpp\
			src/Game/*.cpp\
			src/Monster/*.cpp\
			src/Sprite/*.cpp\
			src/Stat/*.cpp\
			src/Window/*.cpp\
			src/Zone/*.cpp\
			src/ZoneList/*.cpp\

VERSION	=	-std=c++2a\

MODULE	=	-lsfml-window\
			-lsfml-system\
			-lsfml-graphics\

NAME	=	MyDefender.obj\

# compile with g++
compile:
	@(echo "Compiling...")
	@(g++ -o $(NAME) $(DATA) $(VERSION) $(MODULE))
	@(echo "Done.")