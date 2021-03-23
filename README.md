# procman
forked from
https://github.com/RobotLocomotion/libbot/tree/master/bot2-procman

## Build
### Clone lcm
```
$ git clone https://github.com/lcm-proj/lcm
$ cd lcm
$ mkdir build
$ cd build
$ cmake ..
$ sudo make install
```

### Clone procman
```
$ git clone https://github.com/DiaboloKiat/procman.git
$ cd procman
$ mkdir build
$ cd build
$ cmake ..
$ sudo make install
```

### Basic Tools
```
$ sudo apt-get install python-gobject
$ sudo apt-get install python-gtk2
$ sudo apt-get install python-tk
$ sudo apt-get install libcanberra-gtk-module
$ sudo apt-get install libcanberra-gtk3-module
```

### Test Run
```
$ bot-procman-sheriff -l
```
