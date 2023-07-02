#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include "logout.h"
#include "join.h"
#include "send_message.h"
#include "createchannel.h"
#include "creategroup.h"
#include"getuserlist.h"
#include "logout.h"
#include"getgrouplist.h"
namespace Ui {
class mainpage;
}

class mainpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);
    ~mainpage();

private slots:
    void on_actionLogout_triggered();

    void on_actionJoin_2_triggered();

    void on_actionJoin_triggered();

    void on_actionContacts_send_triggered();

    void on_actionSend_message_triggered();

    void on_actionSend_message_2_triggered();

    void on_actionCreate_triggered();

    void on_actionCreate_2_triggered();

    void on_actionShow_my_chat_triggered();

    void on_actionChannel_messages_triggered();

    void on_actionMy_group_messages_triggered();

    void on_actionShow_my_users_triggered();

    void on_actionMy_groups_triggered();

private:
    Ui::mainpage *ui;
    Logout *logout;
    join *Join2;
    Send_message *send_message;
    createchannel*Createchannel;
    creategroup*Creategroup;
    getuserlist*Getuserlist;
    Logout *ch_messege;
     Logout *c_messege;
     Logout *g_messege;
     getgrouplist*Getgrouplist;
};

#endif // MAINPAGE_H
