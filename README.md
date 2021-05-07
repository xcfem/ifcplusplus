ABOUT THIS REPO
===



general informations
---

* as geometry modeller either Carve (source is included) or OpenCascade can be used
* there's a simple IFC viewer application, using Qt5 and OpenSceneGraph
* project founded and maintained by Fabian Gerold
* development takes places at https://github.com/ifcquery/ifcplusplus/



this repo
---
* https://github.com/berndhahnebach/ifcplusplus
* branch master has changes to compile and install on Debian Stretch and Buster



build on Linux (Debian)
---
* development packages for openscenegraph 3.4 have to be installed (they are linked against Qt5)
* Debian Stretch see: https://gist.github.com/berndhahnebach/e4d57634fe7eebbae537bf3da1b1b95a
* Debian Buster see: https://gist.github.com/berndhahnebach/fb9b3c69c7de0835836cc27db6043e33
* forum topic about a Linux build on FreeCAD forum: http://www.forum.freecadweb.org/viewtopic.php?f=23&t=5101



build on Linux (Gentoo)
---
* forum topic on FreeCAD forum: https://forum.freecadweb.org/viewtopic.php?t=33254

build on Linux (Ubuntu)
---
* install development packages for openscenegraph: libopenscenegraph-dev


ABOUT IFC++
=============
## Summary
IFC++ is an open source IFC implementation for C++. It was originally developed at the Bauhaus University Weimar.

## License
The project is published under the MIT license, which means that you can use it for any purpose, personal or commercial. There is no obligation to publish your source code.

## Details and download of executable
Additional information as well as download links to the viewer application is on this project website: http://www.ifcquery.com

## How to build the library and example application on Windows and Linux
https://github.com/ifcquery/ifcplusplus/wiki/Build-instructions


## Screenshot of steel frame model in the example viewer
 980 000 entities loaded, 8000 with geometric representation. Loaded in < 4 sec. on a standard PC, including geometry.
 ![Steel frame model](http://www.ifcquery.com/img/Building-model-steel-frame-2018-02-05.png)


