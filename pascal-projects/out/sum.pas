program sum;
        var s,i:integer;
begin
        s:=0;
        i:=0;
        while(i <= 9) do
        begin
                s:=s+i;
                i:=i+1;
        end;
        writeln('la somme est : ', s);
        readln(s);
end.
