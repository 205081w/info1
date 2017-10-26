#!/usr/bin/perl

$CSVFILE = "meibo_tmp.csv";

opendir(DIRHANDLE, "./");

foreach(readdir(DIRHANDLE)) {
    next if /^\.{1,2}$/;
    next if /Makefile/;
    next if /test.pl/;
    next if /meibo/;
    next if /test.sh/;
    next if /make.sh/;
    next if /clean.sh/;
    next if /2017/;

    $name = $_;
    if ($name =~ s/\((.*?)\)/$1/) {
        $name = $1;
    }

    open(IN, $CSVFILE) || die "$CSVFILE $!";

    while ($line = <IN>) {
        if ($line =~ /$name/) {
            $id = $line;
            if ($id =~ s/\[(.*?)\]/$1/) {
                $id = $1;
            }
            last;
        }
    }
    #print "$id, $name\n";
    close(IN);

    $subdir = $id."_dir";
    rename($_, $subdir);

    system("cp Makefile_tmp ".$subdir."/Makefile");
    system("cp test.sh ".$subdir."/test.sh");

    opendir($SUB, $subdir);
    @files = map { -f $subdir."/$_" ? $_ : ''} readdir($SUB);
    closedir($SUB);
    if ($files[2] =~ /hat/) {
        open (IN, $subdir."/Makefile") or die "$!";
        @data = <IN>;
        close(IN);

        open (OUT, ">".$subdir."/Makefile") or die "$!";
        for (@data) {
            $_ =~ s/Hat/hat/g;
            print OUT $_;
        }
        close(OUT);
    } 
}

closedir(DIRHANDLE);

