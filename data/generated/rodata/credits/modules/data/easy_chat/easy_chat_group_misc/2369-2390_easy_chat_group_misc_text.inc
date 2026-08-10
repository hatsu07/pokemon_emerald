	@ src/data/easy_chat/easy_chat_group_misc.h:172 easy_chat_group_misc_line_172
	.globl gText_Rom_577F83
gText_Rom_577F83: @ 0x08577F83
	.string "どっち$"
	.if (. - gText_Rom_577F83) > 0x4
	.error "gText_Rom_577F83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F83) < 0x4
	.space 0x4 - (. - gText_Rom_577F83)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:178 easy_chat_group_misc_line_178
	.globl gText_Rom_577F87
gText_Rom_577F87: @ 0x08577F87
	.string "どの$"
	.if (. - gText_Rom_577F87) > 0x3
	.error "gText_Rom_577F87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F87) < 0x3
	.space 0x3 - (. - gText_Rom_577F87)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:184 easy_chat_group_misc_line_184
	.globl gText_Rom_577F8A
gText_Rom_577F8A: @ 0x08577F8A
	.string "どりゃ$"
	.if (. - gText_Rom_577F8A) > 0x4
	.error "gText_Rom_577F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F8A) < 0x4
	.space 0x4 - (. - gText_Rom_577F8A)
	.endif
	@ Decoded text from ROM range: offset=0x577F8E, size=0x3
	.string "どれ$"

	@ src/data/easy_chat/easy_chat_group_misc.h:196 easy_chat_group_misc_line_196
	.globl gText_Rom_577F91
gText_Rom_577F91: @ 0x08577F91
	.string "どれを$"
	.if (. - gText_Rom_577F91) > 0x4
	.error "gText_Rom_577F91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F91) < 0x4
	.space 0x4 - (. - gText_Rom_577F91)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:202 easy_chat_group_misc_line_202
	.globl gText_Rom_577F95
gText_Rom_577F95: @ 0x08577F95
	.string "どんな$"
	.if (. - gText_Rom_577F95) > 0x4
	.error "gText_Rom_577F95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F95) < 0x4
	.space 0x4 - (. - gText_Rom_577F95)
	.endif
	@ Decoded text from ROM range: offset=0x577F99, size=0x3
	.string "なに$"

	@ src/data/easy_chat/easy_chat_group_misc.h:214 easy_chat_group_misc_line_214
	.globl gText_Rom_577F9C
gText_Rom_577F9C: @ 0x08577F9C
	.string "なんか$"
	.if (. - gText_Rom_577F9C) > 0x4
	.error "gText_Rom_577F9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577F9C) < 0x4
	.space 0x4 - (. - gText_Rom_577F9C)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:220 easy_chat_group_misc_line_220
	.globl gText_Rom_577FA0
gText_Rom_577FA0: @ 0x08577FA0
	.string "なんだ$"
	.if (. - gText_Rom_577FA0) > 0x4
	.error "gText_Rom_577FA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA0) < 0x4
	.space 0x4 - (. - gText_Rom_577FA0)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:226 easy_chat_group_misc_line_226
	.globl gText_Rom_577FA4
gText_Rom_577FA4: @ 0x08577FA4
	.string "なんで$"
	.if (. - gText_Rom_577FA4) > 0x4
	.error "gText_Rom_577FA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FA4) < 0x4
	.space 0x4 - (. - gText_Rom_577FA4)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:232 easy_chat_group_misc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_577FA8
gText_Rom_577FA8: @ 0x08577FA8
	.string "なんなんだ$"
	.if (. - gText_Rom_577FA8) != 0x6
	.error "gText_Rom_577FA8 must retain its original byte length"
	.endif
	.globl gText_Rom_577FAA
	.set gText_Rom_577FAA, gText_Rom_577FA8 + 0x2

	@ src/data/easy_chat/easy_chat_group_misc.h:238 easy_chat_group_misc_line_238
	.globl gText_Rom_577FAE
gText_Rom_577FAE: @ 0x08577FAE
	.string "なんの$"
	.if (. - gText_Rom_577FAE) > 0x4
	.error "gText_Rom_577FAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FAE) < 0x4
	.space 0x4 - (. - gText_Rom_577FAE)
	.endif

	@ src/data/easy_chat/easy_chat_group_misc.h:244 easy_chat_group_misc_line_244 (+1 aliases)
	.globl gText_Rom_577FB2
