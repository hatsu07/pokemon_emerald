.if .L__inc_fragment_select_dad7bc188d45 == 1
	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_575C03
gText_Rom_575C03: @ 0x08575C03
	.string "………{EOS}"
	.if (. - gText_Rom_575C03) > 0x4
	.error "gText_Rom_575C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C03) < 0x4
	.space 0x4 - (. - gText_Rom_575C03)
	.endif

	@ Priority C: Easy Chat / Voices word 7.
.Lbatch81_text_start_gText_Rom_575C07:
	.globl gEasyChatWord_Voices_Dash
gEasyChatWord_Voices_Dash: @ 0x08575C07
	.string "ー{EOS}"
	.if (. - gEasyChatWord_Voices_Dash) != 0x2
	.error "gEasyChatWord_Voices_Dash must retain its original 2-byte slot"
	.endif
	.globl gText_Rom_575C09
gText_Rom_575C09: @ 0x08575C09
	.string "ーーー{EOS}"
	.if (. - gText_Rom_575C09) > 0x4
	.error "gText_Rom_575C09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C09) < 0x4
	.space 0x4 - (. - gText_Rom_575C09)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:58 easy_chat_group_voices_line_58
	.globl gText_Rom_575C0D
gText_Rom_575C0D: @ 0x08575C0D
	.string "あーあ{EOS}"
	.if (. - gText_Rom_575C0D) > 0x4
	.error "gText_Rom_575C0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C0D) < 0x4
	.space 0x4 - (. - gText_Rom_575C0D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:64 easy_chat_group_voices_line_64
	.globl gText_Rom_575C11
gText_Rom_575C11: @ 0x08575C11
	.string "あーん{EOS}"
	.if (. - gText_Rom_575C11) > 0x4
	.error "gText_Rom_575C11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C11) < 0x4
	.space 0x4 - (. - gText_Rom_575C11)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:70 easy_chat_group_voices_line_70
	.globl gText_Rom_575C15
gText_Rom_575C15: @ 0x08575C15
	.string "あはは{EOS}"
	.if (. - gText_Rom_575C15) > 0x4
	.error "gText_Rom_575C15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C15) < 0x4
	.space 0x4 - (. - gText_Rom_575C15)
	.endif
	@ Decoded text from ROM range: offset=0x575C19, size=0x9
	.string "あら{EOS}"
	.string "いえ{EOS}"
	.string "うう{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:94 easy_chat_group_voices_line_94
	.globl gText_Rom_575C22
gText_Rom_575C22: @ 0x08575C22
	.string "うーん{EOS}"
	.if (. - gText_Rom_575C22) > 0x4
	.error "gText_Rom_575C22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C22) < 0x4
	.space 0x4 - (. - gText_Rom_575C22)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:100 easy_chat_group_voices_line_100
	.globl gText_Rom_575C26
gText_Rom_575C26: @ 0x08575C26
	.string "うおー!{EOS}"
	.if (. - gText_Rom_575C26) > 0x5
	.error "gText_Rom_575C26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C26) < 0x5
	.space 0x5 - (. - gText_Rom_575C26)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:106 easy_chat_group_voices_line_106
	.globl gText_Rom_575C2B
gText_Rom_575C2B: @ 0x08575C2B
	.string "うおりゃー{EOS}"
	.if (. - gText_Rom_575C2B) > 0x6
	.error "gText_Rom_575C2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C2B) < 0x6
	.space 0x6 - (. - gText_Rom_575C2B)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:112 easy_chat_group_voices_line_112
	.globl gText_Rom_575C31
gText_Rom_575C31: @ 0x08575C31
	.string "うひょー{EOS}"
	.if (. - gText_Rom_575C31) > 0x5
	.error "gText_Rom_575C31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C31) < 0x5
	.space 0x5 - (. - gText_Rom_575C31)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:118 easy_chat_group_voices_line_118
	.globl gText_Rom_575C36
gText_Rom_575C36: @ 0x08575C36
	.string "うふふ{EOS}"
	.if (. - gText_Rom_575C36) > 0x4
	.error "gText_Rom_575C36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C36) < 0x4
	.space 0x4 - (. - gText_Rom_575C36)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:124 easy_chat_group_voices_line_124
	.globl gText_Rom_575C3A
gText_Rom_575C3A: @ 0x08575C3A
	.string "うふん{EOS}"
	.if (. - gText_Rom_575C3A) > 0x4
	.error "gText_Rom_575C3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3A) < 0x4
	.space 0x4 - (. - gText_Rom_575C3A)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:130 easy_chat_group_voices_line_130
	.globl gText_Rom_575C3E
gText_Rom_575C3E: @ 0x08575C3E
	.string "うわー{EOS}"
	.if (. - gText_Rom_575C3E) > 0x4
	.error "gText_Rom_575C3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C3E) < 0x4
	.space 0x4 - (. - gText_Rom_575C3E)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:136 easy_chat_group_voices_line_136
	.globl gText_Rom_575C42
gText_Rom_575C42: @ 0x08575C42
	.string "うわーん{EOS}"
	.if (. - gText_Rom_575C42) > 0x5
	.error "gText_Rom_575C42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C42) < 0x5
	.space 0x5 - (. - gText_Rom_575C42)
	.endif
	@ Decoded text from ROM range: offset=0x575C47, size=0x6
	.string "ええ{EOS}"
	.string "えー{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:154 easy_chat_group_voices_line_154
	.globl gText_Rom_575C4D
gText_Rom_575C4D: @ 0x08575C4D
	.string "えーん{EOS}"
	.if (. - gText_Rom_575C4D) > 0x4
	.error "gText_Rom_575C4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C4D) < 0x4
	.space 0x4 - (. - gText_Rom_575C4D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:160 easy_chat_group_voices_line_160
	.globl gText_Rom_575C51
gText_Rom_575C51: @ 0x08575C51
	.string "えへへ{EOS}"
	.if (. - gText_Rom_575C51) > 0x4
	.error "gText_Rom_575C51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C51) < 0x4
	.space 0x4 - (. - gText_Rom_575C51)
	.endif
	@ Decoded text from ROM range: offset=0x575C55, size=0x9
	.string "おい{EOS}"
	.string "おお{EOS}"
	.string "オー{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:184 easy_chat_group_voices_line_184
	.globl gText_Rom_575C5E
gText_Rom_575C5E: @ 0x08575C5E
	.string "おっと{EOS}"
	.if (. - gText_Rom_575C5E) > 0x4
	.error "gText_Rom_575C5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C5E) < 0x4
	.space 0x4 - (. - gText_Rom_575C5E)
	.endif

.elseif .L__inc_fragment_select_dad7bc188d45 == 2
	@ src/data/easy_chat/easy_chat_group_voices.h:190 easy_chat_group_voices_line_190
	.globl gText_Rom_575C62
gText_Rom_575C62: @ 0x08575C62
	.string "がーん{EOS}"
	.if (. - gText_Rom_575C62) > 0x4
	.error "gText_Rom_575C62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C62) < 0x4
	.space 0x4 - (. - gText_Rom_575C62)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:196 easy_chat_group_voices_line_196
	.globl gText_Rom_575C66
gText_Rom_575C66: @ 0x08575C66
	.string "キャー{EOS}"
	.if (. - gText_Rom_575C66) > 0x4
	.error "gText_Rom_575C66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C66) < 0x4
	.space 0x4 - (. - gText_Rom_575C66)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:202 easy_chat_group_voices_line_202
	.globl gText_Rom_575C6A
gText_Rom_575C6A: @ 0x08575C6A
	.string "ギャー{EOS}"
	.if (. - gText_Rom_575C6A) > 0x4
	.error "gText_Rom_575C6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C6A) < 0x4
	.space 0x4 - (. - gText_Rom_575C6A)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:208 easy_chat_group_voices_line_208
	.globl gText_Rom_575C6E
gText_Rom_575C6E: @ 0x08575C6E
	.string "ぐふふ{EOS}"
	.if (. - gText_Rom_575C6E) > 0x4
	.error "gText_Rom_575C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C6E) < 0x4
	.space 0x4 - (. - gText_Rom_575C6E)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:214 easy_chat_group_voices_line_214
	.globl gText_Rom_575C72
gText_Rom_575C72: @ 0x08575C72
	.string "げっ{EOS}"
	.if (. - gText_Rom_575C72) > 0x3
	.error "gText_Rom_575C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C72) < 0x3
	.space 0x3 - (. - gText_Rom_575C72)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:220 easy_chat_group_voices_line_220
	.globl gText_Rom_575C75
gText_Rom_575C75: @ 0x08575C75
	.string "ちぇっ{EOS}"
	.if (. - gText_Rom_575C75) > 0x4
	.error "gText_Rom_575C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C75) < 0x4
	.space 0x4 - (. - gText_Rom_575C75)
	.endif
	@ Decoded text from ROM range: offset=0x575C79, size=0x3
	.string "てへ{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:232 easy_chat_group_voices_line_232
	.globl gText_Rom_575C7C
gText_Rom_575C7C: @ 0x08575C7C
	.string "はぁー{EOS}"
	.if (. - gText_Rom_575C7C) > 0x4
	.error "gText_Rom_575C7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C7C) < 0x4
	.space 0x4 - (. - gText_Rom_575C7C)
	.endif
	@ Decoded text from ROM range: offset=0x575C80, size=0x3
	.string "はい{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:244 easy_chat_group_voices_line_244
	.globl gText_Rom_575C83
gText_Rom_575C83: @ 0x08575C83
	.string "はっはっは{EOS}"
	.if (. - gText_Rom_575C83) > 0x6
	.error "gText_Rom_575C83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C83) < 0x6
	.space 0x6 - (. - gText_Rom_575C83)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:250 easy_chat_group_voices_line_250
	.globl gText_Rom_575C89
gText_Rom_575C89: @ 0x08575C89
	.string "ひいー{EOS}"
	.if (. - gText_Rom_575C89) > 0x4
	.error "gText_Rom_575C89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C89) < 0x4
	.space 0x4 - (. - gText_Rom_575C89)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:256 easy_chat_group_voices_line_256
	.globl gText_Rom_575C8D
gText_Rom_575C8D: @ 0x08575C8D
	.string "ひゃあ{EOS}"
	.if (. - gText_Rom_575C8D) > 0x4
	.error "gText_Rom_575C8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C8D) < 0x4
	.space 0x4 - (. - gText_Rom_575C8D)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:262 easy_chat_group_voices_line_262
	.globl gText_Rom_575C91
gText_Rom_575C91: @ 0x08575C91
	.string "ふっふっふ{EOS}"
	.if (. - gText_Rom_575C91) > 0x6
	.error "gText_Rom_575C91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C91) < 0x6
	.space 0x6 - (. - gText_Rom_575C91)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:268 easy_chat_group_voices_line_268
	.globl gText_Rom_575C97
gText_Rom_575C97: @ 0x08575C97
	.string "ププ{EOS}"
	.if (. - gText_Rom_575C97) > 0x3
	.error "gText_Rom_575C97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C97) < 0x3
	.space 0x3 - (. - gText_Rom_575C97)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:274 easy_chat_group_voices_line_274
	.globl gText_Rom_575C9A
gText_Rom_575C9A: @ 0x08575C9A
	.string "ふふん{EOS}"
	.if (. - gText_Rom_575C9A) > 0x4
	.error "gText_Rom_575C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575C9A) < 0x4
	.space 0x4 - (. - gText_Rom_575C9A)
	.endif
	@ Decoded text from ROM range: offset=0x575C9E, size=0x3
	.string "ふん{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:286 easy_chat_group_voices_line_286
	.globl gText_Rom_575CA1
gText_Rom_575CA1: @ 0x08575CA1
	.string "へっへっへ{EOS}"
	.if (. - gText_Rom_575CA1) > 0x6
	.error "gText_Rom_575CA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CA1) < 0x6
	.space 0x6 - (. - gText_Rom_575CA1)
	.endif
	@ Decoded text from ROM range: offset=0x575CA7, size=0x3
	.string "へへ{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:298 easy_chat_group_voices_line_298
	.globl gText_Rom_575CAA
gText_Rom_575CAA: @ 0x08575CAA
	.string "ほほほ{EOS}"
	.if (. - gText_Rom_575CAA) > 0x4
	.error "gText_Rom_575CAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CAA) < 0x4
	.space 0x4 - (. - gText_Rom_575CAA)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:304 easy_chat_group_voices_line_304
	.globl gText_Rom_575CAE
gText_Rom_575CAE: @ 0x08575CAE
	.string "ほら{EOS}"
	.if (. - gText_Rom_575CAE) > 0x3
	.error "gText_Rom_575CAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CAE) < 0x3
	.space 0x3 - (. - gText_Rom_575CAE)
	.endif
	@ Decoded text from ROM range: offset=0x575CB1, size=0x3
	.string "まあ{EOS}"

.elseif .L__inc_fragment_select_dad7bc188d45 == 3
	@ src/data/easy_chat/easy_chat_group_voices.h:316 easy_chat_group_voices_line_316
	.globl gText_Rom_575CB4
gText_Rom_575CB4: @ 0x08575CB4
	.string "むきー!!{EOS}"
	.if (. - gText_Rom_575CB4) > 0x6
	.error "gText_Rom_575CB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CB4) < 0x6
	.space 0x6 - (. - gText_Rom_575CB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:322 easy_chat_group_voices_line_322
	.globl gText_Rom_575CBA
gText_Rom_575CBA: @ 0x08575CBA
	.string "むふふ{EOS}"
	.if (. - gText_Rom_575CBA) > 0x4
	.error "gText_Rom_575CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CBA) < 0x4
	.space 0x4 - (. - gText_Rom_575CBA)
	.endif
	@ Decoded text from ROM range: offset=0x575CBE, size=0x3
	.string "むむ{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:334 easy_chat_group_voices_line_334
	.globl gText_Rom_575CC1
gText_Rom_575CC1: @ 0x08575CC1
	.string "よーし{EOS}"
	.if (. - gText_Rom_575CC1) > 0x4
	.error "gText_Rom_575CC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC1) < 0x4
	.space 0x4 - (. - gText_Rom_575CC1)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:340 easy_chat_group_voices_line_340
	.globl gText_Rom_575CC5
gText_Rom_575CC5: @ 0x08575CC5
	.string "よし!{EOS}"
	.if (. - gText_Rom_575CC5) > 0x4
	.error "gText_Rom_575CC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC5) < 0x4
	.space 0x4 - (. - gText_Rom_575CC5)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_575CC9
gText_Rom_575CC9: @ 0x08575CC9
	.string "ラララ{EOS}"
	.if (. - gText_Rom_575CC9) > 0x4
	.error "gText_Rom_575CC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC9) < 0x4
	.space 0x4 - (. - gText_Rom_575CC9)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:352 easy_chat_group_voices_line_352
	.globl gText_Rom_575CCD
gText_Rom_575CCD: @ 0x08575CCD
	.string "わーい{EOS}"
	.if (. - gText_Rom_575CCD) > 0x4
	.error "gText_Rom_575CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CCD) < 0x4
	.space 0x4 - (. - gText_Rom_575CCD)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:358 easy_chat_group_voices_line_358
	.globl gText_Rom_575CD1
gText_Rom_575CD1: @ 0x08575CD1
	.string "わーん!!{EOS}"
	.if (. - gText_Rom_575CD1) > 0x6
	.error "gText_Rom_575CD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CD1) < 0x6
	.space 0x6 - (. - gText_Rom_575CD1)
	.endif
	@ Decoded text from ROM range: offset=0x575CD7, size=0x3
	.string "ワオ{EOS}"

	@ src/data/easy_chat/easy_chat_group_voices.h:370 easy_chat_group_voices_line_370
	.globl gText_Rom_575CDA
gText_Rom_575CDA: @ 0x08575CDA
	.string "わっ!!{EOS}"
	.if (. - gText_Rom_575CDA) > 0x5
	.error "gText_Rom_575CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CDA) < 0x5
	.space 0x5 - (. - gText_Rom_575CDA)
	.endif
	@ analyzed canonical ROM range 0x08575CDF-0x08575FDB
	.globl gText_Rom_575CDF
gText_Rom_575CDF: @ 0x08575CDF
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x9 bytes
	.byte 0x2C, 0x1A, 0x1A, 0x1A, 0xAB, 0xFF, 0x00, 0x00, 0x00
	.globl gEasyChatGroup_Voices
gEasyChatGroup_Voices: @ 0x08575CE8
	easy_chat_word_info 0x08575BF4, 0, 1 @ word 0
	easy_chat_word_info 0x08575BF6, 1, 1 @ word 1
	easy_chat_word_info 0x08575BF9, 2, 1 @ word 2
	easy_chat_word_info 0x08575BFC, 3, 1 @ word 3
	easy_chat_word_info 0x08575BFE, 4, 1 @ word 4
	easy_chat_word_info 0x08575C00, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_575C03, 6, 1 @ word 6
	easy_chat_word_info gEasyChatWord_Voices_Dash, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_575C09, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_575C0D, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_575C11, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_575C15, 11, 1 @ word 11
	easy_chat_word_info 0x08575C19, 12, 1 @ word 12
	easy_chat_word_info 0x08575C1C, 13, 1 @ word 13
	easy_chat_word_info 0x08575C1F, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_575C22, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_575C26, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_575C2B, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_575C31, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_575C36, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_575C3A, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_575C3E, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_575C42, 22, 1 @ word 22
	easy_chat_word_info 0x08575C47, 23, 1 @ word 23
	easy_chat_word_info 0x08575C4A, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_575C4D, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_575C51, 26, 1 @ word 26
	easy_chat_word_info 0x08575C55, 27, 1 @ word 27
	easy_chat_word_info 0x08575C58, 28, 1 @ word 28
	easy_chat_word_info 0x08575C5B, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_575C5E, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_575C62, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_575C66, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_575C6A, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_575C6E, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_575C72, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_575C75, 36, 1 @ word 36
	easy_chat_word_info 0x08575C79, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_575C7C, 38, 1 @ word 38
	easy_chat_word_info 0x08575C80, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_575C83, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_575C89, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_575C8D, 42, 1 @ word 42
	easy_chat_word_info gText_Rom_575C91, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_575C97, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_575C9A, 45, 1 @ word 45
	easy_chat_word_info 0x08575C9E, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_575CA1, 47, 1 @ word 47
	easy_chat_word_info 0x08575CA7, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_575CAA, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_575CAE, 50, 1 @ word 50
	easy_chat_word_info 0x08575CB1, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_575CB4, 52, 1 @ word 52
	easy_chat_word_info gText_Rom_575CBA, 53, 1 @ word 53
	easy_chat_word_info 0x08575CBE, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_575CC1, 55, 1 @ word 55
	easy_chat_word_info gText_Rom_575CC5, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_575CC9, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_575CCD, 58, 1 @ word 58
	easy_chat_word_info gText_Rom_575CD1, 59, 1 @ word 59
	easy_chat_word_info 0x08575CD7, 60, 1 @ word 60
	easy_chat_word_info gText_Rom_575CDA, 61, 1 @ word 61
	easy_chat_word_info gText_Rom_575CDF, 62, 1 @ word 62
.elseif .L__inc_fragment_select_dad7bc188d45 == 4
	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_8754B3
gText_Rom_8754B3: @ 0x088754B3
	.string "………{EOS}"
	.if (. - gText_Rom_8754B3) > 0x4
	.error "gText_Rom_8754B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754B3) < 0x4
	.space 0x4 - (. - gText_Rom_8754B3)
	.endif
	@ analyzed canonical ROM range 0x088754B7-0x088754D5
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0xB0, 0xB0, 0xB0, 0xA4, 0xBE, 0x28, 0xEB, 0x39, 0x40, 0x86, 0xBE, 0x2F, 0x86, 0x34, 0x83, 0x3B
	.byte 0x83, 0x42, 0x83, 0x45, 0x83, 0x49, 0x83, 0x4C, 0x83, 0x50, 0x86, 0xFF, 0x3B, 0x5C, 0xB0
	.globl gText_Rom_8754D6
gText_Rom_8754D6: @ 0x088754D6
	.string "………{EOS}"
	.if (. - gText_Rom_8754D6) > 0x4
	.error "gText_Rom_8754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_8754D6) < 0x4
	.space 0x4 - (. - gText_Rom_8754D6)
	.endif
	@ analyzed canonical ROM range 0x088754DA-0x08876034
	@ pass3: M4A audio region; proven headers/tracks are labeled below
	.byte 0xB0, 0xFF, 0xB0, 0xFF, 0xB0, 0xF3, 0xA4, 0xBE, 0x28, 0xEB, 0x39, 0x40, 0x86, 0xBE, 0x2F, 0x86
	.byte 0x34, 0x83, 0x3B, 0x83, 0x42, 0x83, 0x45, 0x83, 0x49, 0x83, 0x4C, 0x83, 0x50, 0x86, 0xB2, 0xA3
	.byte 0x54, 0x87, 0x08, 0xB1

	.globl SongTrack_MUS_ROUTE110_09
SongTrack_MUS_ROUTE110_09: @ 0x088754FE
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_vol 0x50
	m4a_wait 0x8C @ W12
	m4a_wait 0x92 @ W18
	m4a_note_key_vel 0xD2, 0x28, 0x40 @ N03
	m4a_wait 0x83 @ W03
	m4a_note 0xD2 @ N03
	m4a_wait 0x83 @ W03
	m4a_note_key_vel 0xD5, 0x28, 0x70 @ N06
	m4a_wait 0xA0 @ W48
	m4a_note 0xD5 @ N06
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x08875505
	m4a_patt 0x08875505
	m4a_patt 0x08875505
	m4a_note_key_vel 0xD5, 0x28, 0x50 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_note_key_vel 0xD5, 0x28, 0x50 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_note 0xD5 @ N06
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x50 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_note 0xD5 @ N06
	m4a_wait 0x86 @ W06
	m4a_pend
	m4a_patt 0x08875522
	m4a_patt 0x08875540
	m4a_patt 0x08875522
	m4a_patt 0x08875540
	m4a_patt 0x08875522
	m4a_note_key_vel 0xD5, 0x28, 0x50 @ N06
	m4a_wait 0x92 @ W18
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0x8C @ W12
	m4a_running_note_key_vel 0x28, 0x3C @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x38 @ N06 (running status)
	m4a_wait 0x86 @ W06
	m4a_running_note_key_vel 0x28, 0x74 @ N06 (running status)
	m4a_wait 0xA0 @ W48
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_goto 0x08875505
	m4a_fine
	.globl SongHeader_MUS_ROUTE110
SongHeader_MUS_ROUTE110: @ 0x08875598
	@ M4A song header: song 360 (MUS_ROUTE110)
	m4a_song_header 9, 0, 0, 0xB2, VoiceGroup_JP_085FEC58
	.4byte SongTrack_MUS_ROUTE110_01
	.4byte SongTrack_MUS_ROUTE110_02
	.4byte SongTrack_MUS_ROUTE110_03
	.4byte SongTrack_MUS_ROUTE110_04
	.4byte SongTrack_MUS_ROUTE110_05
	.4byte SongTrack_MUS_ROUTE110_06
	.4byte SongTrack_MUS_ROUTE110_07
	.4byte SongTrack_MUS_ROUTE110_08
	.4byte SongTrack_MUS_ROUTE110_09

	.globl SongTrack_MUS_ROUTE120_01
SongTrack_MUS_ROUTE120_01: @ 0x088755C4
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_tempo 0x43
	m4a_voice 0x51
	m4a_vol 0x50
	m4a_note_key_vel 0xFC, 0x2D, 0x50 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xF7, 0x2B @ N72
	m4a_wait 0xAB @ W80
	m4a_voice 0x53
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xFC, 0x29 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key 0xFC, 0x28 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xFF @ N96
	m4a_wait 0xB0 @ W96
	m4a_note_key_vel 0xDB, 0x2D, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088755E9
	m4a_note_key_vel 0xDB, 0x2B, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x088755F9
	m4a_note_key_vel 0xDB, 0x29, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_pend
	m4a_patt 0x08875609
	m4a_note_key_vel 0xDB, 0x28, 0x50 @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xDB @ N12
	m4a_wait 0x98 @ W24
	m4a_note 0xE7 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x2C @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x28 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2C @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_voice 0x53
	m4a_note_key_vel 0xEB, 0x2D, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE8 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xEB, 0x2C, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x34 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x31 @ N16
	m4a_wait 0x90 @ W16
	m4a_pend
	m4a_voice 0x53
	m4a_note_key_vel 0xEB, 0x2B, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE8 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xEB, 0x2A, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x32 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2F @ N16
	m4a_wait 0x90 @ W16
	m4a_pend
	m4a_voice 0x53
	m4a_note_key_vel 0xEB, 0x29, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE8 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_pend
	m4a_note_key_vel 0xEB, 0x28, 0x50 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x31 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2D @ N16
	m4a_wait 0x90 @ W16
	m4a_pend
	m4a_voice 0x53
	m4a_note_key 0xEB, 0x2A @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note_key 0xDB, 0x2D @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2C @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2A @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x53
	m4a_note_key 0xEB, 0x28 @ N36
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_voice 0x51
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2A @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x90 @ W16
	m4a_patt 0x0887562E
	m4a_patt 0x0887563D
	m4a_patt 0x0887564D
	m4a_patt 0x0887565C
	m4a_patt 0x0887566C
	m4a_patt 0x0887567B
	m4a_voice 0x53
	m4a_note_key_vel 0xE8, 0x34, 0x50 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xEA @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD3, 0x2F @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEF, 0x34 @ N48
	m4a_wait 0xA0 @ W48
	m4a_voice 0x51
	m4a_note_key 0xDB, 0x28 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x2A @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x2C @ N16
	m4a_wait 0x90 @ W16
	m4a_goto 0x088755C6
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_02
SongTrack_MUS_ROUTE120_02: @ 0x088756EE
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x3C
	m4a_vol 0x50
	m4a_pan 0x37
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x4C, 0x60 @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4A @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x47 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x45 @ N24 (running status)
	m4a_wait 0x98 @ W24
	m4a_note_key 0xEE, 0x43 @ N44
	m4a_wait 0x92 @ W18
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_vol 0x49
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_mod 0x00
	m4a_note_key 0xDB, 0x47 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEA, 0x47 @ N32
	m4a_wait 0x92 @ W18
	m4a_vol 0x49
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xEB, 0x45 @ N36
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x43 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xFA, 0x45 @ N80
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x3F
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x0D
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x02 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xDB, 0x41 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x43 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x48 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEE, 0x47 @ N44
	m4a_wait 0x92 @ W18
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_vol 0x49
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x36 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_mod 0x00
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x48 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFE, 0x47 @ N92
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x3F
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x41 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x4D
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_wait 0x87 @ W07
	m4a_voice 0x38
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xE7, 0x4C, 0x6C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x4A @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x49 @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE3, 0x47 @ N20
	m4a_wait 0x8C @ W12
	m4a_mod 0x04
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE3, 0x49 @ N20
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4A @ N20 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4C @ N20 (running status)
	m4a_wait 0x88 @ W08
	m4a_mod 0x04
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_tie_key 0x47 @ TIE
	m4a_wait 0xA0 @ W48
	m4a_mod 0x06
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x81 @ W01
	m4a_vol 0x34
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x29 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x23 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x18 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x12 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x08 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x02 @ VOL (running status)
	m4a_wait 0x82 @ W02
	m4a_pend
	m4a_eot_key 0x47
	m4a_mod 0x00
	m4a_wait 0x88 @ W08
	m4a_voice 0x2E
	m4a_vol 0x50
	m4a_pan 0x29
	m4a_note_key_vel 0xD3, 0x43, 0x2C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x48 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4A @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x51 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x54 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x56 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5B @ N04 (running status)
	m4a_wait 0x98 @ W24
	m4a_voice 0x38
	m4a_pan 0x36
	m4a_note_key_vel 0xE7, 0x4D, 0x6C @ N24
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE7, 0x4F @ N24
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4D @ N24 (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x05
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_note_key 0xE3, 0x4C @ N20
	m4a_wait 0x8C @ W12
	m4a_mod 0x04
	m4a_wait 0x88 @ W08
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_note_key 0xE3, 0x4A @ N20
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x48 @ N20 (running status)
	m4a_wait 0x98 @ W24
	m4a_running_note_key 0x4D @ N20 (running status)
	m4a_wait 0x88 @ W08
	m4a_mod 0x04
	m4a_wait 0x8C @ W12
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x84 @ W04
	m4a_tie_key 0x4C @ TIE
	m4a_wait 0xA0 @ W48
	m4a_mod 0x05
	m4a_wait 0x98 @ W24
	m4a_vol 0x50
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x4A @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x39 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_patt 0x088757EB
	m4a_eot_key 0x4C
	m4a_mod 0x00
	m4a_wait 0x88 @ W08
	m4a_voice 0x2E
	m4a_vol 0x50
	m4a_pan 0x28
	m4a_note_key_vel 0xD3, 0x47, 0x2C @ N04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x4E @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x50 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x53 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x55 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x58 @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5C @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x5F @ N04 (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x38
	m4a_pan 0x37
	m4a_note_key_vel 0xE8, 0x45, 0x6C @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x50 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFB, 0x4C @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_wait 0x86 @ W06
	m4a_vol 0x47
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note 0xE8 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x49 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFB, 0x4A @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x05
	m4a_wait 0x86 @ W06
	m4a_vol 0x47
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x3E @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x34 @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x2F @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x1D @ VOL (running status)
	m4a_wait 0x85 @ W05
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x06 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note_key 0xE8, 0x4D @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x4A @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x4D @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x4F @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4D @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x51 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x50 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEE, 0x4C @ N44
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x50
	m4a_note_key 0xE8, 0x4E @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x50 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x55 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x53 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x58 @ N08
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x81 @ W01
	m4a_note_key 0xDB, 0x56 @ N12
	m4a_wait 0x8E @ W14
	m4a_mod 0x00
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x55 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEE, 0x53 @ N44
	m4a_wait 0x8F @ W15
	m4a_mod 0x05
	m4a_wait 0x83 @ W03
	m4a_vol 0x4A
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x44 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x3A @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2B @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x22 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x0D @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_voice 0x30
	m4a_vol 0x50
	m4a_note_key_vel 0xE8, 0x45, 0x60 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x49 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x50 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFB, 0x4C @ N84
	m4a_wait 0x9C @ W36
	m4a_mod 0x03
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_vol 0x4E
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note 0xE8 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x4F @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4F @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xFC, 0x4E @ N88
	m4a_wait 0x9C @ W36
	m4a_mod 0x03
	m4a_wait 0x98 @ W24
	m4a_wait 0x83 @ W03
	m4a_vol 0x4E
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_wait 0x8C @ W12
	m4a_vol 0x50
	m4a_note_key 0xE8, 0x4D @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x53 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x51 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x55 @ N28
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x8F @ W15
	m4a_running_cmd_u8 0x00 @ MOD (running status)
	m4a_wait 0x82 @ W02
	m4a_note_key 0xD7, 0x56 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEE, 0x51 @ N44
	m4a_wait 0x8F @ W15
	m4a_mod 0x03
	m4a_wait 0x89 @ W09
	m4a_vol 0x4E
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x47 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x3C @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x1E @ VOL (running status)
	m4a_wait 0x83 @ W03
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_vol 0x50
	m4a_note_key 0xEA, 0x53 @ N32
	m4a_wait 0x9B @ W32
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x50 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x51 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x53 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x51 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x53 @ N28
	m4a_wait 0x9B @ W32
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_vol 0x4D
	m4a_note_key 0xEE, 0x56 @ N44
	m4a_wait 0x86 @ W06
	m4a_vol 0x4A
	m4a_wait 0x83 @ W03
	m4a_running_cmd_u8 0x45 @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_mod 0x03
	m4a_vol 0x48
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x4B @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x4E @ VOL (running status)
	m4a_wait 0x86 @ W06
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_wait 0x8C @ W12
	m4a_mod 0x00
	m4a_wait 0x83 @ W03
	m4a_goto 0x088756F0
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_03
SongTrack_MUS_ROUTE120_03: @ 0x08875A2C
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x52
	m4a_xcmd_u8 0x08, 0x08 @ XIECV
	m4a_running_xcmd_u8 0x09, 0x08 @ XIECL (running status)
	m4a_pan 0x70
	m4a_vol 0x50
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x3D, 0x34 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_note_key 0xE7, 0x39 @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x3B @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x37 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE8, 0x37 @ N28
	m4a_wait 0x9C @ W36
	m4a_running_note_key 0x39 @ N28 (running status)
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x3B @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_note_key 0xDB, 0x3C @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x84 @ W04
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key_vel 0x38, 0x3C @ N12 (running status)
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x07
	m4a_pan 0x41
	m4a_bend 0x3C
	m4a_wait 0x84 @ W04
	m4a_note_key_vel 0xD7, 0x39, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x53 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x84 @ W04
	m4a_wait 0x84 @ W04
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x38 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x6F
	m4a_note_key_vel 0xDF, 0x34, 0x38 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x38 @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x3D, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3D @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_voice 0x05
	m4a_vol 0x50
	m4a_bend 0x3C
	m4a_note_key_vel 0xD7, 0x50, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_bend 0x3E
	m4a_note_key 0xD7, 0x55 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x58 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x70
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x3D, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x39, 0x30 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x36 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x39 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x05
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_bend 0x3C
	m4a_note_key_vel 0xD7, 0x4E, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_bend 0x3E
	m4a_note_key 0xD7, 0x51 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x56 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x70
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x39, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xE7, 0x39, 0x38 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x05
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_bend 0x3C
	m4a_note_key_vel 0xD7, 0x4C, 0x20 @ N08
	m4a_wait 0x88 @ W08
	m4a_bend 0x3E
	m4a_note_key 0xD7, 0x51 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x55 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_pan 0x70
	m4a_bend 0x40
	m4a_note_key_vel 0xDB, 0x42, 0x40 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDF @ N16
	m4a_wait 0x88 @ W08
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_wait 0x84 @ W04
	m4a_note_key 0xD3, 0x42 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x44 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x42 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDB, 0x44 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDF @ N16
	m4a_wait 0x88 @ W08
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x52
	m4a_vol 0x24
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x47 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xDB, 0x45, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD3, 0x3D @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x40 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3D @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x3D, 0x38 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x44 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xDB, 0x3D, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x3D @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x45, 0x38 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x42 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x3E @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xDB, 0x39, 0x2C @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xD7 @ N08
	m4a_wait 0x88 @ W08
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_note_key_vel 0xD7, 0x39, 0x18 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x39, 0x2C @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3B @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3D @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x39 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x34 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDB, 0x39 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x98 @ W24
	m4a_voice 0x52
	m4a_note_key 0xDB, 0x38 @ N12
	m4a_wait 0x8C @ W12
	m4a_voice 0x54
	m4a_note 0xDB @ N12
	m4a_wait 0x8C @ W12
	m4a_note 0xDF @ N16
	m4a_wait 0x90 @ W16
	m4a_voice 0x52
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x3E, 0x3C @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x3B @ N16
	m4a_wait 0x90 @ W16
	m4a_goto 0x08875A2E
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_04
SongTrack_MUS_ROUTE120_04: @ 0x08875DA4
	@ M4A track start proven by song header pointer

	m4a_keysh 0x00
	m4a_voice 0x50
	m4a_xcmd_u8 0x08, 0x08 @ XIECV
	m4a_running_xcmd_u8 0x09, 0x08 @ XIECL (running status)
	m4a_pan 0x10
	m4a_vol 0x50
	m4a_note_key_vel 0xFC, 0x40, 0x34 @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xF7 @ N72
	m4a_wait 0xA8 @ W72
	m4a_note_key 0xE7, 0x3D @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE8, 0x3B @ N28
	m4a_wait 0x9C @ W36
	m4a_running_note_key 0x3D @ N28 (running status)
	m4a_wait 0x9C @ W36
	m4a_note_key 0xE7, 0x3E @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key 0xFC, 0x3C @ N88
	m4a_wait 0xB0 @ W96
	m4a_note 0xEF @ N48
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xDB, 0x41 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3E @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xEE, 0x40 @ N44
	m4a_wait 0xA0 @ W48
	m4a_note_key 0xDB, 0x3B @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xFF, 0x3B, 0x3C @ N96
	m4a_wait 0xB0 @ W96
	m4a_voice 0x06
	m4a_pan 0x40
	m4a_note_key_vel 0xD7, 0x39, 0x38 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4F @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x37 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3E @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4D @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x48 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x35 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x39 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x49 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x53 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4C @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x4A @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x47 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x38 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xDF, 0x38, 0x40 @ N16
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3B @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3E @ N16 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x40, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x40 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_voice 0x04
	m4a_vol 0x50
	m4a_note_key_vel 0xD7, 0x50, 0x38 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x58 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xEA, 0x40, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x3E, 0x3C @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x3B @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xE7, 0x3E, 0x38 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x04
	m4a_pan 0x41
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_note_key 0xD7, 0x4E @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x56 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xEA, 0x3E, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x41 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x40 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x41 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x3D @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xE7, 0x3D, 0x38 @ N24
	m4a_wait 0x84 @ W04
	m4a_vol 0x4A
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x42 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x2D @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_voice 0x04
	m4a_pan 0x40
	m4a_wait 0x88 @ W08
	m4a_vol 0x50
	m4a_note_key 0xD7, 0x4C @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x51 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x55 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_voice 0x50
	m4a_pan 0x10
	m4a_note_key_vel 0xE8, 0x45, 0x40 @ N28
	m4a_wait 0x94 @ W20
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD3, 0x44 @ N04
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N04 (running status)
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x47 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x45 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key 0xE8, 0x47 @ N28
	m4a_wait 0x94 @ W20
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xDB @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x49 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x4A @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x49, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note_key 0xD3, 0x40 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xEA, 0x40 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x40, 0x40 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x44 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x49 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x40, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x43 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x42 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x43 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xDB, 0x3E @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xD7, 0x42 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x4A, 0x40 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x45 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x42 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xEA, 0x3E, 0x34 @ N32
	m4a_wait 0x9D @ W40
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xE7 @ N24
	m4a_wait 0x8C @ W12
	m4a_vol 0x42
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x33 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x24 @ VOL (running status)
	m4a_wait 0x84 @ W04
	m4a_running_cmd_u8 0x50 @ VOL (running status)
	m4a_note_key 0xD7, 0x45 @ N08
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x44 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_running_note_key 0x45 @ N08 (running status)
	m4a_wait 0x88 @ W08
	m4a_note_key 0xE7, 0x3D @ N24
	m4a_wait 0x98 @ W24
	m4a_note_key_vel 0xD7, 0x3D, 0x18 @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xD3, 0x3D, 0x34 @ N04
	m4a_wait 0x88 @ W08
	m4a_note_key 0xD7, 0x3E @ N08
	m4a_wait 0x88 @ W08
	m4a_note_key_vel 0xDB, 0x40, 0x38 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x3D @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x39 @ N16
	m4a_wait 0x90 @ W16
	m4a_note_key_vel 0xE7, 0x3B, 0x34 @ N24
	m4a_wait 0x9B @ W32
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xD3 @ N04
	m4a_wait 0x88 @ W08
	m4a_note 0xEC @ N40
	m4a_wait 0xA0 @ W48
	m4a_note 0xEC @ N40
	m4a_wait 0xA0 @ W48
	m4a_note_key_vel 0xDB, 0x42, 0x44 @ N12
	m4a_wait 0x90 @ W16
	m4a_running_note_key 0x40 @ N12 (running status)
	m4a_wait 0x90 @ W16
	m4a_note_key 0xDF, 0x3E @ N16
	m4a_wait 0x90 @ W16
	m4a_goto 0x08875DA6
	m4a_fine
	.globl SongTrack_MUS_ROUTE120_05
SongTrack_MUS_ROUTE120_05: @ 0x08876027
	@ M4A track start proven by song header pointer
	m4a_keysh 0x00
	m4a_voice 0x00
	m4a_vol 0x50
	m4a_note_key_vel 0xFF, 0x39, 0x5C @ N96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	m4a_wait 0xB0 @ W96
	.globl gText_Rom_876035
gText_Rom_876035: @ 0x08876035
	.string "………{EOS}"
	.if (. - gText_Rom_876035) > 0x4
	.error "gText_Rom_876035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_876035) < 0x4
	.space 0x4 - (. - gText_Rom_876035)
	.endif
	.space 0x5, 0xB0

	@ src/data/easy_chat/easy_chat_group_voices.h:40 easy_chat_group_voices_line_40
	.globl gText_Rom_87603E
gText_Rom_87603E: @ 0x0887603E
	.string "………{EOS}"
	.if (. - gText_Rom_87603E) > 0x4
	.error "gText_Rom_87603E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_87603E) < 0x4
	.space 0x4 - (. - gText_Rom_87603E)
	.endif
	.space 0x5, 0xB0

.endif
