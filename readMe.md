
# <center>C Stack</center>

C dilinde doğrudan bulunmayan `stack` veri yapısını, dinamik bellek yönetimi kullanarak oluşturan bir C programıdır.


## İçindekiler
- [Çalışma Mantığı](#çalışma-mantığı)
- [Proje Gereksinimleri](#proje-gereksinimleri)  
- [El İle Koşturma](#el-ile-koşturma)  
- [El ile Derleme](#el-ile-derleme)  
- [Kodu Derleme](#kodu-derleme)  
  

## Çalışma Mantığı

Stack yapımız için başlangıçta belirli bir sınır ile `malloc` kullanarak bellek tahsis ediyoruz. Eğer bu sınır aşılırsa, bellek alanını `altın oran (1.5)` katı kadar genişleterek daha verimli ve optimize bir şekilde çalışmasını sağlıyoruz. Programın sonunda ise `free` komutu ile ayrılan belleği serbest bırakarak bellek sızıntısını önlüyoruz.


## Proje Gereksinimleri

### Kod derleme araçları

```
gcc
```

## Desteklenen İşletim Sistemleri

- Windows
- Linux

## El ile Koşturma

### Windows

```
./stack.exe
```

### Linux

```
./stack.o
```

## El ile Derleme

### Gereksinimleri İndirme

#### Fedora

```
sudo dnf install gcc
```

#### Ubuntu

```
sudo apt-get install gcc
```

#### Windows

```
Mingw64-gcc
```

### Kodu Derleme

#### Windows
```
gcc -o stack.exe stack.c
```

#### Windows
```
gcc -o stack.o stack.c
```

## Makefile

### Derleme

```
make compile
```

### Koşturma

```
make run
```

### Derleme&Koşturma
```
make all
```