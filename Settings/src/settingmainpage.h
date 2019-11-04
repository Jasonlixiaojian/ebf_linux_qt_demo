/******************************************************************
 Copyright (C) 2019 - All Rights Reserved by
 文 件 名 : settingmainpage.h --- SettingMainPage
 作 者    : Niyh(lynnhua)
 论 坛    : http://www.firebbs.cn
 编写日期 : 2019
 说 明    :
 历史纪录 :
 <作者>    <日期>        <版本>        <内容>
  Niyh	   2019    	1.0.0 1     文件创建
*******************************************************************/
#ifndef SETTINGMAINPAGE_H
#define SETTINGMAINPAGE_H

#include <QWidget>

/////////////////////////////////////////////////////////////////////////////
class SettingMainPage : public QWidget
{
    Q_OBJECT
public:
    explicit SettingMainPage(QWidget *parent = 0);
    ~SettingMainPage();

signals:
    void signalChangePage(int index);
    void signalChangeCursorShape(Qt::CursorShape);

private slots:
    void SltSwitchClicked(bool on);

private:
    void InitWidget();
};

#endif // SETTINGMAINPAGE_H
