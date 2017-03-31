clear;
filename = 'test_500hz';

fileID = fopen(strcat(filename,'.bin'),'r');
A = fread(fileID,'uint16');
fclose(fileID);

fileID = fopen(strcat(filename,'.txt'),'w');
n = 1;
i = 1;
while i<=size(A,1)
    temp = sprintf('%07d\t%.3f\t%.3f\n',n,A(i)*3.3/4095,A(i+1)*3.3/4095);
    fwrite(fileID, temp);
    n = n + 1;
    i = i + 2;
end
fclose(fileID);