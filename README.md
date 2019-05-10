FM-index of alignment
=======

Requirements
-------
[Succinct Data Structures Library 2.0](https://github.com/simongog/sdsl-lite) (SDSL)

Installation
-------
To complie, set `SDSL_DIR` in the makefile to point to your SDSL directory.  

```
git clone https://github.com/SNUCSE-CTA/FMA
cd FMA
make all
```

Running example in [4]
-------   
  
**Build FM-index of alignment**  
Set `saa_dens` and `isaa_dens` in buildFMA.cpp, locate.cpp, and extract.cpp same as `sampling_rate` of SAA. (default: 32)
```
mkdir example/output

#./buildSAA sampling_rate reference_file vcf_file output_directory [num_threads]
./buildSAA 32 example/example_reference example/example.vcf ./example/output/ 8

#./buildFMA saa_directory num_strings output_directory
./buildFMA ./example/output/ 4 ./example/output/
```
**Locate**  
```
#./locate saa_directory fma_directory num_strings pattern_file
./locate ./example/output/ ./example/output/ 4 ./example/locate_example.txt > ./example/output/result_locate.txt
```
**Extract**  
```
#./extract saa_directory fma_directory num_strings pattern_file pattern_size
./extract ./example/output/ ./example/output/ 4 ./example/extract_example.txt 4 > ./example/output/result_extract.txt
```

Data
------
[chr1.tar.gz](http://theory.snu.ac.kr/data/chr1.tar.gz) (61MB)  
[3.chr1.vcf.tar.gz](http://theory.snu.ac.kr/data/3.chr1.vcf.tar.gz) (20MB)  
[100.chr1.vcf.tar.gz](http://theory.snu.ac.kr/data/100.chr1.vcf.tar.gz) (495MB)  
[250.chr1.vcf.tar.gz](http://theory.snu.ac.kr/data/250.chr1.vcf.tar.gz) (1.5GB)  
[500.chr1.vcf.tar.gz](http://theory.snu.ac.kr/data/500.chr1.vcf.tar.gz) (3.8GB)  
[locate pattern](http://theory.snu.ac.kr/data/locate.tar.gz)  
[extract pattern](http://theory.snu.ac.kr/data/extract.tar.gz)  



References
-------
[1] Joong Chae Na, Heejin Park, Maxime Crochemore, Jan Holub, Costas S. Iliopoulos, Laurent Mouchard, and Kunsoo Park. **Suffix tree of alignment: An efficient index for similar data**, In International Workshop on Combinatorial Algorithms, 8288:337-348, Springer, Berlin, Heidelberg, 2013. [DOI: 10.1007/978-3-642-45278-9_29](https://doi.org/10.1007/978-3-642-45278-9_29)

[2] Joong Chae Na, Heejin Park, Sunho Lee, Minsung Hong, Thierry Lecroq, Laurent Mouchard, and Kunsoo Park. **Suffix array of alignment: A practical index for similar data**, In International Symposium on String Processing and Information Retrieval, 8214:243-254, Springer, Cham, 2013. [DOI: 10.1007/978-3-319-02432-5_27](https://doi.org/10.1007/978-3-319-02432-5_27)

[3] Joong Chae Na, Hyunjoon Kim, Heejin Park, Thierry Lecroq, Martine Léonard, Laurent Mouchard, and Kunsoo Park. **FM-index of alignment: A compressed index for similar strings**, Theoretical Computer Science 638:159-170, 2016. [DOI: 10.1016/j.tcs.2015.08.008](https://doi.org/10.1016/j.tcs.2015.08.008)

[4] Joong Chae Na, Hyunjoon Kim, Seunghwan Min, Heejin Park, Thierry Lecroq, Martine Léonard, Laurent Mouchard, and Kunsoo Park. **FM-index of alignment with gaps**, Theoretical Computer Science 710:148-157, 2018. [DOI: 10.1016/j.tcs.2017.02.020](https://doi.org/10.1016/j.tcs.2017.02.020)


