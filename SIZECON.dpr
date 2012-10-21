program SIZECON;

{$APPTYPE CONSOLE}

var j,s,n:int64;
begin
read(n);repeat
read(j);s:=s+j*ord(j>0);
dec(n)until n=0;
write(s)
end.
