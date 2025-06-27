% 土方量计算
function earthwork_calculation()
    % 读取数据
    data = readmatrix('coords.csv');
    x = data(:,1);
    y = data(:,2);
    z = data(:,3);
    
    % 创建Delaunay三角网格
    tri = delaunay(x, y);
    
    % 计算平整高程（平均高程）
    base_level = mean(z);
    excavation_level = base_level - 2.5; % 开挖2.5m
    
    % 计算每个三棱柱的体积
    total_volume = 0;
    excavation_volume = 0;
    
    for i = 1:size(tri,1)
        % 获取三角形顶点
        idx = tri(i,:);
        x_tri = x(idx);
        y_tri = y(idx);
        z_tri = z(idx);
        
        % 计算三角形面积
        area = polyarea(x_tri, y_tri);
        
        % 计算平均高程差
        avg_height = mean(z_tri) - base_level;
        avg_excavation = base_level - excavation_level;
        
        % 累加体积
        total_volume = total_volume + area * avg_height;
        excavation_volume = excavation_volume + area * avg_excavation;
    end
    
    fprintf('平整土方量: %.2f m³\n', total_volume);
    fprintf('开挖2.5m土方量: %.2f m³\n', excavation_volume);
    
    % 绘制地形图
    figure;
    trisurf(tri, x, y, z);
    xlabel('X坐标');
    ylabel('Y坐标');
    zlabel('高程');
    title('地形三角网格模型');
    colorbar;
    print('-dpng', 'terrain_model.png');
end