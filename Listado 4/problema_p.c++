#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class Message {
    string mensaje;
    int id_sec;
public: 
    Message() {}
    Message(const string& texto, int id){
        mensaje = texto;
        id_sec=id;
    }
    const string& get_text() {
        return mensaje;
    }

    bool operator<(const Message& otro) const {
        //comparamos las id de secuencia de creacion
        return this->id_sec < otro.id_sec;
    }
};

class MessageFactory {
    int cuenta;
public:
    MessageFactory() {cuenta=0;}
    Message create_message(const string& text) {
        Message nuevo_mensaje(text, cuenta);
        cuenta++;
        return nuevo_mensaje;
    }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
    // simulates the unpredictable network, where sent messages might arrive in unspecified order
        random_shuffle(messages.begin(), messages.end());         
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};



int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
