/*
 * @LastEditors: qingmeijiupiao
 * @Description: 主程序，用于控制电压、电流测量、显示及按键操作等
 * @Author: qingmeijiupiao
 * @LastEditTime: 2025-02-14 11:54:54
 */
/*
                                              .=%@#=.
                                            -*@@@@@@@#=.
                                         .+%@@@@@@@@@@@@#=
                                       -#@@@@@@@* =@@@@@@@@*:
                                     =%@@@@@@@@=   -@@@@@@@@@#-
                                  .+@@@@@@@@@@-     .@@@@@@@@@@%=
                                .+@@@@@@@@@@@@-     +@@@@@@@@@@@@@+.
                               +@@@@@@@@@@@@@@@    .@@@@@@@@@@@@@@@@+.
                             =@@@@@@@@@@@@@@@%-     =%@@%@@@@@@@@@@@@@=
                           -%@@@@@@@@@@@@+..     .       -@@@@@@@@@@@@@%-
                         .#@@@@@@@@@@@@@#       -@+       +@@@@@@@@@@@@@@#:
                        +@@@@@@@@@@@@@@@@+     +@@@+     =@@@@@@@@@@@@@@@@@+
                      :%@@@@@@@@@@@@@@@@@+    *@@@@*     =@@@@@@@@@@@@@@@@@@%-
                     +@@@@@@@@@@@@@@#+*+-   .#@@@@+       :+*+*@@@@@@@@@@@@@@@*
                   :%@@@@@@@@@@@@@@+       :%@@@@-    .-       -@@@@@@@@@@@@@@@%:
                  =@@@@@@@@@@@@@@@@-      -@@@@%:    .%@+      =@@@@@@@@@@@@@@@@@=
                 *@@@@@@@@@@@@@@@@@@.    =@@@@#.    -@@@@+    =@@@@@@@@@@@@@@@@@@@#
               .%@@@@@@@@@@@@@@@@@@+    +@@@@*     =@@@@%:    .#@@@@@@@@@@@@@@@@@@@%.
              :@@@@@@@@@@@@@@@%:::.    #@@@@+     +@@@@#        .::.*@@@@@@@@@@@@@@@@-
             -@@@@@@@@@@@@@@@%       .%@@@@=     *@@@@*     +-       *@@@@@@@@@@@@@@@@=
            =@@@@@@@@@@@@@@@@@#.    -@@@@@-    :%@@@@=    .#@@+     +@@@@@@@@@@@@@@@@@@=
           =@@@@@@@@@@@@@@@@@@@:    =====.     -+===:     :====     @@@@@@@@@@@@@@@@@@@@+
          +@@@@@@@@@@@@@@@#%%#-                                     :*%%#%@@@@@@@@@@@@@@@+
         =@@@@@@@@@@@@@@%.       ...........................              *@@@@@@@@@@@@@@@=
        =@@@@@@@@@@@@@@@+      .#@@@@@@@@@@@@@@@@@@@@@@@@@@#     .*:      =@@@@@@@@@@@@@@@@-
       -@@@@@@@@@@@@@@@@@=    .%@@@@@@@@@@@@@@@@@@@@@@@@@@#     :@@@-    =@@@@@@@@@@@@@@@@@@:
      :@@@@@@@@@@@@@@@@@%.   -@@@@%+=====================:     -@@@@%    :%@@@@@@@@@@@@@@@@@@.
      %@@@@@@@@@@@@@=-=:    =@@@@#.                           +@@@@#.      -=--%@@@@@@@@@@@@@%
     #@@@@@@@@@@@@@:       +@@@@*      ............. .       *@@@@*             %@@@@@@@@@@@@@+
    =@@@@@@@@@@@@@@#.     #@@@@+     +@@@@@@@@@@@@@@@#.    .#@@@@+     +#.     +@@@@@@@@@@@@@@@:
   .@@@@@@@@@@@@@@@@-   .%@@@@=     *@@@@@@@@@@@@@@@#     :%@@@@-     *@@%:    @@@@@@@@@@@@@@@@%
   %@@@@@@@@@@@%%%#=   :@@@@@:    .#@@@@+-----------     -@@@@@:     #@@@@=    :#%%%@@@@@@@@@@@@*
  =@@@@@@@@@@@=       -@@@@%.    :%@@@@-                =@@@@%.    .%@@@@=          :%@@@@@@@@@@@:
  @@@@@@@@@@@%.      =@@@@#     -@@@@%:    .:::-:      +@@@@#     :@@@@@:    .       +@@@@@@@@@@@#
 +@@@@@@@@@@@@@.    *@@@@*     =@@@@#.    -@@@@@:     #@@@@+     =@@@@%.    -@#     +@@@@@@@@@@@@@-
.@@@@@@@@@@@@@#    *@%@%=     +@@@@*     =@@@@#.    .#@@@%=     +@@@@#     =@@@%.   =@@@@@@@@@@@@@%
+@@@@@@@@*-==-                .          .           . ..       .....      .....     .=+=+@@@@@@@@@-
%@@@@@@@+                                                                                 -@@@@@@@@#
@@@@@@@-       =#%#=     -#%%#-     -#%%*.     +%%%*.    .*%%#=     :#%%#-     =%%%*.      .#@@@@@@@
@@@@@@=.::::::*@@@@@*:::-@@@@@@-:::=@@@@@%::::*@@@@@#::::%@@@@@+:---@@@@@@=---+@@@@@%------:=@@@@@@@
=@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+
 *@@@@@@@@@@@@@@@@@@@@@@@@@@@%%##**++===----:::::------===++***##%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*
  -#@@@@@@@@@@@@@@@@%#*+=-:.                                        ..::-=+*##%@@@@@@@@@@@@@@@@@#-
    :=*%@@@@@%#*=-:                                                             .:-=+*#%%%%##+-.

          _____                   _______                   _____                    _____                _____
         /\    \                 /::\    \                 /\    \                  /\    \              /\    \
        /::\    \               /::::\    \               /::\____\                /::\    \            /::\    \
       /::::\    \             /::::::\    \             /:::/    /               /::::\    \           \:::\    \
      /::::::\    \           /::::::::\    \           /:::/    /               /::::::\    \           \:::\    \
     /:::/\:::\    \         /:::/~~\:::\    \         /:::/    /               /:::/\:::\    \           \:::\    \
    /:::/  \:::\    \       /:::/    \:::\    \       /:::/    /               /:::/__\:::\    \           \:::\    \
   /:::/    \:::\    \     /:::/    / \:::\    \     /:::/    /               /::::\   \:::\    \          /::::\    \
  /:::/    / \:::\    \   /:::/____/   \:::\____\   /:::/    /      _____    /::::::\   \:::\    \        /::::::\    \
 /:::/    /   \:::\    \ |:::|    |     |:::|    | /:::/____/      /\    \  /:::/\:::\   \:::\____\      /:::/\:::\    \
/:::/____/     \:::\____\|:::|____|     |:::|____||:::|    /      /::\____\/:::/  \:::\   \:::|    |    /:::/  \:::\____\
\:::\    \      \::/    / \:::\   _\___/:::/    / |:::|____\     /:::/    /\::/    \:::\  /:::|____|   /:::/    \::/    /
 \:::\    \      \/____/   \:::\ |::| /:::/    /   \:::\    \   /:::/    /  \/_____/\:::\/:::/    /   /:::/    / \/____/
  \:::\    \                \:::\|::|/:::/    /     \:::\    \ /:::/    /            \::::::/    /   /:::/    /
   \:::\    \                \::::::::::/    /       \:::\    /:::/    /              \::::/    /   /:::/    /
    \:::\    \                \::::::::/    /         \:::\__/:::/    /                \::/____/    \::/    /
     \:::\    \                \::::::/    /           \::::::::/    /                  ~~           \/____/
      \:::\    \                \::::/____/             \::::::/    /
       \:::\____\                |::|    |               \::::/    /
        \::/    /                |::|____|                \::/____/
         \/____/                  ~~                       ~~

*/
#include <Arduino.h>
#include "static/PINS.h"
#include "static/powerctrl.hpp"// 电源控制
#include "static/TemperatureSensor.hpp"// 温度传感器
#include "static/buzz.hpp"// 蜂鸣器
#include "WIRELESSCTRL.hpp"// 无线控制
#include "BUTTONS.hpp"// 按键
#include "SCREEN.hpp"// 屏幕
#include "shell.hpp"// 串口命令行
#include "web.hpp"// 网页
// 初始化各种模块
POWERCTRL_t power_output(PowerPin);           // 电源控制
TemperatureSensor_t Temperature_sensor;       // 温度传感器
BUZZ_t buzz(BUZZER_PIN);                      // 蜂鸣器

