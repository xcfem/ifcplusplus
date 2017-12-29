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
* branch master has changes to compile and install on Debian Stretch (Stable in Mai 2018)



build on Linux
---
* openscenegraph has to be build before building ifcplusplus
* see https://gist.github.com/berndhahnebach/e4d57634fe7eebbae537bf3da1b1b95a
* find a forum thread about a Linux build at http://www.forum.freecadweb.org/viewtopic.php?f=23&t=5101



ABOUT IFC++
=============
## Summary
IFC++ is an open source IFC implementation for C++. It was originally developed at the Bauhaus University Weimar.

## License
The project is published under the MIT license, which means that you can use it for any purpose, personal or commercial. There is no obligation to publish your source code.

## Details and download of executable
Additional information as well as download links to the viewer application is on this project website: http://www.ifcquery.com


Screenshots from the example viewer
===========

 ### Steel frame model
 980 000 entities loaded, 8000 with geometric representation. Loaded in < 4 sec. on a standard PC, including geometry.
 ![Steel frame model](http://www.ifcquery.com/img/Building-model-steel-frame-2018-02-05.png)
 
   
### Steel frame model
 330 000 entities loaded, 3500 with geometric representation. Loaded in < 4 sec. on a standard PC, including geometry.
 ![Steel frame model](http://www.ifcquery.com/img/steel-frame.png)
 
 
### Office building
70 423 entities loaded, 2235 with geometric representation. Loaded in < 1 sec. on a standard PC, including geometry.
![Office building](http://www.ifcquery.com/img/Office-building.png)


### Office building
Office building with offset in y-direction for each building storey. The offset allows for a better overview when there are several storeys.
![Office building](http://www.ifcquery.com/img/storey-offset.png)
 
 

### Office building
Office building with details in the viewer application
![Office building](http://www.ifcquery.com/img/IfcQueryViewer-details.png)
 

### Office building with steel parts
387191 entities loaded, 10021 with geometric representation. Loaded in 10 sec. on a standard PC, including geometry.
![Office building](http://www.ifcquery.com/img/office-building-steelwork.png)


### House model
Detailed model of a house, inside kitchen
![Office building](http://www.ifcquery.com/img/Building-model-inside-kitchen.png)
				
