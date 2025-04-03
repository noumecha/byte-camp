program sumv2;
  var s,i:integer;
begin
  s:=0;
  i:=0;
  repeat
    s:=s+i;
    i:=i+1;
  until (i <= 9);
  WriteLn('la somme est : ',s);
end.