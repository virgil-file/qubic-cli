#define DEFAULT_SCHEDULED_TICK_OFFSET 20
#define DEFAULT_NODE_PORT 21841
#define DEFAULT_NODE_IP "127.0.0.1"
#define NUMBER_OF_TRANSACTIONS_PER_TICK 1024
#define SIGNATURE_SIZE 64
#define SPECTRUM_DEPTH 24 // Is derived from SPECTRUM_CAPACITY (=N)
#define DEFAULT_SEED "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
#define QX_ADDRESS "BAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAARMID"
#define ARBITRATOR "AFZPUAIYVPNUYGJRQVLUKOPPVLHAZQTGLYAAUUNBXFTVTAMSBKQBLEIEPCVJ"
#define NUMBER_OF_COMPUTORS 676
#define EXCHANGE_PUBLIC_PEERS 0
#define BROADCAST_COMPUTORS 2
#define BROADCAST_FUTURE_TICK_DATA 8
#define REQUEST_COMPUTORS 11
#define REQUEST_TICK_DATA 16
#define BROADCAST_TRANSACTION 24
#define REQUEST_CURRENT_TICK_INFO 27
#define RESPOND_CURRENT_TICK_INFO 28
#define REQUEST_TICK_TRANSACTIONS 29
#define REQUEST_ENTITY 31
#define RESPOND_ENTITY 32
#define PROCESS_SPECIAL_COMMAND 255
#define REQUEST_ISSUED_ASSETS 36
#define RESPOND_ISSUED_ASSETS 37
#define REQUEST_OWNED_ASSETS 38
#define RESPOND_OWNED_ASSETS 39
#define REQUEST_POSSESSED_ASSETS 40
#define RESPOND_POSSESSED_ASSETS 41
#define REQUEST_SYSTEM_INFO 46
#define RESPOND_SYSTEM_INFO 47

#define SPECIAL_COMMAND_SET_SOLUTION_THRESHOLD_REQUEST 5ULL
#define SPECIAL_COMMAND_SET_SOLUTION_THRESHOLD_RESPONSE 6ULL
#define SPECIAL_COMMAND_TOGGLE_MAIN_MODE_REQUEST 7ULL // F12
#define SPECIAL_COMMAND_TOGGLE_MAIN_MODE_RESPONSE 8ULL // F12
#define SPECIAL_COMMAND_REFRESH_PEER_LIST 9ULL // F4
#define SPECIAL_COMMAND_FORCE_NEXT_TICK 10ULL // F5
#define SPECIAL_COMMAND_REISSUE_VOTE 11ULL // F9
#define SPECIAL_COMMAND_QUERY_TIME 12ULL    // send this to node to query time, responds with time read from clock
#define SPECIAL_COMMAND_SEND_TIME 13ULL     // send this to node to set time, responds with time read from clock after setting

#define QX_CONTRACT_INDEX 1
#define QX_FEE_FUNCTION_INDEX 1

#define Q_SLEEP(X) std::this_thread::sleep_for (std::chrono::milliseconds(X));