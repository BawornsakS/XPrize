function g_out = myGraph(bw,x_cm,per)

% myGraph  function have 3 Argument
%   C = myGraph(pgm_file,x-axis_length,x-axis_pixel_length) adds A to itself.
%   
%   pgm_file : will accept any portable gray map file (.pgm)
%   x-axis_length : you need to determine your own map x-axis length (centimeter)
%   x-axis_pixel_length : determine the scale of each pixel (centimeter)
%   
I=imread(bw);
[H L]=size(I);

cm_per_pix = x_cm/per;
res = cm_per_pix/L;

res=imresize(I,res);
BB=im2bw(res,0.9);

gg = binaryImageGraph(BB);
plotImageGraph(gg);
adj = adjacency(gg,'weighted'); %Convert graph to Adjancency 
adjM = full(adj); %Make Adjancency Matrix
[row col v] = find(adj);
dlmwrite('myAdjacent.txt',[col row v], 'delimiter', '\t')
gnode = gg.Nodes;
gedge = gg.Edges;
writetable(gnode,'myNodes.txt','Delimiter',' '); %Write down Node in Txt File
writetable(gedge,'myEdges.txt','Delimiter',' '); %Write down Edge in Txt File
dlmwrite('myAdjacent.txt',[col row v], 'delimiter', '\t') %Write down Adjacent Sparse in Txt File
writematrix(adjM,'myAdjacentMatrix.txt','Delimiter',' '); %Write down Adjacent Matrix in Txt 
num_nodes = numnodes(gg);%num of node avaliable