
opendir(DIRHANDLE, "./");

foreach(readdir(DIRHANDLE)) {
    next if /^\.{1,2}$/;
    next if /Makefile/;
    next if /test.pl/;
    next if /test.sh/;
    next if /2017/;

    $name = $_;
    if ($name =~ s/\((.*?)\)/$1/) {
        $name = $1;
    }
    $name =~ s/[\s ]+//g;
    #print "$name\n";

    rename($_, $name."_dir");
    system("cp Makefile_tmp ".$name."_dir/Makefile");
    system("cp test.sh ".$name."_dir/test.sh");
}

closedir(DIRHANDLE);

