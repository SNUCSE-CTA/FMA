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

Running example
-------
**Build FM-index of alignment**  
Set `saa_dens` and `isaa_dens` in buildFMA.cpp, locate.cpp, and extract.cpp same as `sampling_rate` of SAA. (default: 32)
```
cd example/
tar -zxvf data.tar.gz
mkdir output
cd ../

#./buildSAA sampling_rate reference_file vcf_file output_directory [num_threads]
./buildSAA 32 example/hs37d5.chr1 example/3.chr1.vcf ./example/output/

#./buildFMA saa_directory num_strings output_directory
./buildFMA ./example/output/ 7 ./example/output/
```
**Locate**  
```
#./locate saa_directory fma_directory num_strings pattern_file
./locate ./example/output/ ./example/output/ 7 ./example/locate_S7_L10.txt > ./example/output/result_locate.txt
```
**Extract**  
```
#./extract saa_directory fma_directory num_strings pattern_file pattern_size
./extract ./example/output/ ./example/output/ 7 ./example/extract_S7_L10.txt 10 > ./example/output/result_extract.txt
```
References
-------
Joong Chae Na, Hyunjoon Kim, Heejin Park, Thierry Lecroq, Martine Léonard, Laurent Mouchard, and Kunsoo Park. **FM-index of alignment: A compressed index for similar strings**, Theoretical Computer Science 638:159-170, 2016. [DOI: 10.1016/j.tcs.2015.08.008](https://doi.org/10.1016/j.tcs.2015.08.008)

Joong Chae Na, Hyunjoon Kim, Seunghwan Min, Heejin Park, Thierry Lecroq, Martine Léonard, Laurent Mouchard, and Kunsoo Park. **FM-index of alignment with gaps**, Theoretical Computer Science 710:148-157, 2018. [DOI: 10.1016/j.tcs.2017.02.020](https://doi.org/10.1016/j.tcs.2017.02.020)


