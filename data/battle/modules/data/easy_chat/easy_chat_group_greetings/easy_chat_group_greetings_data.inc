	@ src/data/easy_chat/easy_chat_group_greetings.h:4 easy_chat_group_greetings_line_4
	.globl gText_Rom_575460
gText_Rom_575460: @ 0x08575460
	.string "ありがとう{EOS}"
	.if (. - gText_Rom_575460) > 0x6
	.error "gText_Rom_575460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575460) < 0x6
	.space 0x6 - (. - gText_Rom_575460)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:10 easy_chat_group_greetings_line_10
	.globl gText_Rom_575466
gText_Rom_575466: @ 0x08575466
	.string "イエス{EOS}"
	.if (. - gText_Rom_575466) > 0x4
	.error "gText_Rom_575466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575466) < 0x4
	.space 0x4 - (. - gText_Rom_575466)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:16 easy_chat_group_greetings_line_16
	.globl gText_Rom_57546A
gText_Rom_57546A: @ 0x0857546A
	.string "いくぜ{EOS}"
	.if (. - gText_Rom_57546A) > 0x4
	.error "gText_Rom_57546A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546A) < 0x4
	.space 0x4 - (. - gText_Rom_57546A)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:22 easy_chat_group_greetings_line_22
	.globl gText_Rom_57546E
gText_Rom_57546E: @ 0x0857546E
	.string "いくよ{EOS}"
	.if (. - gText_Rom_57546E) > 0x4
	.error "gText_Rom_57546E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546E) < 0x4
	.space 0x4 - (. - gText_Rom_57546E)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:28 easy_chat_group_greetings_line_28
	.globl gText_Rom_575472
gText_Rom_575472: @ 0x08575472
	.string "いくわよ{EOS}"
	.if (. - gText_Rom_575472) > 0x5
	.error "gText_Rom_575472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575472) < 0x5
	.space 0x5 - (. - gText_Rom_575472)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:34 easy_chat_group_greetings_line_34
	.globl gText_Rom_575477
gText_Rom_575477: @ 0x08575477
	.string "いやー{EOS}"
	.if (. - gText_Rom_575477) > 0x4
	.error "gText_Rom_575477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575477) < 0x4
	.space 0x4 - (. - gText_Rom_575477)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:40 easy_chat_group_greetings_line_40
	.globl gText_Rom_57547B
gText_Rom_57547B: @ 0x0857547B
	.string "いらっしゃい{EOS}"
	.if (. - gText_Rom_57547B) > 0x7
	.error "gText_Rom_57547B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57547B) < 0x7
	.space 0x7 - (. - gText_Rom_57547B)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:46 easy_chat_group_greetings_line_46
	.globl gText_Rom_575482
gText_Rom_575482: @ 0x08575482
	.string "おーい{EOS}"
	.if (. - gText_Rom_575482) > 0x4
	.error "gText_Rom_575482 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575482) < 0x4
	.space 0x4 - (. - gText_Rom_575482)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:52 easy_chat_group_greetings_line_52
	.globl gText_Rom_575486
gText_Rom_575486: @ 0x08575486
	.string "おっす{EOS}"
	.if (. - gText_Rom_575486) > 0x4
	.error "gText_Rom_575486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575486) < 0x4
	.space 0x4 - (. - gText_Rom_575486)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:58 easy_chat_group_greetings_line_58
	.globl gText_Rom_57548A
gText_Rom_57548A: @ 0x0857548A
	.string "おめでとう{EOS}"
	.if (. - gText_Rom_57548A) > 0x6
	.error "gText_Rom_57548A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57548A) < 0x6
	.space 0x6 - (. - gText_Rom_57548A)
	.endif
	@ Decoded text from ROM range: offset=0x575490, size=0x5
	.string "ください{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:70 easy_chat_group_greetings_line_70
	.globl gText_Rom_575495
gText_Rom_575495: @ 0x08575495
	.string "ゴメン{EOS}"
	.if (. - gText_Rom_575495) > 0x4
	.error "gText_Rom_575495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575495) < 0x4
	.space 0x4 - (. - gText_Rom_575495)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:76 easy_chat_group_greetings_line_76
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575499
gText_Rom_575499: @ 0x08575499
	.string "ごめんなさい{EOS}"
	.if (. - gText_Rom_575499) != 0x7
	.error "gText_Rom_575499 must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:82 easy_chat_group_greetings_line_82
	.globl gText_Rom_5754A0
gText_Rom_5754A0: @ 0x085754A0
	.string "ごめんね{EOS}"
	.if (. - gText_Rom_5754A0) > 0x5
	.error "gText_Rom_5754A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A0) < 0x5
	.space 0x5 - (. - gText_Rom_5754A0)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:88 easy_chat_group_greetings_line_88
	.globl gText_Rom_5754A5
