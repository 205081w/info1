
opendir(DIRHANDLE, "./");

foreach(readdir(DIRHANDLE)) {
    next if /^\.{1,2}$/;
    next if /Makefile/;
    next if /test.pl/;
    next if /2017/;

    $name = $_;
    if ($name =~ s/\((.*?)\)/$1/) {
        $name = $1;
    }
    #print "$name\n";

    rename($_, $name."_file");
    #system("cp Makefile_tmp ".$name);
}

closedir(DIRHANDLE);

