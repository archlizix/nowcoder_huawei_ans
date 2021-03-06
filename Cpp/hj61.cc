/*!
    \file      hj61.cc
    \author    Archlizix (archlizix@qq.com)
    \brief     HJ61 放苹果
    \version   1.0
    \date      2021-11-11

    \copyright Copyright (C) 2021 Archlizix

    \note
*/

#include <iostream>
#include<vector>

int main(void)
{
	int m, n;
	while (std::cin >> m >> n) {
		std::vector<std::vector<int>>dp(m + 1, std::vector<int>(n + 1));
		for (int i = 1; i <= m; i++) { //apple
			for (int j = 1; j <= n; j++) { //plate
				if (i > j) {
					dp[i][j] = dp[i][j - 1] + dp[i - j][j];
				} else if (i == j) {
					dp[i][j] = dp[i][j - 1] + 1;
				} else {
					dp[i][j] = dp[i][i];
				}
			}
		}
		std::cout << dp[m][n] << std::endl;
	}
	return 0;
}
