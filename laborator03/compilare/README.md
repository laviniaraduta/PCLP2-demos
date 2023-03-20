# Etapele compilarii

- Pentru a compila si a pastra toate fisierele temporare generate in fiecare etapa a procesului de compilare putem folosi comanda:
    ``` 
    gcc --save-temps test.c -o test 
    gcc --save-temps -m32 -masm=intel test.c -o test # pentru sintaxa intel pe 32 de biti
    ```
# Inspectarea fisierelor:
- Afisarea simbolurilor dintr-un fisier obiect/executabil: _nm_
    ```
    nm test.o
    nm test
    ```

- Afisarea codului dezasamblat: _objdump_
    ```
    objdump -M intel -d test.o
    objdump -M intel -d test
    ```
- Inspectarea fisierelor obiect/executabile: _readelf_ 
    ```
    readelf -h test.o # afisare header
    realelf -h test
    readelf -S test.o # afisare sectiuni
    readelf -S test
    ```
- 

    
