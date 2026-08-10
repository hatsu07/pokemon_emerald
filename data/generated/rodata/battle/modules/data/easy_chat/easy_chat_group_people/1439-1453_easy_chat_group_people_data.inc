	@ src/data/easy_chat/easy_chat_group_people.h:406 easy_chat_group_people_line_406
	.globl gText_Rom_575849
gText_Rom_575849: @ 0x08575849
	.string "わし$"
	.if (. - gText_Rom_575849) > 0x3
	.error "gText_Rom_575849 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575849) < 0x3
	.space 0x3 - (. - gText_Rom_575849)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:412 easy_chat_group_people_line_412
	.globl gText_Rom_57584C
gText_Rom_57584C: @ 0x0857584C
	.string "わたくし$"
	.if (. - gText_Rom_57584C) > 0x5
	.error "gText_Rom_57584C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57584C) < 0x5
	.space 0x5 - (. - gText_Rom_57584C)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:418 easy_chat_group_people_line_418
	.globl gText_Rom_575851
gText_Rom_575851: @ 0x08575851
	.string "わたし$"
	.if (. - gText_Rom_575851) > 0x4
	.error "gText_Rom_575851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575851) < 0x4
	.space 0x4 - (. - gText_Rom_575851)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:424 easy_chat_group_people_line_424
	.globl gText_Rom_575855
gText_Rom_575855: @ 0x08575855
	.string "わたしが$"
	.if (. - gText_Rom_575855) > 0x5
	.error "gText_Rom_575855 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575855) < 0x5
	.space 0x5 - (. - gText_Rom_575855)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:430 easy_chat_group_people_line_430
	.globl gText_Rom_57585A
gText_Rom_57585A: @ 0x0857585A
	.string "わたしに$"
	.if (. - gText_Rom_57585A) > 0x5
	.error "gText_Rom_57585A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57585A) < 0x5
	.space 0x5 - (. - gText_Rom_57585A)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:436 easy_chat_group_people_line_436
	.globl gText_Rom_57585F
gText_Rom_57585F: @ 0x0857585F
	.string "わたしの$"
	.if (. - gText_Rom_57585F) > 0x5
	.error "gText_Rom_57585F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57585F) < 0x5
	.space 0x5 - (. - gText_Rom_57585F)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:442 easy_chat_group_people_line_442
	.globl gText_Rom_575864
gText_Rom_575864: @ 0x08575864
	.string "わたしは$"
	.if (. - gText_Rom_575864) > 0x5
	.error "gText_Rom_575864 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575864) < 0x5
	.space 0x5 - (. - gText_Rom_575864)
	.endif

	@ src/data/easy_chat/easy_chat_group_people.h:448 easy_chat_group_people_line_448
	.globl gText_Rom_575869
gText_Rom_575869: @ 0x08575869
	.string "わたしを$"
	.if (. - gText_Rom_575869) > 0x5
	.error "gText_Rom_575869 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575869) < 0x5
	.space 0x5 - (. - gText_Rom_575869)
	.endif
	@ analyzed canonical ROM range 0x0857586E-0x08575C02
sAnalyzedData_0857586E: @ 0x0857586E
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x2 bytes
	.byte 0x00, 0x00
	.globl gEasyChatGroup_People
gEasyChatGroup_People: @ 0x08575870
	easy_chat_word_info gText_Rom_575720, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_575724, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_575728, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_57572C, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_575731, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_575736, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_57573B, 6, 1 @ word 6
	easy_chat_word_info gText_Rom_575740, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_575745, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_57574B, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_575751, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_575756, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_57575C, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_575762, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_575766, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_57576C, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_575772, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_575778, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_57577D, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_575780, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_575784, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_575789, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_57578F, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_575793, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_575797, 24, 1 @ word 24
	easy_chat_word_info 0x0857579C, 25, 1 @ word 25
	easy_chat_word_info 0x0857579F, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_5757A2, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_5757A6, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_5757AA, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_5757AE, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_5757B2, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_5757B6, 32, 1 @ word 32
	easy_chat_word_info 0x085757BC, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_5757BF, 34, 1 @ word 34
	easy_chat_word_info 0x085757C3, 35, 1 @ word 35
	easy_chat_word_info 0x085757C6, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_5757C9, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_5757CD, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_5757D2, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_5757D7, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_5757DC, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_5757E1, 42, 1 @ word 42
	easy_chat_word_info 0x085757E6, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_5757E9, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_5757ED, 45, 1 @ word 45
	easy_chat_word_info gText_Rom_5757F1, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_5757F5, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_5757F9, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_5757FD, 49, 1 @ word 49
	easy_chat_word_info gText_Rom_575801, 50, 1 @ word 50
	easy_chat_word_info gText_Rom_575805, 51, 1 @ word 51
	easy_chat_word_info gText_Rom_57580A, 52, 1 @ word 52
	easy_chat_word_info 0x0857580E, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_575811, 54, 1 @ word 54
	easy_chat_word_info 0x08575815, 55, 1 @ word 55
	easy_chat_word_info gText_Rom_575818, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_57581C, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_575820, 58, 1 @ word 58
	easy_chat_word_info gText_Rom_575824, 59, 1 @ word 59
	easy_chat_word_info gText_Rom_575828, 60, 1 @ word 60
	easy_chat_word_info gText_Rom_57582C, 61, 1 @ word 61
	easy_chat_word_info gText_Rom_575830, 62, 1 @ word 62
	easy_chat_word_info gText_Rom_575835, 63, 1 @ word 63
	easy_chat_word_info gText_Rom_57583A, 64, 1 @ word 64
	easy_chat_word_info gText_Rom_57583F, 65, 1 @ word 65
	easy_chat_word_info gText_Rom_575844, 66, 1 @ word 66
	easy_chat_word_info gText_Rom_575849, 67, 1 @ word 67
	easy_chat_word_info gText_Rom_57584C, 68, 1 @ word 68
	easy_chat_word_info gText_Rom_575851, 69, 1 @ word 69
	easy_chat_word_info gText_Rom_575855, 70, 1 @ word 70
	easy_chat_word_info gText_Rom_57585A, 71, 1 @ word 71
	easy_chat_word_info gText_Rom_57585F, 72, 1 @ word 72
	easy_chat_word_info gText_Rom_575864, 73, 1 @ word 73
	easy_chat_word_info gText_Rom_575869, 74, 1 @ word 74
	@ suffix after word-info array: 0xF bytes
	.byte 0xAB, 0xFF, 0xAB, 0xAB, 0xFF, 0xAB, 0xAC, 0xFF, 0xAC, 0xFF, 0xB0, 0xFF, 0xB0, 0xAB, 0xFF
