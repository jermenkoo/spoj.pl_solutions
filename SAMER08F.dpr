program SAMER08F;

{$APPTYPE CONSOLE}

uses
  SysUtils;

var n, res : integer;

begin
    readln(n);
    if n = 0 then Exit;
    repeat;
        writeln(n * (n + 1) * (2 * n + 1) div 6);
        readln(n);
    until n = 0;
end.
