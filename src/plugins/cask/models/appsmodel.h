#ifndef APPSMODEL_H
#define APPSMODEL_H

#include <QObject>
#include <MauiKit/mauilist.h>

class AppsModel : public MauiList
{
    Q_OBJECT
public:
    AppsModel(QObject *parent = nullptr);
    FMH::MODEL_LIST items() const override;

private:
    FMH::MODEL_LIST m_data;
    void setList();
};

#endif // APPSMODEL_H