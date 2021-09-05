/*
 * coreHTTP v2.0.2
 * Copyright (C) 2020 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * @file httpParserOnMessageBeginCallback_harness.c
 * @brief Implements the proof harness for httpParserOnMessageBeginCallback function.
 */

#include "http_cbmc_state.h"
#include "http_parser.h"

int __CPROVER_file_local_core_http_client_c_httpParserOnMessageBeginCallback( http_parser * pHttpParser );

void httpParserOnMessageBeginCallback_harness()
{
    http_parser * pHttpParser;

    pHttpParser = allocateHttpSendParser( NULL );

    __CPROVER_file_local_core_http_client_c_httpParserOnMessageBeginCallback( pHttpParser );
}
