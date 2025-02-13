program sum;
  var s,i:integer
begin
  s:=0;
  i:=0;
  while (i <= 9)  do
  begin
    s:=s+i;
    i:=i+1;
  end;
  Writeln('la somme est : ', s);
end.