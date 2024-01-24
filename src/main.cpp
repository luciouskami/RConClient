#include "RConClient.hpp"

int main() {
    RconClient rcon_client("127.0.0.1", 25575, "your_password");
    if (rcon_client.connect()) {
        const std::string response = rcon_client.send_command("DoExit");
        std::cout << "Server response: " << response << "\n";
    }
    else {
        std::cerr << "Failed to connect to RCON server." << "\n";
    }
    return 0;
}
