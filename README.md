# 2D SLAM Simulation in C++

## Overview
This project is a simple implementation of a 2D SLAM simulation written in C++.  
The main goal is not to build a highly optimized SLAM system, but to learn and understand the core ideas behind SLAM by implementing them step by step.

The project is entirely software-based and runs in the console. It has no external libraries and hardware requirements so that the focus stays on logic, reasoning, and basics, rather than tools or performance.

## Why This Project
SLAM (Simultaneous Localization and Mapping) is a fundamental challenge in robotics, but it can feel abstract when studied only through theory.

I started this project to:
- Learn how robots estimate their position over time.
- Understand how sensor data is used to understand the environment
- Bridge the gap between SLAM theory and actual implementation
- Strengthen my C++ skills by building a non-trivial robotics system from scratch

This project is designed as a learning journey, where new concepts are added gradually once I become familiar with the topic.

## Problem Statement
In the real world, a mobile robot often starts with:
- No prior map of its environment
- No knowledge of its position

Despite this, the robot must:
- Figure out where it is
- Build a map of its surroundings
- Continuously update both as it moves around the environment

This project explores how that problem can be approached with a simple 2D grid environment. The focus is on understanding the core ideas rather than handling real-world scenarios.

## Why a 2D Grid World
A 2D grid world is used because it:
- Makes easy understanding of space
- Allows easy visualization in the console
- Keeps the focus on SLAM concepts instead of 3D geometry or graphics

The same concepts could later be extended to more complex or realistic environments.

## What the Project Currently Does
At its current stage, the project:

- Represents the environment as a 2D grid with walls and free space
- Places a robot inside this grid
- Allows the robot to sense distances to nearby walls using simple, simulated distance sensor
- Displays the environment and robot state in the console

In this project, sensors are not actual physical ones.  
They are implemented as functions in code that asks the grid world to simulate how a real robot would perceive obstacles.


## Project Structure
The project is built incrementally as I learn the individual topics, with each stage adding a new concept:

- Environment representation (2D grid world) - Done
- Robot state and placement - Done
- Basic sensing (distance to walls) - Done
- Localization logic 
- Mapping logic 
- Sensor uncertainty and corrections 
- Full SLAM loop 

As new features are implemented, this README will be updated to reflect the current state of the system.
