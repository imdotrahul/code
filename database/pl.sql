DECLARE
a number;
b number;
c number;
average float;
summ number;
BEGIN
a:=&a;
b:=&b;
c:=&c;


summ:=(a+b+c);
average:=summ/5;
dbms_output.Put_line(summ);
dbms_output.Put_line(average);
end;
/