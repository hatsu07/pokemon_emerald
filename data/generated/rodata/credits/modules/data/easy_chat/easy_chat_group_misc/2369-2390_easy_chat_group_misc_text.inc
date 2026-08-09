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
sAnalyzedData_08577FB6: @ 0x08577FB6
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x3820, 0x00FF, 0x0000, 0x7F20, 0x0857, 0x0000, 0x0000, 0x0001
	.2byte 0x0000, 0x7F23, 0x0857, 0x0001, 0x0000, 0x0001, 0x0000, 0x7F27
	.2byte 0x0857, 0x0002, 0x0000, 0x0001, 0x0000, 0x7F2A, 0x0857, 0x0003
	.2byte 0x0000, 0x0001, 0x0000, 0x7F2E, 0x0857, 0x0004, 0x0000, 0x0001
	.2byte 0x0000, 0x7F31, 0x0857, 0x0005, 0x0000, 0x0001, 0x0000, 0x7F35
	.2byte 0x0857, 0x0006, 0x0000, 0x0001, 0x0000, 0x7F39, 0x0857, 0x0007
	.2byte 0x0000, 0x0001, 0x0000, 0x7F3C, 0x0857, 0x0008, 0x0000, 0x0001
	.2byte 0x0000, 0x7F3F, 0x0857, 0x0009, 0x0000, 0x0001, 0x0000, 0x7F42
	.2byte 0x0857, 0x000A, 0x0000, 0x0001, 0x0000, 0x7F46, 0x0857, 0x000B
	.2byte 0x0000, 0x0001, 0x0000, 0x7F49, 0x0857, 0x000C, 0x0000, 0x0001
	.2byte 0x0000, 0x7F4D, 0x0857, 0x000D, 0x0000, 0x0001, 0x0000, 0x7F50
	.2byte 0x0857, 0x000E, 0x0000, 0x0001, 0x0000, 0x7F54, 0x0857, 0x000F
	.2byte 0x0000, 0x0001, 0x0000, 0x7F58, 0x0857, 0x0010, 0x0000, 0x0001
	.2byte 0x0000, 0x7F5C, 0x0857, 0x0011, 0x0000, 0x0001, 0x0000, 0x7F5F
	.2byte 0x0857, 0x0012, 0x0000, 0x0001, 0x0000, 0x7F62, 0x0857, 0x0013
	.2byte 0x0000, 0x0001, 0x0000, 0x7F66, 0x0857, 0x0014, 0x0000, 0x0001
	.2byte 0x0000, 0x7F69, 0x0857, 0x0015, 0x0000, 0x0001, 0x0000, 0x7F6D
	.2byte 0x0857, 0x0016, 0x0000, 0x0001, 0x0000, 0x7F70, 0x0857, 0x0017
	.2byte 0x0000, 0x0001, 0x0000, 0x7F74, 0x0857, 0x0018, 0x0000, 0x0001
	.2byte 0x0000, 0x7F78, 0x0857, 0x0019, 0x0000, 0x0001, 0x0000, 0x7F7C
	.2byte 0x0857, 0x001A, 0x0000, 0x0001, 0x0000, 0x7F80, 0x0857, 0x001B
	.2byte 0x0000, 0x0001, 0x0000, 0x7F83, 0x0857, 0x001C, 0x0000, 0x0001
	.2byte 0x0000, 0x7F87, 0x0857, 0x001D, 0x0000, 0x0001, 0x0000, 0x7F8A
	.2byte 0x0857, 0x001E, 0x0000, 0x0001, 0x0000, 0x7F8E, 0x0857, 0x001F
	.2byte 0x0000, 0x0001, 0x0000, 0x7F91, 0x0857, 0x0020, 0x0000, 0x0001
	.2byte 0x0000, 0x7F95, 0x0857, 0x0021, 0x0000, 0x0001, 0x0000, 0x7F99
	.2byte 0x0857, 0x0022, 0x0000, 0x0001, 0x0000, 0x7F9C, 0x0857, 0x0023
	.2byte 0x0000, 0x0001, 0x0000, 0x7FA0, 0x0857, 0x0024, 0x0000, 0x0001
	.2byte 0x0000, 0x7FA4, 0x0857, 0x0025, 0x0000, 0x0001, 0x0000, 0x7FA8
	.2byte 0x0857, 0x0026, 0x0000, 0x0001, 0x0000, 0x7FAE, 0x0857, 0x0027
	.2byte 0x0000, 0x0001, 0x0000, 0x7FB2, 0x0857, 0x0028, 0x0000, 0x0001
	.2byte 0x0000, 0x7FB6, 0x0857, 0x0029, 0x0000, 0x0001, 0x0000
