///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2014-2021 libbitcoin-system developers (see COPYING).
//
//        GENERATED SOURCE CODE, DO NOT EDIT EXCEPT EXPERIMENTALLY
//
///////////////////////////////////////////////////////////////////////////////
#ifndef LIBBITCOIN_SYSTEM_HPP
#define LIBBITCOIN_SYSTEM_HPP

/**
 * API Users: Include only this header. Direct use of other headers is fragile
 * and unsupported as header organization is subject to change.
 *
 * Maintainers: Do not include this header internal to this library.
 */

#include <bitcoin/system/assert.hpp>
#include <bitcoin/system/console_result.hpp>
#include <bitcoin/system/constants.hpp>
#include <bitcoin/system/constraints.hpp>
#include <bitcoin/system/define.hpp>
#include <bitcoin/system/exceptions.hpp>
#include <bitcoin/system/mutex.hpp>
#include <bitcoin/system/optional.hpp>
#include <bitcoin/system/properties.hpp>
#include <bitcoin/system/settings.hpp>
#include <bitcoin/system/version.hpp>
#include <bitcoin/system/chain/block.hpp>
#include <bitcoin/system/chain/block_filter.hpp>
#include <bitcoin/system/chain/chain.hpp>
#include <bitcoin/system/chain/chain_state.hpp>
#include <bitcoin/system/chain/check_point.hpp>
#include <bitcoin/system/chain/compact.hpp>
#include <bitcoin/system/chain/header.hpp>
#include <bitcoin/system/chain/input.hpp>
#include <bitcoin/system/chain/input_point.hpp>
#include <bitcoin/system/chain/operation.hpp>
#include <bitcoin/system/chain/output.hpp>
#include <bitcoin/system/chain/output_point.hpp>
#include <bitcoin/system/chain/point.hpp>
#include <bitcoin/system/chain/point_value.hpp>
#include <bitcoin/system/chain/points_value.hpp>
#include <bitcoin/system/chain/script.hpp>
#include <bitcoin/system/chain/transaction.hpp>
#include <bitcoin/system/chain/witness.hpp>
#include <bitcoin/system/chain/enums/magic_numbers.hpp>
#include <bitcoin/system/chain/enums/numbers.hpp>
#include <bitcoin/system/chain/enums/opcode.hpp>
#include <bitcoin/system/chain/enums/rule_fork.hpp>
#include <bitcoin/system/chain/enums/script_pattern.hpp>
#include <bitcoin/system/chain/enums/script_version.hpp>
#include <bitcoin/system/chain/enums/selection.hpp>
#include <bitcoin/system/chain/enums/sighash_algorithm.hpp>
#include <bitcoin/system/config/authority.hpp>
#include <bitcoin/system/config/base16.hpp>
#include <bitcoin/system/config/base2.hpp>
#include <bitcoin/system/config/base32.hpp>
#include <bitcoin/system/config/base58.hpp>
#include <bitcoin/system/config/base64.hpp>
#include <bitcoin/system/config/base85.hpp>
#include <bitcoin/system/config/block.hpp>
#include <bitcoin/system/config/compact_filter.hpp>
#include <bitcoin/system/config/config.hpp>
#include <bitcoin/system/config/directory.hpp>
#include <bitcoin/system/config/endpoint.hpp>
#include <bitcoin/system/config/hash160.hpp>
#include <bitcoin/system/config/hash256.hpp>
#include <bitcoin/system/config/header.hpp>
#include <bitcoin/system/config/input.hpp>
#include <bitcoin/system/config/output.hpp>
#include <bitcoin/system/config/parameter.hpp>
#include <bitcoin/system/config/parser.hpp>
#include <bitcoin/system/config/point.hpp>
#include <bitcoin/system/config/printer.hpp>
#include <bitcoin/system/config/script.hpp>
#include <bitcoin/system/config/transaction.hpp>
#include <bitcoin/system/crypto/checksum.hpp>
#include <bitcoin/system/crypto/crypto.hpp>
#include <bitcoin/system/crypto/elliptic_curve.hpp>
#include <bitcoin/system/crypto/encryption.hpp>
#include <bitcoin/system/crypto/golomb_coding.hpp>
#include <bitcoin/system/crypto/hash.hpp>
#include <bitcoin/system/crypto/pseudo_random.hpp>
#include <bitcoin/system/crypto/ring_signature.hpp>
#include <bitcoin/system/crypto/siphash.hpp>
#include <bitcoin/system/data/collection.hpp>
#include <bitcoin/system/data/data.hpp>
#include <bitcoin/system/data/data_array.hpp>
#include <bitcoin/system/data/data_chunk.hpp>
#include <bitcoin/system/data/data_reference.hpp>
#include <bitcoin/system/data/data_slab.hpp>
#include <bitcoin/system/data/data_slice.hpp>
#include <bitcoin/system/data/string.hpp>
#include <bitcoin/system/data/uintx.hpp>
#include <bitcoin/system/error/block_error_t.hpp>
#include <bitcoin/system/error/error.hpp>
#include <bitcoin/system/error/error_t.hpp>
#include <bitcoin/system/error/macros.hpp>
#include <bitcoin/system/error/op_error_t.hpp>
#include <bitcoin/system/error/script_error_t.hpp>
#include <bitcoin/system/error/transaction_error_t.hpp>
#include <bitcoin/system/machine/interpreter.hpp>
#include <bitcoin/system/machine/machine.hpp>
#include <bitcoin/system/machine/number.hpp>
#include <bitcoin/system/machine/program.hpp>
#include <bitcoin/system/math/addition.hpp>
#include <bitcoin/system/math/bits.hpp>
#include <bitcoin/system/math/division.hpp>
#include <bitcoin/system/math/limits.hpp>
#include <bitcoin/system/math/math.hpp>
#include <bitcoin/system/math/power.hpp>
#include <bitcoin/system/math/safe.hpp>
#include <bitcoin/system/math/sign.hpp>
#include <bitcoin/system/messages/address.hpp>
#include <bitcoin/system/messages/alert.hpp>
#include <bitcoin/system/messages/alert_payload.hpp>
#include <bitcoin/system/messages/block.hpp>
#include <bitcoin/system/messages/block_transactions.hpp>
#include <bitcoin/system/messages/compact_block.hpp>
#include <bitcoin/system/messages/compact_filter.hpp>
#include <bitcoin/system/messages/compact_filter_checkpoint.hpp>
#include <bitcoin/system/messages/compact_filter_headers.hpp>
#include <bitcoin/system/messages/fee_filter.hpp>
#include <bitcoin/system/messages/filter_add.hpp>
#include <bitcoin/system/messages/filter_clear.hpp>
#include <bitcoin/system/messages/filter_load.hpp>
#include <bitcoin/system/messages/get_address.hpp>
#include <bitcoin/system/messages/get_block_transactions.hpp>
#include <bitcoin/system/messages/get_blocks.hpp>
#include <bitcoin/system/messages/get_compact_filter_checkpoint.hpp>
#include <bitcoin/system/messages/get_compact_filter_headers.hpp>
#include <bitcoin/system/messages/get_compact_filters.hpp>
#include <bitcoin/system/messages/get_data.hpp>
#include <bitcoin/system/messages/get_headers.hpp>
#include <bitcoin/system/messages/header.hpp>
#include <bitcoin/system/messages/headers.hpp>
#include <bitcoin/system/messages/heading.hpp>
#include <bitcoin/system/messages/identifier.hpp>
#include <bitcoin/system/messages/inventory.hpp>
#include <bitcoin/system/messages/inventory_vector.hpp>
#include <bitcoin/system/messages/memory_pool.hpp>
#include <bitcoin/system/messages/merkle_block.hpp>
#include <bitcoin/system/messages/message.hpp>
#include <bitcoin/system/messages/messages.hpp>
#include <bitcoin/system/messages/network_address.hpp>
#include <bitcoin/system/messages/not_found.hpp>
#include <bitcoin/system/messages/ping.hpp>
#include <bitcoin/system/messages/pong.hpp>
#include <bitcoin/system/messages/prefilled_transaction.hpp>
#include <bitcoin/system/messages/reject.hpp>
#include <bitcoin/system/messages/send_compact.hpp>
#include <bitcoin/system/messages/send_headers.hpp>
#include <bitcoin/system/messages/transaction.hpp>
#include <bitcoin/system/messages/verack.hpp>
#include <bitcoin/system/messages/version.hpp>
#include <bitcoin/system/radix/base_10.hpp>
#include <bitcoin/system/radix/base_16.hpp>
#include <bitcoin/system/radix/base_2048.hpp>
#include <bitcoin/system/radix/base_32.hpp>
#include <bitcoin/system/radix/base_58.hpp>
#include <bitcoin/system/radix/base_64.hpp>
#include <bitcoin/system/radix/base_85.hpp>
#include <bitcoin/system/radix/radix.hpp>
#include <bitcoin/system/serial/deserialize.hpp>
#include <bitcoin/system/serial/endian.hpp>
#include <bitcoin/system/serial/props.hpp>
#include <bitcoin/system/serial/serial.hpp>
#include <bitcoin/system/serial/serialize.hpp>
#include <bitcoin/system/stream/binary.hpp>
#include <bitcoin/system/stream/device.hpp>
#include <bitcoin/system/stream/make_stream.hpp>
#include <bitcoin/system/stream/make_streamer.hpp>
#include <bitcoin/system/stream/stream.hpp>
#include <bitcoin/system/stream/stream_result.hpp>
#include <bitcoin/system/stream/streamers.hpp>
#include <bitcoin/system/stream/streams.hpp>
#include <bitcoin/system/stream/devices/copy_sink.hpp>
#include <bitcoin/system/stream/devices/copy_source.hpp>
#include <bitcoin/system/stream/devices/flip_sink.hpp>
#include <bitcoin/system/stream/devices/push_sink.hpp>
#include <bitcoin/system/stream/streamers/bit_flipper.hpp>
#include <bitcoin/system/stream/streamers/bit_reader.hpp>
#include <bitcoin/system/stream/streamers/bit_writer.hpp>
#include <bitcoin/system/stream/streamers/byte_flipper.hpp>
#include <bitcoin/system/stream/streamers/byte_reader.hpp>
#include <bitcoin/system/stream/streamers/byte_writer.hpp>
#include <bitcoin/system/stream/streamers/interfaces/bitflipper.hpp>
#include <bitcoin/system/stream/streamers/interfaces/bitreader.hpp>
#include <bitcoin/system/stream/streamers/interfaces/bitwriter.hpp>
#include <bitcoin/system/stream/streamers/interfaces/byteflipper.hpp>
#include <bitcoin/system/stream/streamers/interfaces/bytereader.hpp>
#include <bitcoin/system/stream/streamers/interfaces/bytewriter.hpp>
#include <bitcoin/system/unicode/ascii.hpp>
#include <bitcoin/system/unicode/code_points.hpp>
#include <bitcoin/system/unicode/conversion.hpp>
#include <bitcoin/system/unicode/normalization.hpp>
#include <bitcoin/system/unicode/unicode.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_about.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_console_streambuf.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_environment.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_everywhere.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_ifstream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_istream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_ofstream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_ostream.hpp>
#include <bitcoin/system/unicode/utf8_everywhere/utf8_streambuf.hpp>
#include <bitcoin/system/wallet/context.hpp>
#include <bitcoin/system/wallet/message.hpp>
#include <bitcoin/system/wallet/neutrino_filter.hpp>
#include <bitcoin/system/wallet/wallet.hpp>
#include <bitcoin/system/wallet/addresses/bitcoin_uri.hpp>
#include <bitcoin/system/wallet/addresses/checked.hpp>
#include <bitcoin/system/wallet/addresses/payment_address.hpp>
#include <bitcoin/system/wallet/addresses/qr_code.hpp>
#include <bitcoin/system/wallet/addresses/stealth_address.hpp>
#include <bitcoin/system/wallet/addresses/stealth_receiver.hpp>
#include <bitcoin/system/wallet/addresses/stealth_sender.hpp>
#include <bitcoin/system/wallet/addresses/tiff.hpp>
#include <bitcoin/system/wallet/addresses/uri.hpp>
#include <bitcoin/system/wallet/addresses/uri_reader.hpp>
#include <bitcoin/system/wallet/addresses/witness_address.hpp>
#include <bitcoin/system/wallet/keys/ec_point.hpp>
#include <bitcoin/system/wallet/keys/ec_private.hpp>
#include <bitcoin/system/wallet/keys/ec_public.hpp>
#include <bitcoin/system/wallet/keys/ec_scalar.hpp>
#include <bitcoin/system/wallet/keys/ek_private.hpp>
#include <bitcoin/system/wallet/keys/ek_public.hpp>
#include <bitcoin/system/wallet/keys/ek_token.hpp>
#include <bitcoin/system/wallet/keys/encrypted_keys.hpp>
#include <bitcoin/system/wallet/keys/hd_private.hpp>
#include <bitcoin/system/wallet/keys/hd_public.hpp>
#include <bitcoin/system/wallet/keys/mini_keys.hpp>
#include <bitcoin/system/wallet/keys/stealth.hpp>
#include <bitcoin/system/wallet/mnemonics/electrum.hpp>
#include <bitcoin/system/wallet/mnemonics/electrum_v1.hpp>
#include <bitcoin/system/wallet/mnemonics/mnemonic.hpp>
#include <bitcoin/system/words/dictionaries.hpp>
#include <bitcoin/system/words/dictionary.hpp>
#include <bitcoin/system/words/language.hpp>
#include <bitcoin/system/words/languages.hpp>
#include <bitcoin/system/words/words.hpp>
#include <bitcoin/system/words/catalogs/electrum.hpp>
#include <bitcoin/system/words/catalogs/electrum_v1.hpp>
#include <bitcoin/system/words/catalogs/mnemonic.hpp>

#endif
