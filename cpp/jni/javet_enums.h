/*
 *   Copyright (c) 2021-2022 caoccao.com Sam Cao
 *   All rights reserved.

 *   Licensed under the Apache License, Version 2.0 (the "License"),
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at

 *   http://www.apache.org/licenses/LICENSE-2.0

 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#pragma once

#define IS_V8_ARRAY(type) (type == Javet::Enums::V8ValueReferenceType::Array)
#define IS_V8_ARRAY_BUFFER(type) (type == Javet::Enums::V8ValueReferenceType::ArrayBuffer)
#define IS_V8_ARGUMENTS(type) (type == Javet::Enums::V8ValueReferenceType::Arguments)
#define IS_V8_FUNCTION(type) (type == Javet::Enums::V8ValueReferenceType::Function)
#define IS_V8_MAP(type) (type == Javet::Enums::V8ValueReferenceType::Map)
#define IS_V8_MODULE(type) (type == Javet::Enums::V8ValueReferenceType::Module)
#define IS_V8_OBJECT(type) (type == Javet::Enums::V8ValueReferenceType::Object)
#define IS_V8_PROMISE(type) (type == Javet::Enums::V8ValueReferenceType::Promise)
#define IS_V8_PROXY(type) (type == Javet::Enums::V8ValueReferenceType::Proxy)
#define IS_V8_SCRIPT(type) (type == Javet::Enums::V8ValueReferenceType::Script)
#define IS_V8_SET(type) (type == Javet::Enums::V8ValueReferenceType::Set)
#define IS_V8_SYMBOL(type) (type == Javet::Enums::V8ValueReferenceType::Symbol)
#define IS_V8_SYMBOL_OBJECT(type) (type == Javet::Enums::V8ValueReferenceType::SymbolObject)

namespace Javet {
    namespace Enums {
        namespace NodeScriptMode {
            enum NodeScriptMode {
                String = 0,
                File = 1,
            };
        };

        namespace V8ValueInternalType {
            enum V8ValueInternalType {
                Undefined = 0,
                Null = 1,
                NullOrUndefined = 2,
                True = 3,
                False = 4,
                Name = 5,
                String = 6,
                Symbol = 7,
                Function = 8,
                Array = 9,
                Object = 10,
                BigInt = 11,
                Boolean = 12,
                Number = 13,
                External = 14,
                Int32 = 15,
                Date = 16,
                ArgumentsObject = 17,
                BigIntObject = 18,
                BooleanObject = 19,
                NumberObject = 20,
                StringObject = 21,
                SymbolObject = 22,
                NativeError = 23,
                RegExp = 24,
                AsyncFunction = 25,
                GeneratorFunction = 26,
                GeneratorObject = 27,
                Promise = 28,
                Map = 29,
                Set = 30,
                MapIterator = 31,
                SetIterator = 32,
                WeakMap = 33,
                WeakSet = 34,
                ArrayBuffer = 35,
                ArrayBufferView = 36,
                TypedArray = 37,
                Uint8Array = 38,
                Uint8ClampedArray = 39,
                Int8Array = 40,
                Uint16Array = 41,
                Int16Array = 42,
                Uint32Array = 43,
                Int32Array = 44,
                Float32Array = 45,
                Float64Array = 46,
                BigInt64Array = 47,
                BigUint64Array = 48,
                DataView = 49,
                SharedArrayBuffer = 50,
                Proxy = 51,
                WasmModuleObject = 52,
                ModuleNamespaceObject = 53,
            };
        };

        namespace V8ValueReferenceType {
            enum V8ValueReferenceType {
                Invalid = 0,
                Object = 1,
                Error = 2,
                RegExp = 3,
                Promise = 4,
                Proxy = 5,
                Symbol = 6,
                SymbolObject = 7,
                Arguments = 8,
                Map = 9,
                Set = 10,
                Array = 11,
                Function = 12,
                Iterator = 13,
                WeakMap = 14,
                WeakSet = 15,
                Script = 20,
                Module = 21,
                DataView = 30,
                ArrayBuffer = 31,
                SharedArrayBuffer = 32,
                Int8Array = 33, // -128 to 127     1     8-bit two's complement signed integer     byte     int8_t
                Uint8Array = 34, // 0 to 255     1     8-bit unsigned integer     octet     uint8_t
                Uint8ClampedArray = 35, // 0 to 255     1     8-bit unsigned integer (clamped)     octet     uint8_t
                Int16Array = 36, // -32768 to 32767     2     16-bit two's complement signed integer     short     int16_t
                Uint16Array = 37, //      0 to 65535     2     16-bit unsigned integer     unsigned short     uint16_t
                Int32Array = 38, // -2147483648 to 2147483647     4     32-bit two's complement signed integer     long     int32_t
                Uint32Array = 39, // 0 to 4294967295     4     32-bit unsigned integer     unsigned long     uint32_t
                Float32Array = 40, // 1.2��10^-38 to 3.4��10^38     4     32-bit IEEE floating point number (7 significant digits e.g., 1.234567)     unrestricted float     float
                Float64Array = 41, // 5.0��10^-324 to 1.8��10^308     8     64-bit IEEE floating point number (16 significant digits e.g., 1.23456789012345)     unrestricted double     double
                BigInt64Array = 42, // -2^63 to 2^63-1     8     64-bit two's complement signed integer     bigint     int64_t (signed long long)
                BigUint64Array = 43, // 0 to 2^64-1     8     64-bit unsigned integer     bigint     uint64_t (unsigned long long)
            };
        };

        namespace JSFunctionType {
            enum JSFunctionType {
                Native = 0,
                API = 1,
                UserDefined = 2,
                Unknown = 3,
            };
        };

        namespace JSScopeType {
            enum JSScopeType {
                Class = 0,
                Eval = 1,
                Function = 2,
                Module = 3,
                Script = 4,
                Catch = 5,
                Block = 6,
                With = 7,
                Unknown = 8,
            };
        };
    }
}