// 初始化程序
void setup() {
    Serial.begin(115200); // 初始化串口

    // /*↓↓↓↓↓↓↓初始化相关外设↓↓↓↓↓↓↓*/
    Temperature_sensor.setup();//温度传感器初始化
    power_output.setup();//电源控制初始化
    power_output.off();//插电默认关闭电源
    buzz.setup();//蜂鸣器初始化
    OTHER_FUNCTION::protect_init();//保护初始化
    web_setup("HXC","",WIFI_MODE_AP);//网页初始化
    /*初始化相关外设*/


    /*↓↓↓↓↓↓↓创建后台任务↓↓↓↓↓↓↓*/
    BUTTON::button_detect_thread.start("button_detect",/*stacksize=*/512);// 按键任务
    POWERMETER::updatePower_thread.start("updatePower");// 电压电流更新任务
    SCREEN::updatescreen_thread.start("updatescreen",/*stacksize=*/8192);// 屏幕更新任务
    SHELL::shell_thread.start("shell",/*stacksize=*/2048);// 串口命令行任务
    /*↑↑↑↑↑↑↑↑创建后台任务↑↑↑↑↑↑*/
    delay(2000);// 延时防止重启
    WIRELESSCTRL::wireless_ctrl_setup();// 无线控制初始化
    shell.println("hello shell");
}

// Arduino主循环,本项目不使用
void loop() {}
