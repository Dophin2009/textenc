#include <vector>

#include "42-utf8-encoder.hpp"

std::vector<byte> encode(codepoint cp) {
  if (cp < 128) {
    return {(byte)cp};
  }
}
