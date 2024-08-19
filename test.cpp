#include<iostream>
#include<string>
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
int main()
{
    Character_Data C1;
    int C_Rarity = 0;
    int C_Num = 0;
    C1 = Character_Name(C_Rarity, C_Num);
    double Final_Value = (1 + C1.Percent_Value) * (C1.Weapon_Value + C1.Character_Value) + C1.Fixed_Value;
    cout << "您选择的角色名称为：" << C1.Character_Name << endl;
    cout << "该角色等级为：" << C1.Character_Level << endl;
    cout << "该角色的基础攻击力为：" << C1.Character_Value << endl;
    cout << "该角色的暴击率为：" << C1.Percent_Critical_Chance << endl;
    cout << "该角色的暴击伤害为：" << C1.Percent_Critical_Value << endl;
    cout << "该角色的武器基础攻击力为：" << C1.Weapon_Value << endl;
    cout << "该角色使用的这把武器的额外属性为：" << C1.Percent_Weapon_Extra_Value << endl;
    cout << "该角色的固定攻击力加成为：" << C1.Fixed_Value << endl;
    cout << "该角色的面板攻击力为：" << Final_Value << endl;
    cout << "该角色的技能等级为:" << C1.Character_Skill_Level << endl;
    cout << "该角色的技能倍率为：" << C1.Percent_Skill_Rate << endl;

    return 0;
}