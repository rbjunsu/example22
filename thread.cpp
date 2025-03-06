#include <iostream>
#include <chrono>
#include <thread>

class Robot {
public:
    void StartStateUpdate(void (*callback)(), int hz) {
        // 주기적으로 콜백을 실행
        std::thread([callback, hz]() {
            while (true) {
                std::this_thread::sleep_for(std::chrono::seconds(1 / hz)); // 주기 설정
                callback(); // 콜백 실행
            }
        }).detach(); // 별도의 스레드에서 실행
    }
};

void printState() {
    static int count = 0;
    std::cout << "State Update " << count++ << " received!" << std::endl;
}

int main() {
    Robot robot;

    // 1Hz로 상태 업데이트 콜백을 실행
    robot.StartStateUpdate(printState, 1);

    // 다른 작업 (halo 출력)
    std::cout << "halo1" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "halo2" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // 메인 스레드가 종료되지 않도록 대기
    std::this_thread::sleep_for(std::chrono::seconds(10)); // 5초 동안 기다림

    return 0;
}
