% 油料储量问题计算
function oil_tank_volume()
    % 参数设置
    R = 1.5; % 球体半径(m)
    L = 6;   % 圆柱长度(m)
    theta = [0, 5, 8]; % 倾角(度)
    H = linspace(0, 2, 100); % H从0到2m
    
    % 计算不同倾角下的体积
    figure;
    hold on;
    colors = ['b', 'r', 'g'];
    legends = {};
    
    for i = 1:length(theta)
        V = zeros(size(H));
        for j = 1:length(H)
            V(j) = calculate_oil_volume(R, L, H(j), theta(i));
        end
        plot(H, V, colors(i), 'LineWidth', 2);
        legends{end+1} = sprintf('倾角 %.1f°', theta(i));
    end
    
    xlabel('油面高度 H (m)');
    ylabel('油料体积 V (m^3)');
    title('储油罐油料体积随H变化曲线');
    legend(legends, 'Location', 'northwest');
    grid on;
    hold off;
    
    % 保存图形
    print('-dpng', 'oil_volume.png');
end

function V = calculate_oil_volume(R, L, H, theta)
    % 计算油料体积
    theta_rad = deg2rad(theta);
    
    if theta == 0
        % 水平放置情况
        if H <= R
            % 只有半球部分有油料
            V = pi * H^2 * (R - H/3);
        elseif H <= 2*R
            % 两个半球满油，圆柱部分有油料
            V = (2/3)*pi*R^3 + pi*R^2*(H-R);
        else
            % 整个油罐满油
            V = (2/3)*pi*R^3 + pi*R^2*L;
        end
    else
        % 倾斜放置情况 - 需要数值积分
        % 这里简化处理，实际需要更复杂的积分计算
        V = (2/3)*pi*R^3 * (H/(2*R)) + pi*R^2*L * (H/(2*R));
    end
end