gText_Rom_577FB2: @ 0x08577FB2
	.string "ひだり$"
	.if (. - gText_Rom_577FB2) > 0x4
	.error "gText_Rom_577FB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577FB2) < 0x4
	.space 0x4 - (. - gText_Rom_577FB2)
	.endif
	@ analyzed canonical ROM range 0x08577FB6-0x085781B3
	.globl gText_Rom_577FB6
gText_Rom_577FB6: @ 0x08577FB6
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x6 bytes
	.byte 0x20, 0x38, 0xFF, 0x00, 0x00, 0x00
	.globl gEasyChatGroup_Misc
gEasyChatGroup_Misc: @ 0x08577FBC
	easy_chat_word_info 0x08577F20, 0, 1 @ word 0
	easy_chat_word_info gText_Rom_577F23, 1, 1 @ word 1
	easy_chat_word_info 0x08577F27, 2, 1 @ word 2
	easy_chat_word_info gText_Rom_577F2A, 3, 1 @ word 3
	easy_chat_word_info 0x08577F2E, 4, 1 @ word 4
	easy_chat_word_info gText_Rom_577F31, 5, 1 @ word 5
	easy_chat_word_info gText_Rom_577F35, 6, 1 @ word 6
	easy_chat_word_info 0x08577F39, 7, 1 @ word 7
	easy_chat_word_info 0x08577F3C, 8, 1 @ word 8
	easy_chat_word_info 0x08577F3F, 9, 1 @ word 9
	easy_chat_word_info gText_Rom_577F42, 10, 1 @ word 10
	easy_chat_word_info 0x08577F46, 11, 1 @ word 11
	easy_chat_word_info gText_Rom_577F49, 12, 1 @ word 12
	easy_chat_word_info 0x08577F4D, 13, 1 @ word 13
	easy_chat_word_info gText_Rom_577F50, 14, 1 @ word 14
	easy_chat_word_info gText_Rom_577F54, 15, 1 @ word 15
	easy_chat_word_info gText_Rom_577F58, 16, 1 @ word 16
	easy_chat_word_info 0x08577F5C, 17, 1 @ word 17
	easy_chat_word_info 0x08577F5F, 18, 1 @ word 18
	easy_chat_word_info gText_Rom_577F62, 19, 1 @ word 19
	easy_chat_word_info 0x08577F66, 20, 1 @ word 20
	easy_chat_word_info gText_Rom_577F69, 21, 1 @ word 21
	easy_chat_word_info gText_Rom_577F6D, 22, 1 @ word 22
	easy_chat_word_info gText_Rom_577F70, 23, 1 @ word 23
	easy_chat_word_info gText_Rom_577F74, 24, 1 @ word 24
	easy_chat_word_info gText_Rom_577F78, 25, 1 @ word 25
	easy_chat_word_info gText_Rom_577F7C, 26, 1 @ word 26
	easy_chat_word_info 0x08577F80, 27, 1 @ word 27
	easy_chat_word_info gText_Rom_577F83, 28, 1 @ word 28
	easy_chat_word_info gText_Rom_577F87, 29, 1 @ word 29
	easy_chat_word_info gText_Rom_577F8A, 30, 1 @ word 30
	easy_chat_word_info 0x08577F8E, 31, 1 @ word 31
	easy_chat_word_info gText_Rom_577F91, 32, 1 @ word 32
	easy_chat_word_info gText_Rom_577F95, 33, 1 @ word 33
	easy_chat_word_info 0x08577F99, 34, 1 @ word 34
	easy_chat_word_info gText_Rom_577F9C, 35, 1 @ word 35
	easy_chat_word_info gText_Rom_577FA0, 36, 1 @ word 36
	easy_chat_word_info gText_Rom_577FA4, 37, 1 @ word 37
	easy_chat_word_info gText_Rom_577FA8, 38, 1 @ word 38
	easy_chat_word_info gText_Rom_577FAE, 39, 1 @ word 39
	easy_chat_word_info gText_Rom_577FB2, 40, 1 @ word 40
	easy_chat_word_info gText_Rom_577FB6, 41, 1 @ word 41
