all: build deploy

build:
	cmake --build robot_build/

deploy:
	scp robot_build/robot pi@raspberry:/home/pi/