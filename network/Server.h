#include <QtNetwork>
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class Server: public QObject
{
    Q_OBJECT
    public:
      Server(QObject * parent = 0);
      ~Server();
    public slots:
      void acceptConnection();
      void startRead();
      void simStepMsg(int curStep, float sceneRotation);
      void closeClient();
    private:
      QTcpServer server;
      QTcpSocket* client;
      int simStep;
};
