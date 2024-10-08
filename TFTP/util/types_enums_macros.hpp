/**
 * @file types_enums_macros.hpp
 * @author Yasin BASAR
 * @brief This file contains type, enum and macro definitions.
 * @version 1.0.0
 * @date 12/08/2024
 * @copyright (c) 2024 All rights reserved.
 */

#ifndef TFTP_SEVER_AND_CLIENT_TYPES_ENUMS_MACROS_HPP
#define TFTP_SEVER_AND_CLIENT_TYPES_ENUMS_MACROS_HPP

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <memory>

/*******************************************************************************
 * Third Party Libraries
 ******************************************************************************/

namespace YB
{

#define TFTP_INCOMING_DATA_BUFFER_LEN 1024
#define TFTP_OUTGOING_DATA_BUFFER_LEN 512

#define OP_CODE_RRQ 1
#define OP_CODE_WRQ 2
#define OP_CODE_DATA 3
#define OP_CODE_ACK 4
#define OP_CODE_ERR 5

#define OP_CODE_BYTE_SIZE 2
#define BLOCK_NUMBER_BYTE_SIZE 2
#define DATA_BEGIN (OP_CODE_BYTE_SIZE + BLOCK_NUMBER_BYTE_SIZE)

    /// @brief Packet type for data transfer operations
    typedef struct packet_s
    {
        std::unique_ptr<char[]> data_ptr; ///< Pointer to data buffer
        int size; ///< Data buffer size
        int data_block_number; ///< Data buffer block number
    } packet_t;

} // YB

#endif //TFTP_SEVER_AND_CLIENT_TYPES_ENUMS_MACROS_HPP

/* End of File */
