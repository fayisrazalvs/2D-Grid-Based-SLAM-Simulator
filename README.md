# 2D SLAM Simulation in C++ (Learning Project)

## Overview
A ground-up C++ implementation of 2D SLAM simulation.

The objective is to understand how a robot can estimate its position and concurrently build a map of its environment using only sensor data, without relying on any external libraries or frameworks.

This project is deliberately kept simple and software-based, focusing on **core concepts rather than performance or real hardware.

---
## Problem Statement:
In real-world, a robot often starts with:

- No map of the environment
- No exact knowledge of position

But, the robot has to:

- Figure out **where it is**
- Create a **map of its surroundings**
- Update both continuously as it moves

The aim of this project is to figure out, how this problem could be solved within a controlled 2D grid world.
[Why 2D grid world?: It's easier than 3D :)]

## What This Project Does
- Simulates the representation of a **2D grid-based world** with walls and empty space
- represents a robot moving inside this world
- Estimates the robot's position using movement and sensor readings
- Gradually builds a map based on what the robot observes
- Updates position estimates as new sensor data become available
[Here sensors are not actual physical sensors but, functions in code]

The simulation runs entirely in the console and focuses on **logic and reasoning**, not graphics.
