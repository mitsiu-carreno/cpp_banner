# Banner
## Description
This project aims to receive a string and display a bigger and stylized version of such string

## Structure
Folder | Description | File extension
------ | ----------- | --------------
bin/   | Contains the executable | .exe    
build/ | Contains object files (compile result) | .o 
include/ | Contains header files | .h .hpp
src/   | Contains source code files | .cpp

## Make
Compile, link and run 
```bash
$ make -j 
```
         
Run previous executable
```bash
$ make run
```
      
Erase previous executable
```bash
$ make clean
```
        
Erase previous executable and compiled files
```bash
$ make hardclean
```

## Visual Studio Integration
1. Clone
  1. Tareas iniciales -> Continuar sin código
  2. Ver -> Team explorer
  3. Repositorios GIT locales -> Clonar
  4. https://github.com/mitsiu-carreno/cpp_banner.git (Checar ubicación local && Check Submódulos de clonación recursiva)
  5. Ver -> Team explorer
  6. Repositorios GIT locales -> cpp_banner
  7. Proyecto -> Ramas -> remotes/origin -> develop
  8. Team explorer -> Repositorios GIT locales -> cpp_banner -> Soluciones -> Nueva
  9. Proyecto vacío (Consola, C++, Windows)
  10. Nombre de proyecto: vs_sln
  11. Ubicación: (misma de repo)
  12. Solucion: Crear nueva solucion
  13. Check Colocar la solucion y proyecto en el mismo directorio
  14. Ver -> Explorador de soluciones (vs_sln.sln)
  15. Archivos de origen -> vs_sln -> Propiedades
  16. Propiedades de configuración -> Directorios de VC++ 
  17. Directorios de archivos de inclusión -> Editar
  18. Nueva línea -> Repo_folder/include

2. Add existing files to workplace
  1. Ver -> Explorador de soluciones -> Alternar vistas -> vs_sln.sln
  2. Archivos de origen -> Agregar -> Elemento existente

3. Add new files to workplace
  1. Ver -> Explorador de soluciones -> Alternar vistas -> cpp_banner
  2. Seleccionar carpeta (src/ include/) -> Agregar -> Nuevo archivo
  3. Ver -> Explorador de soluciones -> Alternar vistas -> vs_sln.sln
  4. Archivos de origen -> Agregar -> Elemento existente

4. Git integration
  1. Ver -> Team explorer -> Cambios
  2. Rama: develop -> Enter a message (descripción de commit) -> Confirmar todo
  3. Ver -> Team explorer -> Sincronización -> Confirmaciones de salida -> Insertar

## Art
@ildanilo
