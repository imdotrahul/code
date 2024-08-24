#include<iostream>
using namespace std;

class Log{
    public:
        const int LogLevelError = 0;

        const int LogLevelWarning = 1;
        const int LogLevelInfo = 2;

    private:
       int  m_loglevel = LogLevelError;
    public:
        void SetLogLevel(int Level){
            m_loglevel = Level;

        }
        void Error(const char* message)
        {
            if(m_loglevel>=LogLevelError)
            
                cout<<"[Error]: "<< message<<"\n";

        }
        void Warn(const char* message)
        {
            if(m_loglevel>=LogLevelWarning)
                cout<<"[Warning]: "<< message<<"\n";

        }
        void Info(const char* message)
        {
            if(m_loglevel>=LogLevelInfo)
                cout<<"[Info]: "<< message<<"\n";

        }

};

int main()
{
    Log log;
    log.SetLogLevel(log.LogLevelError);
    log.Warn("Hell0");
    log.Info("Hello");
    log.Error("Hello");
}
