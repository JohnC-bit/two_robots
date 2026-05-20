# Run two_robots locally

## compile

```bash
source /opt/ros/humble/setup.bash
cd two_robots
mkdir build && cd build
cmake ..
make
```

## run

```bash
source /opt/ros/humble/setup.bash
./demo
```

## recompile

```bash
cd build
make
```

## If everthing is fun, it should be like

![robor_a_node running in first console](images/robot_a.png)
![robor_b_node running in another console](images/robot_b.png)

#You can see the subscriber and publisher are running fine