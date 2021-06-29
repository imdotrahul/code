DECLARE
a number;
b number;
c number;
d number;
e number;
average float;
summ number;
BEGIN
a:=10;
b:=50;
c:=70;
d:=25;
e:=33;

summ:=(a+b+c+d+e);
average:=summ/5;
dbms_output.Put_line(summ);
dbms_output.Put_line(average);
end;
/