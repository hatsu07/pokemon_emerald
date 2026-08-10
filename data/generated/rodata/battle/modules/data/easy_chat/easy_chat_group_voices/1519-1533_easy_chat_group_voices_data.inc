	@ src/data/easy_chat/easy_chat_group_voices.h:316 easy_chat_group_voices_line_316
	.globl gText_Rom_575CB4
gText_Rom_575CB4: @ 0x08575CB4
	.string "むきー!!$"
	.if (. - gText_Rom_575CB4) > 0x6
	.error "gText_Rom_575CB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CB4) < 0x6
	.space 0x6 - (. - gText_Rom_575CB4)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:322 easy_chat_group_voices_line_322
	.globl gText_Rom_575CBA
gText_Rom_575CBA: @ 0x08575CBA
	.string "むふふ$"
	.if (. - gText_Rom_575CBA) > 0x4
	.error "gText_Rom_575CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CBA) < 0x4
	.space 0x4 - (. - gText_Rom_575CBA)
	.endif
	@ Decoded text from ROM range: offset=0x575CBE, size=0x3
	.string "むむ$"

	@ src/data/easy_chat/easy_chat_group_voices.h:334 easy_chat_group_voices_line_334
	.globl gText_Rom_575CC1
gText_Rom_575CC1: @ 0x08575CC1
	.string "よーし$"
	.if (. - gText_Rom_575CC1) > 0x4
	.error "gText_Rom_575CC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC1) < 0x4
	.space 0x4 - (. - gText_Rom_575CC1)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:340 easy_chat_group_voices_line_340
	.globl gText_Rom_575CC5
gText_Rom_575CC5: @ 0x08575CC5
	.string "よし!$"
	.if (. - gText_Rom_575CC5) > 0x4
	.error "gText_Rom_575CC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC5) < 0x4
	.space 0x4 - (. - gText_Rom_575CC5)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:346 easy_chat_group_voices_line_346
	.globl gText_Rom_575CC9
gText_Rom_575CC9: @ 0x08575CC9
	.string "ラララ$"
	.if (. - gText_Rom_575CC9) > 0x4
	.error "gText_Rom_575CC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CC9) < 0x4
	.space 0x4 - (. - gText_Rom_575CC9)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:352 easy_chat_group_voices_line_352
	.globl gText_Rom_575CCD
gText_Rom_575CCD: @ 0x08575CCD
	.string "わーい$"
	.if (. - gText_Rom_575CCD) > 0x4
	.error "gText_Rom_575CCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CCD) < 0x4
	.space 0x4 - (. - gText_Rom_575CCD)
	.endif

	@ src/data/easy_chat/easy_chat_group_voices.h:358 easy_chat_group_voices_line_358
	.globl gText_Rom_575CD1
gText_Rom_575CD1: @ 0x08575CD1
	.string "わーん!!$"
	.if (. - gText_Rom_575CD1) > 0x6
	.error "gText_Rom_575CD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575CD1) < 0x6
	.space 0x6 - (. - gText_Rom_575CD1)
	.endif
	@ Decoded text from ROM range: offset=0x575CD7, size=0x3
	.string "ワオ$"

	@ src/data/easy_chat/easy_chat_group_voices.h:370 easy_chat_group_voices_line_370
	.globl gText_Rom_575CDA
gText_Rom_575CDA: @ 0x08575CDA
	.string "わっ!!$"
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
	easy_chat_word_info gText_Rom_575C07, 7, 1 @ word 7
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
