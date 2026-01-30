// OWN declarative region / EACH function

#include <iostream>

// ============================================
// NAMES DEFINED | NAMESPACES
// ============================================
namespace Audio {
    void reproduce() {
        std::cout << "♪ Playing audio\n";
    }

    void pause() {
        std::cout << "⏸ Audio paused\n";
    }

    void stop() {
        std::cout << "⏹ Audio stopped\n";
    }
}

namespace Video {
    void reproduce() {
        std::cout << "▶ Playing video\n";
    }

    void stop() {
        std::cout << "⏸ Video paused\n";
    }
}

// ============================================
// FIRST DECLARATIVE REGION: functionA
// ============================================
void functionA() {
    std::cout << "--- In funcionA ---\n";

    // INTRODUCES Audio names | functionA's scope
    using Audio::reproduce;
    using Audio::pause;

    reproduce();  // Calls Audio::reproduce()
    pause();      // Calls Audio::pause()

    // Video::reproduce is NOT available WITHOUT qualification
    Video::reproduce();  // MUST be qualified
}

// ============================================
// SECOND DECLARATIVE REGION: functionB
// ============================================
void functionB() {
    std::cout << "\n--- In functionB ---\n";

    // INTRODUCES Video names | functionB's scope
    // (independent -- from -- functionA)
    using Video::reproduce;
    using Video::stop;

    reproduce();  // Calls Video::reproduce() (!= | functionA!)
    stop();      // Calls Video::stop()

    // Audio::stop MUST be qualified
    Audio::stop();
}

// ============================================
// THIRD DECLARATIVE REGION: class
// ============================================
class ReproductorAudio {
    // DECLARATIVE REGION: class scope
    using Audio::reproduce;  // Introduces | class scope

public:
    void init() {
        std::cout << "\n--- In ReproductorAudio ---\n";
        reproduce();  // it was introduced | class
    }
};

// ============================================
// FOURTH DECLARATIVE REGION: main
// ============================================
int main() {
    functionA();
    functionB();

    ReproductorAudio reproductor;
    reproductor.init();

    std::cout << "\n--- In main ---\n";
    // main() has NO using-declarations -> names MUST be qualified
    Audio::reproduce();
    Video::reproduce();

    return 0;
}
