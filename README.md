## Game Engine

<h4>About:</h4>

The goal is to implement 3D graphics without libraries for working with 3D graphics. The engine is based on the course - computer geometry at the institute

The project was developed for a multiplayer shooting game in C++

For this moment I already implemented:
- Operations with Point4D, Matrix4x4, Triangles and Mesh.
- Projections from 3D on 2D plane, movement and rotation of camera and meshes.
- Advanced smooth animations by using Bézier curves for meshes and camera
- Physics engine
- Network system (in work)

<h4>Installation:</h4>

1) Download and install OpenAL library for SFML sound support (in current version you can't setup this engine without OpenAL)
   
    openal: https://openal.org/downloads/
   

2) Install SFML on your computer (<b>The compiler versions have to match 100%</b>):
   
    sfml: https://www.sfml-dev.org/download.php
   

2) Open CLion or Visual Studio
   
   CLion: https://www.jetbrains.com/clion/
   

3) Clone this repository
   
    rep url: https://github.com/Anton247/game_engine
   

4) Built project

    Recommended method: Run Clean, add Release and Debug configurations. And run (Shift+F10)
