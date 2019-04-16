# Struktur Data C++

Berikut adalah beberapa source code dari hasil praktek mata kuliah struktur data.

## Compile dengan C++

 Install terlebih dahulu compiler untuk c++ nya, jika anda menggunakan linux biasanya sudah terinstall. Namun untuk windows anda dapat mengikuti instruksi seperti pada link [disini](https://www.ics.uci.edu/~pattis/common/handouts/mingweclipse/mingw.html "Tutorial Instalasi di Windows")

 ```bash
    //untuk windows
    g++  namafile.cpp -o namafile.exe
    //untuk linux
    g++  namafile.cpp -o namafile
 ``` 

 secara default g++ mencompile dengan standar 98 jika anda ingin mengcompile menggunakan standar  yang baru anda dapat menambahkan flag -std sebagai berikut :

 ```bash
    g++ -std=c++11 namafile.cpp -o namafile.exe
 ```
 standar yang tersedia adalah c++11 c++14 c++17  c++0x

adapun untuk mengcompile beberapa file menjadi satu anda dapat melakukan hal berikut : 

```bash
    g++ file1.cpp file2.cpp fileN.cpp -o output.exe
    //atau
    g++ -std=c++11 file1.cpp file2.cpp fileN.cpp -o output.exe
```


## Sumber Materi

untuk sumber materi berupa slide bisa klik [disini](https://anditya.staff.telkomuniversity.ac.id/academic/asd/)


# List of Practical Data Strucutre

* [x] Singgle Linked List
* [x] Double Linked List
* [x] Circular Linked List
* [ ] Multi Linked List
* [x] Stack
    * [x] Stack List Version
    * [x] Stack Array Version
* [x] Queue
    * [x] List Version
    * [x] Array Version
        * [x] Versi 1
        * [x] Versi 2
        * [x] Versi 3
* [x] Tree
* [x] Graph 

## Authors

* **Adzkar Fauzie** | [Github](https://github.com/adzkar/)
* **Rakha Dzakki**  | [Github](http://github.com/rakhadzaky/)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
