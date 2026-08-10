
	@ src/data/easy_chat/easy_chat_group_endings.h:298 easy_chat_group_endings_line_298
	.globl gText_Rom_57646D
gText_Rom_57646D: @ 0x0857646D
	.string "なんてね$"
	.if (. - gText_Rom_57646D) > 0x5
	.error "gText_Rom_57646D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57646D) < 0x5
	.space 0x5 - (. - gText_Rom_57646D)
	.endif
	@ analyzed canonical ROM range 0x08576472-0x0857647B
sAnalyzedData_08576472: @ 0x08576472
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x18, 0xFF, 0x18, 0xAE, 0xFF, 0x19, 0xFF, 0x19, 0xAC, 0xFF
	.globl gText_Rom_57647C
gText_Rom_57647C: @ 0x0857647C
	.string "ばっかり$"
	.if (. - gText_Rom_57647C) > 0x5
	.error "gText_Rom_57647C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57647C) < 0x5
	.space 0x5 - (. - gText_Rom_57647C)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:334 easy_chat_group_endings_line_334
	.globl gText_Rom_576481
gText_Rom_576481: @ 0x08576481
	.string "まーす!$"
	.if (. - gText_Rom_576481) > 0x5
	.error "gText_Rom_576481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576481) < 0x5
	.space 0x5 - (. - gText_Rom_576481)
	.endif
	@ Decoded text from ROM range: offset=0x576486, size=0x3
	.string "ます$"

	@ src/data/easy_chat/easy_chat_group_endings.h:346 easy_chat_group_endings_line_346
	.globl gText_Rom_576489
gText_Rom_576489: @ 0x08576489
	.string "ますわ$"
	.if (. - gText_Rom_576489) > 0x4
	.error "gText_Rom_576489 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576489) < 0x4
	.space 0x4 - (. - gText_Rom_576489)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_57648D
gText_Rom_57648D: @ 0x0857648D
	.string "ません$"
	.if (. - gText_Rom_57648D) > 0x4
	.error "gText_Rom_57648D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57648D) < 0x4
	.space 0x4 - (. - gText_Rom_57648D)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:358 easy_chat_group_endings_line_358
	.globl gText_Rom_576491
gText_Rom_576491: @ 0x08576491
	.string "みたいな$"
	.if (. - gText_Rom_576491) > 0x5
	.error "gText_Rom_576491 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576491) < 0x5
	.space 0x5 - (. - gText_Rom_576491)
	.endif
	@ Decoded text from ROM range: offset=0x576496, size=0xC
	.string "もの$"
	.string "もん$"
	.string "よ！$"
	.string "よー$"

	@ src/data/easy_chat/easy_chat_group_endings.h:388 easy_chat_group_endings_line_388
	.globl gText_Rom_5764A2
gText_Rom_5764A2: @ 0x085764A2
	.string "よーん$"
	.if (. - gText_Rom_5764A2) > 0x4
	.error "gText_Rom_5764A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764A2) < 0x4
	.space 0x4 - (. - gText_Rom_5764A2)
	.endif
	@ Decoded text from ROM range: offset=0x5764A6, size=0x9
	.string "よね$"
	.string "るよ$"
	.string "わけ$"

	@ src/data/easy_chat/easy_chat_group_endings.h:412 easy_chat_group_endings_line_412
	.globl gText_Rom_5764AF
gText_Rom_5764AF: @ 0x085764AF
	.string "わよ!$"
	.if (. - gText_Rom_5764AF) > 0x4
	.error "gText_Rom_5764AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5764AF) < 0x4
	.space 0x4 - (. - gText_Rom_5764AF)
	.endif
	@ analyzed canonical ROM range 0x085764B3-0x085767EF
sAnalyzedData_085764B3: @ 0x085764B3
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x1 bytes
	.byte 0x00
	.globl gEasyChatGroup_Endings
gEasyChatGroup_Endings: @ 0x085764B4
	easy_chat_word_info gText_Rom_5763A4, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_5763AA, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_5763AF, 2, 1 @ word 2
	easy_chat_word_info 0x085763B1, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_5763B4, 4, 1 @ word 4
	easy_chat_word_info 0x085763B8, 5, 1 @ word 5
	easy_chat_word_info 0x085763BC, 6, 1 @ word 6
	easy_chat_word_info 0x085763BF, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_5763C2, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_5763C8, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_5763CC, 10, 1 @ word 10
	easy_chat_word_info 0x085763D0, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_5763D3, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_5763D7, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_5763DB, 14, 1 @ word 14
	easy_chat_word_info 0x085763DE, 15, 1 @ word 15
	easy_chat_word_info 0x085763E1, 16, 1 @ word 16
	easy_chat_word_info 0x085763E3, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_5763E5, 18, 1 @ word 18
	easy_chat_word_info 0x085763EA, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_5763ED, 20, 1 @ word 20
	easy_chat_word_info 0x085763F1, 21, 1 @ word 21
	easy_chat_word_info 0x085763F4, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_5763F7, 23, 1 @ word 23
	easy_chat_word_info 0x085763FD, 24, 1 @ word 24
	easy_chat_word_info 0x08576400, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_576403, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_576409, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_57640E, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_576412, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_576417, 30, 1 @ word 30
	easy_chat_word_info gText_Rom_57641B, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_576420, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_576424, 33, 1 @ word 33
	easy_chat_word_info gText_Rom_576429, 34, 1 @ word 34
	easy_chat_word_info 0x0857642F, 35, 1 @ word 35
	easy_chat_word_info 0x08576432, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_576437, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_57643B, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_57643F, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_576445, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_57644A, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_576450, 42, 1 @ word 42
	easy_chat_word_info 0x08576454, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_576457, 44, 1 @ word 44
	easy_chat_word_info gText_Rom_57645B, 45, 1 @ word 45
	easy_chat_word_info gText_Rom_57645F, 46, 1 @ word 46
	easy_chat_word_info gText_Rom_576463, 47, 1 @ word 47
	easy_chat_word_info gText_Rom_576468, 48, 1 @ word 48
	easy_chat_word_info gText_Rom_57646D, 49, 1 @ word 49
	easy_chat_word_info sAnalyzedData_08576472, 50, 1 @ word 50
	easy_chat_word_info 0x08576474, 51, 1 @ word 51
	easy_chat_word_info 0x08576477, 52, 1 @ word 52
	easy_chat_word_info 0x08576479, 53, 1 @ word 53
	easy_chat_word_info gText_Rom_57647C, 54, 1 @ word 54
	easy_chat_word_info gText_Rom_576481, 55, 1 @ word 55
	easy_chat_word_info 0x08576486, 56, 1 @ word 56
	easy_chat_word_info gText_Rom_576489, 57, 1 @ word 57
	easy_chat_word_info gText_Rom_57648D, 58, 1 @ word 58
	easy_chat_word_info gText_Rom_576491, 59, 1 @ word 59
	easy_chat_word_info 0x08576496, 60, 1 @ word 60
	easy_chat_word_info 0x08576499, 61, 1 @ word 61
	easy_chat_word_info 0x0857649C, 62, 1 @ word 62
	easy_chat_word_info 0x0857649F, 63, 1 @ word 63
	easy_chat_word_info gText_Rom_5764A2, 64, 1 @ word 64
	easy_chat_word_info 0x085764A6, 65, 1 @ word 65
	easy_chat_word_info 0x085764A9, 66, 1 @ word 66
	easy_chat_word_info 0x085764AC, 67, 1 @ word 67
	easy_chat_word_info gText_Rom_5764AF, 68, 1 @ word 68
