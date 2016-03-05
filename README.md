# FunctorFun
Explore the fascinating syntax of C++ functors, as illustrated by the boost::program_options library

## Intro

I recently worked on a C++ project in which the boost::program_options library is used to parse a config file.  Great stuff: do the messy work in a well-vetted library, etc.  But I found myself baffled by the what that options are described.  From the [Boost doc on program options](http://www.boost.org/doc/libs/1_60_0/doc/html/program_options/tutorial.html):

```
int opt;
po::options_description desc("Allowed options");
desc.add_options()
    ("help", "produce help message")
    ("optimization", po::value<int>(&opt)->default_value(10), 
  "optimization level")
    ("include-path,I", po::value< vector<string> >(), 
  "include path")
    ("input-file", po::value< vector<string> >(), "input file")
;
```

Note that this is not a file fed to a preprocessor, but instead legitimate C++ code.  And I could not figure out how this could possible compile -- or even the order in which operands are analyzed. Heck, it looks more like LISP than C++.

Thankfully, Google gave me an [explanation from the Stack Overflow forum](http://www.boost.org/doc/libs/1_60_0/doc/html/program_options/tutorial.html).

In this project, I attempt to replicate some of the functor behavior shown by the Boost library.

## Building

I developed this project on 64-bit Linux Mint 17.2.

The compiler was g++ (Ubuntu 4.9.3-8ubuntu2~14.04) 4.9.3.

The test project assumes that the Boost Unit Test Framework is installed on your system.

After cloning the project, you can build, run, and test it using *make*:

```
make clean run test
```

The executable created by this project is called *main*.  When you execute main, the expected output is:

```
$ ./main
Let the Functor Fun begin!
str is 'hello world'
int is '31416'
Done.
```
