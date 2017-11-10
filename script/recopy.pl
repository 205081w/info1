#!/usr/bin/perl

opendir(DIRHANDLE, "./");

foreach(readdir(DIRHANDLE)) {
    next if /^\.{1,2}$/;
    next if /Makefile/;
    next if /test.pl/;
    next if /recopy.pl/;
    next if /meibo/;
    next if /test.sh/;
    next if /make.sh/;
    next if /clean.sh/;
    next if /2017/;

    $subdir = $_;

    system("cp Makefile_tmp ".$subdir."/Makefile");
    system("cp test.sh ".$subdir."/test.sh");

}

closedir(DIRHANDLE);

