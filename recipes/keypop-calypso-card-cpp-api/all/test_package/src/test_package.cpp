#include <iostream>

#include "keypop/calypso/card/CalypsoCardApiFactory.hpp"
#include "keypop/calypso/card/CalypsoCardApiProperties.hpp"

int
main()
{
    /* CalypsoCardApiFactory.hpp transitively pulls in keypop-reader-cpp-api's
     * CardReader.hpp; compiling it here proves the transitive dependency
     * resolves through Conan/CMake alone. */
    std::cout << "Keypop::Calypso::Card header-only package resolved and linked correctly (API version "
              << keypop::calypso::card::CalypsoCardApiProperties_VERSION << ")" << std::endl;
    return 0;
}
