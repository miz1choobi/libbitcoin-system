/**
 * Copyright (c) 2011-2022 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_SYSTEM_ENDIAN_SET_IPP
#define LIBBITCOIN_SYSTEM_ENDIAN_SET_IPP

#include <algorithm>
#include <bitcoin/system/define.hpp>
#include <bitcoin/system/endian/swaps.hpp>

namespace libbitcoin {
namespace system {

// C++17: Parallel policy for std::transform.

// Return by value.
// ----------------------------------------------------------------------------
    
template <typename Integral, size_t Count>
constexpr std_array<Integral, Count> from_big_endians(
    const std_array<Integral, Count>& values) NOEXCEPT
{
    if constexpr (is_little_endian)
    {
        std_array<Integral, Count> out{};
        from_big_endians(out, values);
        return out;
    }
    else
    {
        // short-circuit no-op.
        return values;
    }
}

template <typename Integral, size_t Count>
constexpr std_array<Integral, Count> from_little_endians(
    const std_array<Integral, Count>& values) NOEXCEPT
{
    if constexpr (is_big_endian)
    {
        std_array<Integral, Count> out{};
        from_little_endians(out, values);
        return out;
    }
    else
    {
        // short-circuit no-op.
        return values;
    }
}

template <typename Integral, size_t Count>
constexpr std_array<Integral, Count> to_big_endians(
    const std_array<Integral, Count>& values) NOEXCEPT
{
    return from_big_endians(values);
}

template <typename Integral, size_t Count>
constexpr std_array<Integral, Count> to_little_endians(
    const std_array<Integral, Count>& values) NOEXCEPT
{
    return from_little_endians(values);
}

// Return by reference.
// ----------------------------------------------------------------------------

template <typename Integral, size_t Count>
constexpr void from_big_endians(std_array<Integral, Count>& out,
    const std_array<Integral, Count>& in) NOEXCEPT
{
    if constexpr (is_little_endian)
    {
        std::transform(in.cbegin(), in.cend(), out.begin(),
            [](const auto& value) NOEXCEPT
            {
                return native_from_big_end(value);
            });
    }
    else
    {
        // short-circuit no-op.
        out = in;
    }
}

template <typename Integral, size_t Count>
constexpr void from_little_endians(std_array<Integral, Count>& out,
    const std_array<Integral, Count>& in) NOEXCEPT
{
    if constexpr (is_big_endian)
    {
        std::transform(in.cbegin(), in.cend(), out.begin(),
            [](const uint32_t& value) NOEXCEPT
            {
                return native_from_little_end(value);
            });
    }
    else
    {
        // short-circuit no-op.
        out = in;
    }
}

template <typename Integral, size_t Count>
constexpr void to_big_endians(std_array<Integral, Count>& out,
    const std_array<Integral, Count>& in) NOEXCEPT
{
    from_big_endians(out, in);
}

template <typename Integral, size_t Count>
constexpr void to_little_endians(std_array<Integral, Count>& out,
    const std_array<Integral, Count>& in) NOEXCEPT
{
    from_little_endians(out, in);
}

} // namespace system
} // namespace libbitcoin

#endif
