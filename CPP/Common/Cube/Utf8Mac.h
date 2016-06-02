/* ------------------------------------------------------------------------- */
///
/// Utf8Mac.h
/// 
/// Copyright (c) 2010 CubeSoft, Inc.
/// 
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///  http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/* ------------------------------------------------------------------------- */
#ifndef CUBE_ENCODING_UTF8MAC_H
#define CUBE_ENCODING_UTF8MAC_H

#include <string>

namespace Cube {
namespace Encoding {
    /* --------------------------------------------------------------------- */
    ///
    /// Utf8Mac
    ///
    /// <summary>
    /// UTF8-MAC �G���R�[�f�B���O�Ɋւ��鏈�����s���N���X�ł��B
    /// </summary>
    ///
    /* --------------------------------------------------------------------- */
    class Utf8Mac {
    public:
        typedef std::basic_string<char> utf8_string;

        /* ----------------------------------------------------------------- */
        ///
        /// Normalize
        ///
        /// <summary>
        /// NFD �� NFC �ɐ��K�����܂��B
        /// </summary>
        ///
        /// <remarks>
        /// TODO: ���݁A�Ђ炪�Ȃ���уJ�^�J�i�݂̂ɑΉ����Ă���̂ŁA����ȊO�ɂ�
        /// �Ή�����B
        /// </remarks>
        ///
        /* ----------------------------------------------------------------- */
        static void Normalize(utf8_string& s) {
            static const char *utf8_mac_kana[][2] = {
                { "\xE3\x81\x8B\xE3\x82\x99", "\xE3\x81\x8C" },		// ��
                { "\xE3\x81\x8D\xE3\x82\x99", "\xE3\x81\x8E" },		// ��
                { "\xE3\x81\x8F\xE3\x82\x99", "\xE3\x81\x90" },		// ��
                { "\xE3\x81\x91\xE3\x82\x99", "\xE3\x81\x92" },		// ��
                { "\xE3\x81\x93\xE3\x82\x99", "\xE3\x81\x94" },		// ��
                { "\xE3\x81\x95\xE3\x82\x99", "\xE3\x81\x96" },		// ��
                { "\xE3\x81\x97\xE3\x82\x99", "\xE3\x81\x98" },		// ��
                { "\xE3\x81\x99\xE3\x82\x99", "\xE3\x81\x9A" },		// ��
                { "\xE3\x81\x9B\xE3\x82\x99", "\xE3\x81\x9C" },		// ��
                { "\xE3\x81\x9D\xE3\x82\x99", "\xE3\x81\x9E" },		// ��
                { "\xE3\x81\x9F\xE3\x82\x99", "\xE3\x81\xA0" },		// ��
                { "\xE3\x81\xA1\xE3\x82\x99", "\xE3\x81\xA2" },		// ��
                { "\xE3\x81\xA4\xE3\x82\x99", "\xE3\x81\xA5" },		// ��
                { "\xE3\x81\xA6\xE3\x82\x99", "\xE3\x81\xA7" },		// ��
                { "\xE3\x81\xA8\xE3\x82\x99", "\xE3\x81\xA9" },		// ��
                { "\xE3\x81\xAF\xE3\x82\x99", "\xE3\x81\xB0" },		// ��
                { "\xE3\x81\xB2\xE3\x82\x99", "\xE3\x81\xB3" },		// ��
                { "\xE3\x81\xB5\xE3\x82\x99", "\xE3\x81\xB6" },		// ��
                { "\xE3\x81\xB8\xE3\x82\x99", "\xE3\x81\xB9" },		// ��
                { "\xE3\x81\xBB\xE3\x82\x99", "\xE3\x81\xBC" },		// ��
                { "\xE3\x81\xAF\xE3\x82\x9A", "\xE3\x81\xB1" },		// ��
                { "\xE3\x81\xB2\xE3\x82\x9A", "\xE3\x81\xB4" },		// ��
                { "\xE3\x81\xB5\xE3\x82\x9A", "\xE3\x81\xB7" },		// ��
                { "\xE3\x81\xB8\xE3\x82\x9A", "\xE3\x81\xBA" },		// ��
                { "\xE3\x81\xBB\xE3\x82\x9A", "\xE3\x81\xBD" },		// ��
                { "\xE3\x81\x86\xE3\x82\x99", "\xE3\x82\x94" },		// ���i�Ђ炪�ȁj
                { "\xE3\x82\xAB\xE3\x82\x99", "\xE3\x82\xAC" },		// �K
                { "\xE3\x82\xAD\xE3\x82\x99", "\xE3\x82\xAE" },		// �M
                { "\xE3\x82\xAF\xE3\x82\x99", "\xE3\x82\xB0" },		// �O
                { "\xE3\x82\xB1\xE3\x82\x99", "\xE3\x82\xB2" },		// �Q
                { "\xE3\x82\xB3\xE3\x82\x99", "\xE3\x82\xB4" },		// �S
                { "\xE3\x82\xB5\xE3\x82\x99", "\xE3\x82\xB6" },		// �U
                { "\xE3\x82\xB7\xE3\x82\x99", "\xE3\x82\xB8" },		// �W
                { "\xE3\x82\xB9\xE3\x82\x99", "\xE3\x82\xBA" },		// �Y
                { "\xE3\x82\xBB\xE3\x82\x99", "\xE3\x82\xBC" },		// �[
                { "\xE3\x82\xBD\xE3\x82\x99", "\xE3\x82\xBE" },		// �]
                { "\xE3\x82\xBF\xE3\x82\x99", "\xE3\x83\x80" },		// �_
                { "\xE3\x83\x81\xE3\x82\x99", "\xE3\x83\x82" },		// �a
                { "\xE3\x83\x84\xE3\x82\x99", "\xE3\x83\x85" },		// �d
                { "\xE3\x83\x86\xE3\x82\x99", "\xE3\x83\x87" },		// �f
                { "\xE3\x83\x88\xE3\x82\x99", "\xE3\x83\x89" },		// �h
                { "\xE3\x83\x8F\xE3\x82\x99", "\xE3\x83\x90" },		// �o
                { "\xE3\x83\x92\xE3\x82\x99", "\xE3\x83\x93" },		// �r
                { "\xE3\x83\x95\xE3\x82\x99", "\xE3\x83\x96" },		// �u
                { "\xE3\x83\x98\xE3\x82\x99", "\xE3\x83\x99" },		// �x
                { "\xE3\x83\x9B\xE3\x82\x99", "\xE3\x83\x9C" },		// �{
                { "\xE3\x83\x8F\xE3\x82\x9A", "\xE3\x83\x91" },		// �p
                { "\xE3\x83\x92\xE3\x82\x9A", "\xE3\x83\x94" },		// �s
                { "\xE3\x83\x95\xE3\x82\x9A", "\xE3\x83\x97" },		// �v
                { "\xE3\x83\x98\xE3\x82\x9A", "\xE3\x83\x9A" },		// �y
                { "\xE3\x83\x9B\xE3\x82\x9A", "\xE3\x83\x9D" },		// �|
                { "\xE3\x82\xA6\xE3\x82\x99", "\xE3\x83\xB4" },		// ��
            };

            for (auto i = 0u; i < sizeof(utf8_mac_kana) / sizeof(utf8_mac_kana[0]); ++i) {
                ReplaceAll(s, utf8_mac_kana[i][0], utf8_mac_kana[i][1]);
            }
        }

    private:
        /* ----------------------------------------------------------------- */
        ///
        /// ReplaceAll
        ///
        /// <summary>
        /// ��v���镶�����S�Ēu�����܂��B
        /// </summary>
        ///
        /* ----------------------------------------------------------------- */
        static void ReplaceAll(utf8_string& s, const utf8_string& sch, const utf8_string& rep) {
            if (s.empty()) return;

            auto pos = s.find(sch);
            while (pos != utf8_string::npos) {
                s.replace(pos, sch.size(), rep);
                pos = s.find(sch, pos + rep.size());
            }
        }
    }; // Utf8Mac
}} // Cube::Encoding

#endif // CUBE_ENCODING_UTF8MAC_H