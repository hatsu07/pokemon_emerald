	@ src/data/easy_chat/easy_chat_group_greetings.h:214 easy_chat_group_greetings_line_214
	.globl gText_Rom_575509
gText_Rom_575509: @ 0x08575509
	.string "またね$"
	.if (. - gText_Rom_575509) > 0x4
	.error "gText_Rom_575509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575509) < 0x4
	.space 0x4 - (. - gText_Rom_575509)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:220 easy_chat_group_greetings_line_220
	.globl gText_Rom_57550D
gText_Rom_57550D: @ 0x0857550D
	.string "もしもし$"
	.if (. - gText_Rom_57550D) > 0x5
	.error "gText_Rom_57550D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57550D) < 0x5
	.space 0x5 - (. - gText_Rom_57550D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:226 easy_chat_group_greetings_line_226
	.globl gText_Rom_575512
gText_Rom_575512: @ 0x08575512
	.string "やあ$"
	.if (. - gText_Rom_575512) > 0x3
	.error "gText_Rom_575512 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575512) < 0x3
	.space 0x3 - (. - gText_Rom_575512)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:232 easy_chat_group_greetings_line_232
	.globl gText_Rom_575515
gText_Rom_575515: @ 0x08575515
	.string "やっほー$"
	.if (. - gText_Rom_575515) > 0x5
	.error "gText_Rom_575515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575515) < 0x5
	.space 0x5 - (. - gText_Rom_575515)
	.endif
	@ Decoded text from ROM range: offset=0x57551A, size=0x3
	.string "よう$"

	@ src/data/easy_chat/easy_chat_group_greetings.h:244 easy_chat_group_greetings_line_244
	.globl gText_Rom_57551D
gText_Rom_57551D: @ 0x0857551D
	.string "ようこそ$"
	.if (. - gText_Rom_57551D) > 0x5
	.error "gText_Rom_57551D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57551D) < 0x5
	.space 0x5 - (. - gText_Rom_57551D)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:250 easy_chat_group_greetings_line_250
	.globl gText_Rom_575522
gText_Rom_575522: @ 0x08575522
	.string "よろしく$"
	.if (. - gText_Rom_575522) > 0x5
	.error "gText_Rom_575522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575522) < 0x5
	.space 0x5 - (. - gText_Rom_575522)
	.endif
	@ analyzed canonical ROM range 0x08575527-0x0857571F
sAnalyzedData_08575527: @ 0x08575527
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
