	@ src/data/easy_chat/easy_chat_group_hobbies.h:268 easy_chat_group_hobbies_line_268
	.globl gText_Rom_57798D
gText_Rom_57798D: @ 0x0857798D
	.string "ボード{EOS}"
	.if (. - gText_Rom_57798D) > 0x4
	.error "gText_Rom_57798D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57798D) < 0x4
	.space 0x4 - (. - gText_Rom_57798D)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_577991
gText_Rom_577991: @ 0x08577991
	.string "ボール{EOS}"
	.if (. - gText_Rom_577991) > 0x4
	.error "gText_Rom_577991 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577991) < 0x4
	.space 0x4 - (. - gText_Rom_577991)
	.endif
	@ Decoded text from ROM range: offset=0x577995, size=0x3
	.string "ほん{EOS}"

	@ src/data/easy_chat/easy_chat_group_hobbies.h:286 easy_chat_group_hobbies_line_286
	.globl gText_Rom_577998
gText_Rom_577998: @ 0x08577998
	.string "まつり{EOS}"
	.if (. - gText_Rom_577998) > 0x4
	.error "gText_Rom_577998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577998) < 0x4
	.space 0x4 - (. - gText_Rom_577998)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:292 easy_chat_group_hobbies_line_292
	.globl gText_Rom_57799C
gText_Rom_57799C: @ 0x0857799C
	.string "まんが{EOS}"
	.if (. - gText_Rom_57799C) > 0x4
	.error "gText_Rom_57799C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57799C) < 0x4
	.space 0x4 - (. - gText_Rom_57799C)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:298 easy_chat_group_hobbies_line_298
	.globl gText_Rom_5779A0
gText_Rom_5779A0: @ 0x085779A0
	.string "やすみ{EOS}"
	.if (. - gText_Rom_5779A0) > 0x4
	.error "gText_Rom_5779A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A0) < 0x4
	.space 0x4 - (. - gText_Rom_5779A0)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:304 easy_chat_group_hobbies_line_304
	.globl gText_Rom_5779A4
gText_Rom_5779A4: @ 0x085779A4
	.string "よてい{EOS}"
	.if (. - gText_Rom_5779A4) > 0x4
	.error "gText_Rom_5779A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A4) < 0x4
	.space 0x4 - (. - gText_Rom_5779A4)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:310 easy_chat_group_hobbies_line_310
	.globl gText_Rom_5779A8
gText_Rom_5779A8: @ 0x085779A8
	.string "りゅうこう{EOS}"
	.if (. - gText_Rom_5779A8) > 0x6
	.error "gText_Rom_5779A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779A8) < 0x6
	.space 0x6 - (. - gText_Rom_5779A8)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:316 easy_chat_group_hobbies_line_316
	.globl gText_Rom_5779AE
gText_Rom_5779AE: @ 0x085779AE
	.string "りょこう{EOS}"
	.if (. - gText_Rom_5779AE) > 0x5
	.error "gText_Rom_5779AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779AE) < 0x5
	.space 0x5 - (. - gText_Rom_5779AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:322 easy_chat_group_hobbies_line_322
	.globl gText_Rom_5779B3
gText_Rom_5779B3: @ 0x085779B3
	.string "ルック{EOS}"
	.if (. - gText_Rom_5779B3) > 0x4
	.error "gText_Rom_5779B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5779B3) < 0x4
	.space 0x4 - (. - gText_Rom_5779B3)
	.endif
	@ analyzed canonical ROM range 0x085779B7-0x08577C45
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x1 bytes
	.byte 0x00
	.globl gEasyChatGroup_Hobbies
gEasyChatGroup_Hobbies: @ 0x085779B8
	easy_chat_word_info gText_Rom_5778BC, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_5778C1, 1, 1 @ word 1
	easy_chat_word_info 0x085778C5, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_5778C8, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_5778CC, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_5778D0, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_5778D6, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_5778DC, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_5778E1, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_5778E6, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_5778EA, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_5778EF, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_5778F3, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_5778F9, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_5778FE, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_577902, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_577906, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_57790A, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_577911, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_577918, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_57791C, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_577920, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_577926, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_57792A, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_57792F, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_577933, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_577937, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_57793D, 27, 1 @ word 27
	easy_chat_word_info 0x08577943, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_577946, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_57794A, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_577950, 31, 1 @ word 31
	easy_chat_word_info 0x08577954, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_577957, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_57795B, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_577960, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_577965, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_57796B, 37, 1 @ word 37
	easy_chat_word_info 0x08577970, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_577973, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_577978, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_57797C, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_577981, 42, 1 @ word 42
	easy_chat_word_info gText_Rom_577988, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_57798D, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_577991, 45, 1 @ word 45
	easy_chat_word_info 0x08577995, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_577998, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_57799C, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_5779A0, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_5779A4, 50, 1 @ word 50
	easy_chat_word_info gText_Rom_5779A8, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_5779AE, 52, 1 @ word 52
	easy_chat_word_info gText_Rom_5779B3, 53, 1 @ word 53
	@ suffix after word-info array: 0x6 bytes
	.byte 0x01, 0x07, 0xFF, 0x01, 0x0B, 0xFF
