
	@ src/data/easy_chat/easy_chat_group_time.h:250 easy_chat_group_time_line_250 (+1 aliases)
	.globl gText_Rom_577CF1
gText_Rom_577CF1: @ 0x08577CF1
	.string "もくようび$"
	.if (. - gText_Rom_577CF1) > 0x6
	.error "gText_Rom_577CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF1) < 0x6
	.space 0x6 - (. - gText_Rom_577CF1)
	.endif

	@ src/data/easy_chat/easy_chat_group_time.h:256 easy_chat_group_time_line_256
	.globl gText_Rom_577CF7
gText_Rom_577CF7: @ 0x08577CF7
	.string "よなか$"
	.if (. - gText_Rom_577CF7) > 0x4
	.error "gText_Rom_577CF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CF7) < 0x4
	.space 0x4 - (. - gText_Rom_577CF7)
	.endif
	@ Decoded text from ROM range: offset=0x577CFB, size=0x3
	.string "よる$"

	@ src/data/easy_chat/easy_chat_group_time.h:268 easy_chat_group_time_line_268
	.globl gText_Rom_577CFE
gText_Rom_577CFE: @ 0x08577CFE
	.string "らいしゅう$"
	.if (. - gText_Rom_577CFE) > 0x6
	.error "gText_Rom_577CFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577CFE) < 0x6
	.space 0x6 - (. - gText_Rom_577CFE)
	.endif
	@ analyzed canonical ROM range 0x08577D04-0x08577F22
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	.globl gEasyChatGroup_Time
gEasyChatGroup_Time: @ 0x08577D04
	easy_chat_word_info 0x08577C40, 0, 1 @ word 0
	easy_chat_word_info 0x08577C43, 1, 1 @ word 1
	easy_chat_word_info gText_Rom_577C46, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_577C4A, 3, 1 @ word 3
	easy_chat_word_info gText_Rom_577C4F, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_577C54, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_577C58, 6, 1 @ word 6
	easy_chat_word_info 0x08577C5C, 7, 1 @ word 7
	easy_chat_word_info gText_Rom_577C5F, 8, 1 @ word 8
	easy_chat_word_info gText_Rom_577C64, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_577C69, 10, 1 @ word 10
	easy_chat_word_info gText_Rom_577C6D, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_577C72, 12, 1 @ word 12
	easy_chat_word_info gText_Rom_577C76, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_577C7A, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_577C80, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_577C86, 16, 1 @ word 16
	easy_chat_word_info gText_Rom_577C8B, 17, 1 @ word 17
	easy_chat_word_info gText_Rom_577C90, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_577C94, 19, 1 @ word 19
	easy_chat_word_info gText_Rom_577C98, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_577C9F, 21, 1 @ word 21
	easy_chat_word_info 0x08577CA5, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_577CA8, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_577CAD, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_577CB1, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_577CB6, 26, 1 @ word 26
	easy_chat_word_info gText_Rom_577CBB, 27, 1 @ word 27
	easy_chat_word_info 0x08577CBF, 28, 1 @ word 28
	easy_chat_word_info 0x08577CC2, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_577CC5, 30, 1 @ word 30
	easy_chat_word_info 0x08577CCA, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_577CCD, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_577CD3, 33, 1 @ word 33
	easy_chat_word_info 0x08577CD7, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_577CDA, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_577CDD, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_577CE0, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_577CE5, 38, 1 @ word 38
	easy_chat_word_info 0x08577CE9, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_577CEC, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_577CF1, 41, 1 @ word 41
	easy_chat_word_info gText_Rom_577CF7, 42, 1 @ word 42
	easy_chat_word_info 0x08577CFB, 43, 1 @ word 43
	easy_chat_word_info gText_Rom_577CFE, 44, 1 @ word 44
	@ suffix after word-info array: 0x3 bytes
	.byte 0x01, 0x01, 0xFF
