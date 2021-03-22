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
$ make install
```

### Clone procman
```
$ git clone http://github.com/ARG-NCTU/procman
$ cd procman
$ mkdir build
$ cd build
$ cmake ..
$ make install
```

### bot-procman-sheriff
```
$ cd ~/Seadrone/procman/procman/build/python
```
Revise bot-procman-sheriff
```
export PYTHONPATH="${PYTHONPATH}:/home/diabolokiat/Seadrone/procman/procman/build/lib/python2.7/dist-packages:/usr/local/lib/python2.7/dist-packages"
exec "/usr/bin/python" -m bot_procman.sheriff_gtk.sheriff_gtk "$@"
```
