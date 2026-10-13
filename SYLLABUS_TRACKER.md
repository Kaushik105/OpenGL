# OpenGL Practical Lab Tracker (DC-MJ-502)

Welcome to the practical lab tracking sheet for **DC-MJ-502(PR): Computer Graphics using OpenGL Lab**.
All programs are written by you in C++ from first principles, tested, and verified.

---

## Progress Overview

| # | Topic / Practical Assignment | Status | Key Concepts & First Principles |
|---|------------------------------|:------:|---------------------------------|
| **0** | **Foundation & Setup** | 🟢 *Completed* | GLUT window setup, Event loop, Orthographic projection (`gluOrtho2D`), Coordinate systems, Plotting primitives (`GL_POINTS`, `GL_LINE_LOOP`, `GL_TRIANGLES`). |
| **1** | **Bresenham’s Line Drawing Algorithm** | 🟢 *Completed* | Rasterization, Slope $m$, Decision parameter $P_k$, Integer-only arithmetic, Handling all octants. |
| **2** | **Mid-point Circle Drawing Algorithm** | 🟡 *In Progress* | Implicit circle equation, 8-way octant symmetry, Midpoint decision parameter $P_k$. |
| **3** | **Cohen-Sutherland Line Clipping Algorithm** | ⬜ *Pending* | Viewport boundaries, 4-bit Region Outcodes (Top, Bottom, Right, Left), Trivial accept/reject, Intersection calculation. |
| **4** | **2D Geometric Transformations** | ⬜ *Pending* | Homogeneous coordinates ($3\times3$ matrices), Translation, Rotation about arbitrary point, Scaling, Matrix multiplication & concatenation. |
| **5** | **3D Transformations & Projections** | ⬜ *Pending* | $4\times4$ Transformation matrices, 3D object rendering, Parallel (Orthographic) vs. Perspective projection (`glFrustum` / `gluPerspective`). |

---

## Lab Journal & Milestones

- [ ] **Lab 0**: Complete clean C++ OpenGL skeleton file and plot a point on a custom 2D coordinate grid.
- [ ] **Lab 1**: Implement Bresenham's Line Algorithm from scratch.
- [ ] **Lab 2**: Implement Midpoint Circle Algorithm from scratch.
- [ ] **Lab 3**: Implement Cohen-Sutherland Line Clipping with clipping window.
- [ ] **Lab 4**: Implement 2D Transformations with homogeneous matrices.
- [ ] **Lab 5**: Implement 3D Transformations and projections.
