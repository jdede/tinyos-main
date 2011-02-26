/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support 
 * ----------------------------------------------------------------------------
 * Copyright (c) 2008, Atmel Corporation
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holders nor the names of its
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY
 * WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */

/*
    Title: USBInterfaceRequest

    About: Purpose
        Implementation of USBInterfaceRequest class methods.
*/

//------------------------------------------------------------------------------
//         Headers
//------------------------------------------------------------------------------

#include "USBInterfaceRequest.h"

//------------------------------------------------------------------------------
//         Exported functions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
/// Indicates which interface is targetted by a GET_INTERFACE or
/// SET_INTERFACE request.
/// \param request Pointer to a USBGenericRequest instance.
/// \return Interface number.
//------------------------------------------------------------------------------
unsigned char USBInterfaceRequest_GetInterface(const USBGenericRequest *request)
{
    return (USBGenericRequest_GetIndex(request) & 0xFF);
}

//------------------------------------------------------------------------------
/// Indicates the new alternate setting that the interface targetted by a
/// SET_INTERFACE request should use.
/// \param request Pointer to a USBGenericRequest instance.
/// \return New active setting for the interface.
//------------------------------------------------------------------------------
unsigned char USBInterfaceRequest_GetAlternateSetting(
    const USBGenericRequest *request)
{
    return (USBGenericRequest_GetValue(request) & 0xFF);
}
