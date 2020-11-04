#pragma once
class uav_Pos_Info : public QObject
{
	Q_OBJECT
		Q_PROPERTY(QJsonObject jsonData MEMBER m_jsonData NOTIFY dataChanged)
public:
	//explicit uav_Pos_Info (QObject* parent = nullptr);
signals:

	void dataChanged(const QJsonObject& jsonData);
private:
	QJsonObject m_jsonData;
};