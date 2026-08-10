
	@ src/data/easy_chat/easy_chat_group_conditions.h:346 easy_chat_group_conditions_line_346
	.globl gText_Rom_576D83
gText_Rom_576D83: @ 0x08576D83
	.string "ひみつ$"
	.if (. - gText_Rom_576D83) > 0x4
	.error "gText_Rom_576D83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D83) < 0x4
	.space 0x4 - (. - gText_Rom_576D83)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:352 easy_chat_group_conditions_line_352
	.globl gText_Rom_576D87
gText_Rom_576D87: @ 0x08576D87
	.string "ふしぎ$"
	.if (. - gText_Rom_576D87) > 0x4
	.error "gText_Rom_576D87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D87) < 0x4
	.space 0x4 - (. - gText_Rom_576D87)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:358 easy_chat_group_conditions_line_358
	.globl gText_Rom_576D8B
gText_Rom_576D8B: @ 0x08576D8B
	.string "ふそく$"
	.if (. - gText_Rom_576D8B) > 0x4
	.error "gText_Rom_576D8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8B) < 0x4
	.space 0x4 - (. - gText_Rom_576D8B)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:364 easy_chat_group_conditions_line_364
	.globl gText_Rom_576D8F
gText_Rom_576D8F: @ 0x08576D8F
	.string "ベスト$"
	.if (. - gText_Rom_576D8F) > 0x4
	.error "gText_Rom_576D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D8F) < 0x4
	.space 0x4 - (. - gText_Rom_576D8F)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:370 easy_chat_group_conditions_line_370
	.globl gText_Rom_576D93
gText_Rom_576D93: @ 0x08576D93
	.string "へた$"
	.if (. - gText_Rom_576D93) > 0x3
	.error "gText_Rom_576D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D93) < 0x3
	.space 0x3 - (. - gText_Rom_576D93)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:376 easy_chat_group_conditions_line_376
	.globl gText_Rom_576D96
gText_Rom_576D96: @ 0x08576D96
	.string "まちがって$"
	.if (. - gText_Rom_576D96) > 0x6
	.error "gText_Rom_576D96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D96) < 0x6
	.space 0x6 - (. - gText_Rom_576D96)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:382 easy_chat_group_conditions_line_382
	.globl gText_Rom_576D9C
gText_Rom_576D9C: @ 0x08576D9C
	.string "やさしい$"
	.if (. - gText_Rom_576D9C) > 0x5
	.error "gText_Rom_576D9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576D9C) < 0x5
	.space 0x5 - (. - gText_Rom_576D9C)
	.endif
	@ Decoded text from ROM range: offset=0x576DA1, size=0x3
	.string "よく$"

	@ src/data/easy_chat/easy_chat_group_conditions.h:394 easy_chat_group_conditions_line_394
	.globl gText_Rom_576DA4
gText_Rom_576DA4: @ 0x08576DA4
	.string "よわって$"
	.if (. - gText_Rom_576DA4) > 0x5
	.error "gText_Rom_576DA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DA4) < 0x5
	.space 0x5 - (. - gText_Rom_576DA4)
	.endif
	@ Decoded text from ROM range: offset=0x576DA9, size=0x3
	.string "らく$"

	@ src/data/easy_chat/easy_chat_group_conditions.h:406 easy_chat_group_conditions_line_406
	.globl gText_Rom_576DAC
gText_Rom_576DAC: @ 0x08576DAC
	.string "らしい$"
	.if (. - gText_Rom_576DAC) > 0x4
	.error "gText_Rom_576DAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DAC) < 0x4
	.space 0x4 - (. - gText_Rom_576DAC)
	.endif

	@ src/data/easy_chat/easy_chat_group_conditions.h:412 easy_chat_group_conditions_line_412
	.globl gText_Rom_576DB0
gText_Rom_576DB0: @ 0x08576DB0
	.string "わるい$"
	.if (. - gText_Rom_576DB0) > 0x4
	.error "gText_Rom_576DB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576DB0) < 0x4
	.space 0x4 - (. - gText_Rom_576DB0)
	.endif
	@ analyzed canonical ROM range 0x08576DB4-0x085770F2
sAnalyzedData_08576DB4: @ 0x08576DB4
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	.globl gEasyChatGroup_Conditions
gEasyChatGroup_Conditions: @ 0x08576DB4
	easy_chat_word_info gText_Rom_576C88, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_576C8C, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_576C90, 2, 1 @ word 2
	easy_chat_word_info 0x08576C94, 3, 1 @ word 3
	easy_chat_word_info 0x08576C97, 4, 1 @ word 4
	easy_chat_word_info 0x08576C9A, 5, 1 @ word 5
	easy_chat_word_info 0x08576C9D, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_576CA0, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_576CA5, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_576CA9, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_576CAE, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_576CB4, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_576CBA, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_576CBF, 13, 1 @ word 13
	easy_chat_word_info 0x08576CC3, 14, 1 @ word 14
	easy_chat_word_info 0x08576CC6, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_576CC9, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_576CCD, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_576CD1, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_576CD6, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_576CDB, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_576CDF, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_576CE3, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_576CE9, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_576CEF, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_576CF5, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_576CFA, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_576CFF, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_576D03, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_576D08, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_576D0D, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_576D11, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_576D16, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_576D1C, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_576D20, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_576D25, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_576D29, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_576D2E, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_576D32, 38, 1 @ word 38
	easy_chat_word_info 0x08576D37, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_576D3A, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_576D3F, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_576D43, 42, 1 @ word 42
	easy_chat_word_info gText_Rom_576D47, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_576D4B, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_576D4F, 45, 1 @ word 45
	easy_chat_word_info gText_Rom_576D55, 46, 1 @ word 46
	easy_chat_word_info 0x08576D5C, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_576D5F, 48, 1 @ word 48
	easy_chat_word_info 0x08576D64, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_576D67, 50, 1 @ word 50
	easy_chat_word_info gText_Rom_576D6B, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_576D6F, 52, 1 @ word 52
	easy_chat_word_info gText_Rom_576D73, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_576D77, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_576D7B, 55, 1 @ word 55
	easy_chat_word_info gText_Rom_576D80, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_576D83, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_576D87, 58, 1 @ word 58
	easy_chat_word_info gText_Rom_576D8B, 59, 1 @ word 59
	easy_chat_word_info gText_Rom_576D8F, 60, 1 @ word 60
	easy_chat_word_info gText_Rom_576D93, 61, 1 @ word 61
	easy_chat_word_info gText_Rom_576D96, 62, 1 @ word 62
	easy_chat_word_info gText_Rom_576D9C, 63, 1 @ word 63
	easy_chat_word_info 0x08576DA1, 64, 1 @ word 64
	easy_chat_word_info gText_Rom_576DA4, 65, 1 @ word 65
	easy_chat_word_info 0x08576DA9, 66, 1 @ word 66
	easy_chat_word_info gText_Rom_576DAC, 67, 1 @ word 67
	easy_chat_word_info gText_Rom_576DB0, 68, 1 @ word 68
	@ suffix after word-info array: 0x3 bytes
	.byte 0x01, 0x03, 0xFF