gText_Rom_5754A5: @ 0x085754A5
	.string "こらっ{EOS}"
	.if (. - gText_Rom_5754A5) > 0x4
	.error "gText_Rom_5754A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A5) < 0x4
	.space 0x4 - (. - gText_Rom_5754A5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:94 easy_chat_group_greetings_line_94 (+1 aliases)
	.globl gText_Rom_5754A9
gText_Rom_5754A9: @ 0x085754A9
	.string "こんにちは{EOS}"
	.if (. - gText_Rom_5754A9) > 0x6
	.error "gText_Rom_5754A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A9) < 0x6
	.space 0x6 - (. - gText_Rom_5754A9)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
	.globl gText_Rom_5754AF
gText_Rom_5754AF: @ 0x085754AF
	.string "さようなら{EOS}"
	.if (. - gText_Rom_5754AF) > 0x6
	.error "gText_Rom_5754AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754AF) < 0x6
	.space 0x6 - (. - gText_Rom_5754AF)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:106 easy_chat_group_greetings_line_106 (+1 aliases)
	.globl gText_Rom_5754B5
gText_Rom_5754B5: @ 0x085754B5
	.string "サンキュー{EOS}"
	.if (. - gText_Rom_5754B5) > 0x6
	.error "gText_Rom_5754B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754B5) < 0x6
	.space 0x6 - (. - gText_Rom_5754B5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:112 easy_chat_group_greetings_line_112
	.globl gText_Rom_5754BB
gText_Rom_5754BB: @ 0x085754BB
	.string "さんじょう{EOS}"
	.if (. - gText_Rom_5754BB) > 0x6
	.error "gText_Rom_5754BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754BB) < 0x6
	.space 0x6 - (. - gText_Rom_5754BB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:118 easy_chat_group_greetings_line_118
	.globl gText_Rom_5754C1
gText_Rom_5754C1: @ 0x085754C1
	.string "しっけい{EOS}"
	.if (. - gText_Rom_5754C1) > 0x5
	.error "gText_Rom_5754C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C1) < 0x5
	.space 0x5 - (. - gText_Rom_5754C1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:124 easy_chat_group_greetings_line_124
	.globl gText_Rom_5754C6
gText_Rom_5754C6: @ 0x085754C6
	.string "しつれい{EOS}"
	.if (. - gText_Rom_5754C6) > 0x5
	.error "gText_Rom_5754C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754C6) < 0x5
	.space 0x5 - (. - gText_Rom_5754C6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:130 easy_chat_group_greetings_line_130
	.globl gText_Rom_5754CB
gText_Rom_5754CB: @ 0x085754CB
	.string "じゃーね{EOS}"
	.if (. - gText_Rom_5754CB) > 0x5
	.error "gText_Rom_5754CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754CB) < 0x5
	.space 0x5 - (. - gText_Rom_5754CB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:136 easy_chat_group_greetings_line_136
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5754D0
gText_Rom_5754D0: @ 0x085754D0
	.string "すみません{EOS}"
	.if (. - gText_Rom_5754D0) != 0x6
	.error "gText_Rom_5754D0 must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:142 easy_chat_group_greetings_line_142
	.globl gText_Rom_5754D6
gText_Rom_5754D6: @ 0x085754D6
	.string "それじゃ{EOS}"
	.if (. - gText_Rom_5754D6) > 0x5
	.error "gText_Rom_5754D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754D6) < 0x5
	.space 0x5 - (. - gText_Rom_5754D6)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:148 easy_chat_group_greetings_line_148
	.globl gText_Rom_5754DB
gText_Rom_5754DB: @ 0x085754DB
	.string "どうぞ{EOS}"
	.if (. - gText_Rom_5754DB) > 0x4
	.error "gText_Rom_5754DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DB) < 0x4
	.space 0x4 - (. - gText_Rom_5754DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:154 easy_chat_group_greetings_line_154
	.globl gText_Rom_5754DF
gText_Rom_5754DF: @ 0x085754DF
	.string "どうも{EOS}"
	.if (. - gText_Rom_5754DF) > 0x4
	.error "gText_Rom_5754DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754DF) < 0x4
	.space 0x4 - (. - gText_Rom_5754DF)
	.endif
	@ Decoded text from ROM range: offset=0x5754E3, size=0x3
	.string "なあ{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:166 easy_chat_group_greetings_line_166
	.globl gText_Rom_5754E6
gText_Rom_5754E6: @ 0x085754E6
	.string "なんじゃ{EOS}"
	.if (. - gText_Rom_5754E6) > 0x5
	.error "gText_Rom_5754E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754E6) < 0x5
	.space 0x5 - (. - gText_Rom_5754E6)
	.endif
	@ Decoded text from ROM range: offset=0x5754EB, size=0x3
	.string "ねえ{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:178 easy_chat_group_greetings_line_178
	.globl gText_Rom_5754EE
gText_Rom_5754EE: @ 0x085754EE
	.string "ノー{EOS}"
	.if (. - gText_Rom_5754EE) > 0x3
	.error "gText_Rom_5754EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754EE) < 0x3
	.space 0x3 - (. - gText_Rom_5754EE)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:184 easy_chat_group_greetings_line_184
	.globl gText_Rom_5754F1
gText_Rom_5754F1: @ 0x085754F1
	.string "ハーイ{EOS}"
	.if (. - gText_Rom_5754F1) > 0x4
	.error "gText_Rom_5754F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F1) < 0x4
	.space 0x4 - (. - gText_Rom_5754F1)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:190 easy_chat_group_greetings_line_190
	.globl gText_Rom_5754F5
gText_Rom_5754F5: @ 0x085754F5
	.string "はいはい{EOS}"
	.if (. - gText_Rom_5754F5) > 0x5
	.error "gText_Rom_5754F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754F5) < 0x5
	.space 0x5 - (. - gText_Rom_5754F5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:196 easy_chat_group_greetings_line_196
	.globl gText_Rom_5754FA
gText_Rom_5754FA: @ 0x085754FA
	.string "バイバイ{EOS}"
	.if (. - gText_Rom_5754FA) > 0x5
	.error "gText_Rom_5754FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FA) < 0x5
	.space 0x5 - (. - gText_Rom_5754FA)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:202 easy_chat_group_greetings_line_202
	.globl gText_Rom_5754FF
gText_Rom_5754FF: @ 0x085754FF
	.string "はじめまして{EOS}"
	.if (. - gText_Rom_5754FF) > 0x7
	.error "gText_Rom_5754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754FF) < 0x7
	.space 0x7 - (. - gText_Rom_5754FF)
	.endif
	@ Decoded text from ROM range: offset=0x575506, size=0x3
	.string "ヘイ{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:214 easy_chat_group_greetings_line_214
	.globl gText_Rom_575509
gText_Rom_575509: @ 0x08575509
	.string "またね{EOS}"
	.if (. - gText_Rom_575509) > 0x4
	.error "gText_Rom_575509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575509) < 0x4
	.space 0x4 - (. - gText_Rom_575509)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:220 easy_chat_group_greetings_line_220
	.globl gText_Rom_57550D
gText_Rom_57550D: @ 0x0857550D
	.string "もしもし{EOS}"
	.if (. - gText_Rom_57550D) > 0x5
	.error "gText_Rom_57550D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57550D) < 0x5
	.space 0x5 - (. - gText_Rom_57550D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:226 easy_chat_group_greetings_line_226
	.globl gText_Rom_575512
gText_Rom_575512: @ 0x08575512
	.string "やあ{EOS}"
	.if (. - gText_Rom_575512) > 0x3
	.error "gText_Rom_575512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575512) < 0x3
	.space 0x3 - (. - gText_Rom_575512)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:232 easy_chat_group_greetings_line_232
	.globl gText_Rom_575515
gText_Rom_575515: @ 0x08575515
	.string "やっほー{EOS}"
	.if (. - gText_Rom_575515) > 0x5
	.error "gText_Rom_575515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575515) < 0x5
	.space 0x5 - (. - gText_Rom_575515)
	.endif
	@ Decoded text from ROM range: offset=0x57551A, size=0x3
	.string "よう{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:244 easy_chat_group_greetings_line_244
	.globl gText_Rom_57551D
gText_Rom_57551D: @ 0x0857551D
	.string "ようこそ{EOS}"
	.if (. - gText_Rom_57551D) > 0x5
	.error "gText_Rom_57551D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57551D) < 0x5
	.space 0x5 - (. - gText_Rom_57551D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:250 easy_chat_group_greetings_line_250
	.globl gText_Rom_575522
gText_Rom_575522: @ 0x08575522
	.string "よろしく{EOS}"
	.if (. - gText_Rom_575522) > 0x5
	.error "gText_Rom_575522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575522) < 0x5
	.space 0x5 - (. - gText_Rom_575522)
	.endif
	@ analyzed canonical ROM range 0x08575527-0x0857571F
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x1 bytes
	.byte 0x00
	.globl gEasyChatGroup_Greetings
gEasyChatGroup_Greetings: @ 0x08575528
	easy_chat_word_info gText_Rom_575460, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_575466, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_57546A, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_57546E, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_575472, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_575477, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_57547B, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_575482, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_575486, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_57548A, 9, 1 @ word 9
	easy_chat_word_info 0x08575490, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_575495, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_575499, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_5754A0, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_5754A5, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_5754A9, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_5754AF, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_5754B5, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_5754BB, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_5754C1, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_5754C6, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_5754CB, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_5754D0, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_5754D6, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_5754DB, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_5754DF, 25, 1 @ word 25
	easy_chat_word_info 0x085754E3, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_5754E6, 27, 1 @ word 27
	easy_chat_word_info 0x085754EB, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_5754EE, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_5754F1, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_5754F5, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_5754FA, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_5754FF, 33, 1 @ word 33
	easy_chat_word_info 0x08575506, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_575509, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_57550D, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_575512, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_575515, 38, 1 @ word 38
	easy_chat_word_info 0x0857551A, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_57551D, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_575522, 41, 1 @ word 41
