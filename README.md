# 2D Grid Based SLAM Simulator

This is a small personal project where I’m teaching myself to build a very simple version of a SLAM (Simultaneous Localization and Mapping) system.

The goal isn’t to create a highly optimized or production level SLAM algorithm, the aim of the project is for me to understand the fundamentals of:

1. How a robot estimates where it is

2. How it builds a map of its surroundings

3. How sensor data can be fused to update its position

4. How SLAM works step-by-step behind the scenes

I’ll be implementing everything gradually as I get familiar with the concepts:

1. coordinate transforms

2. Simple motion models

3. Simulated sensor data

4. A minimal occupancy grid map

5. A basic EKF / particle filter (eventually)

This repository is meant to track my progress as I build up both my C++ skills and my understanding of robotics algorithms. The idea is to learn by doing, start small, and grow the project over time.

If you’re just starting out with C++ or robotics like me, feel free to follow along, I’m keeping the code simple and focusing on clarity over complexity.

# Concept/Theory

## 1. How a Robot estimates where it is (Localization)

*Robot localization is a robot's ability to know its own position and orientation (pose) in an environment.*

**Pose**: Position(x, y), Orientation(theta) in a frame.

The robot estimates its pose by combining two things: 

	* What the robot thinks it did (motion prediction) — e.g., “I drove forward 1 m and turned 10°.”

	* What the robot senses about the world (measurements) — e.g., “I see a wall 1.2 m to my left.”
