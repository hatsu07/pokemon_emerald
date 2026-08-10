
	@ src/data/easy_chat/easy_chat_group_battle.h:340 easy_chat_group_battle_line_340
	.globl gText_Rom_57514B
gText_Rom_57514B: @ 0x0857514B
	.string "よゆう$"
	.if (. - gText_Rom_57514B) > 0x4
	.error "gText_Rom_57514B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514B) < 0x4
	.space 0x4 - (. - gText_Rom_57514B)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:346 easy_chat_group_battle_line_346
	.globl gText_Rom_57514F
gText_Rom_57514F: @ 0x0857514F
	.string "よわい$"
	.if (. - gText_Rom_57514F) > 0x4
	.error "gText_Rom_57514F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57514F) < 0x4
	.space 0x4 - (. - gText_Rom_57514F)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:352 easy_chat_group_battle_line_352
	.globl gText_Rom_575153
gText_Rom_575153: @ 0x08575153
	.string "よわすぎ$"
	.if (. - gText_Rom_575153) > 0x5
	.error "gText_Rom_575153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575153) < 0x5
	.space 0x5 - (. - gText_Rom_575153)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:358 easy_chat_group_battle_line_358
	.globl gText_Rom_575158
gText_Rom_575158: @ 0x08575158
	.string "らくしょう$"
	.if (. - gText_Rom_575158) > 0x6
	.error "gText_Rom_575158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575158) < 0x6
	.space 0x6 - (. - gText_Rom_575158)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:364 easy_chat_group_battle_line_364
	.globl gText_Rom_57515E
gText_Rom_57515E: @ 0x0857515E
	.string "リーダー$"
	.if (. - gText_Rom_57515E) > 0x5
	.error "gText_Rom_57515E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57515E) < 0x5
	.space 0x5 - (. - gText_Rom_57515E)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:370 easy_chat_group_battle_line_370
	.globl gText_Rom_575163
gText_Rom_575163: @ 0x08575163
	.string "ルール$"
	.if (. - gText_Rom_575163) > 0x4
	.error "gText_Rom_575163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575163) < 0x4
	.space 0x4 - (. - gText_Rom_575163)
	.endif
	@ analyzed canonical ROM range 0x08575167-0x0857545F
sAnalyzedData_08575167: @ 0x08575167
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x5 bytes
	.byte 0x2C, 0x3C, 0xFF, 0x00, 0x00
	.globl gEasyChatGroup_Battle
gEasyChatGroup_Battle: @ 0x0857516C
	easy_chat_word_info gText_Rom_575050, 0, 1 @ word 0
	easy_chat_word_info 0x08575056, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_575059, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_57505E, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_575062, 4, 1 @ word 4
	easy_chat_word_info 0x08575067, 5, 1 @ word 5
	easy_chat_word_info 0x0857506A, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_57506D, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_575071, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_575076, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_57507A, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_57507F, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_575083, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_575089, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_57508D, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_575091, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_575096, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_57509A, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_57509E, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_5750A3, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_5750A8, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_5750AE, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_5750B3, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_5750B8, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_5750BC, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_5750C1, 25, 1 @ word 25
	easy_chat_word_info 0x085750C6, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_5750C9, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_5750CD, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_5750D2, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_5750D7, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_5750DB, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_5750E1, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_5750E5, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_5750EA, 34, 1 @ word 34
	easy_chat_word_info 0x085750EF, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_5750F2, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_5750F7, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_5750FC, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_5750FF, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_575103, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_575107, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_57510C, 42, 1 @ word 42
	easy_chat_word_info gText_Rom_575111, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_575116, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_57511A, 45, 1 @ word 45
	easy_chat_word_info 0x0857511F, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_575122, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_575127, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_57512B, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_57512F, 50, 1 @ word 50
	easy_chat_word_info gText_Rom_575133, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_575137, 52, 1 @ word 52
	easy_chat_word_info gText_Rom_57513D, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_575142, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_575146, 55, 1 @ word 55
	easy_chat_word_info gText_Rom_57514B, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_57514F, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_575153, 58, 1 @ word 58
	easy_chat_word_info gText_Rom_575158, 59, 1 @ word 59
	easy_chat_word_info gText_Rom_57515E, 60, 1 @ word 60
	easy_chat_word_info gText_Rom_575163, 61, 1 @ word 61
	easy_chat_word_info sAnalyzedData_08575167, 62, 1 @ word 62
