#include "Character_Lib.h"
using namespace std;

struct Character_Data
{
    double Character_Value;//角色基础数值
    double Weapon_Value;//武器基础数值
    double Percent_Weapon_Extra_Value;//武器额外加成数值百分比
    double Percent_Value;//百分比数值加成
    double Fixed_Value;//固定数值加成
    double Percent_Critical_Chance;//暴击率
    double Percent_Critical_Value;//暴击伤害
    double Percent_Stat;//角色对应属性百分比加成
    double Percent_Skill_Boost;//角色技能百分比加成
    double Percent_Skill_Rate;//对应技能倍率百分比
    double Percent_Rate_add;//技能倍率提升百分比
    double Percent_Hurt_Deeper;//角色伤害加深百分比
    int    Character_Level;//角色等级
    int    Character_Skill_Level;//角色技能等级
    string Character_Name;//角色姓名

};
Character_Data  Character_Lib()
{
    int C_Rarity;
    int C_Num;

    cout << "当前为角色稀有度选择界面，请输入角色的星级：" << endl;
    cin >> C_Rarity;

    switch (C_Rarity)
    {
    case 4:
        cout << "当前为四星角色选择界面，请根据下表输入对应角色的序号:" << endl;
        cout << "1.桃祈  \t2.渊武  \t3.莫特斐  \t4.丹瑾" << endl;
        cout << "5.秋水  \t6.散华  \t7.炽霞  \t8.白芷" << endl;
        cout << "9.秧秧  \t10.釉瑚  \t" << endl;

        cin >> C_Num;
        switch (C_Num)
        {
        case 1:
            return { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,"桃祈" };
            break;
        }
        break;

    case 5:
        cout << "当前为五星角色选择界面，请根据下表输入对应角色的序号：" << endl;
        cout << "1.漂泊者（）\t2.漂泊者（）\t3.漂泊者（）\t4.漂泊者（）" << endl;
        cout << "5.漂泊者（）\t6.漂泊者（）\t7.漂泊者（）\t8.漂泊者（）" << endl;
        cout << "9.凌阳  \t10.维里奈  \t11.安可   \t12.卡卡罗" << endl;
        cout << "13.鉴心  \t14.忌炎   \t15.吟霖   \t16.今汐" << endl;
        cout << "17.长离  \t18.折枝   \t19.相里要  \t20.守案人" << endl;
        cin >> C_Num;

        switch (C_Num)
        {
        case 16:
            return { 412,587,0.243,1.005,440,0.748,2.594,0.75,0.487,3.4792,0,0,90,10 ,"今汐" };
            break;

        default:cout << "请输入正确的数字！" << endl;
            return { 0,0,0,0,0,0,0,0,0,0,0,0,0,0 ," 0" };
            break;
        }
        break;

    }
}