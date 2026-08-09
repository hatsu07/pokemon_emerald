	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5CADA1
gText_Rom_5CADA1: @ 0x085CADA1
	.string "モード$"
	.if (. - gText_Rom_5CADA1) > 0x4
	.error "gText_Rom_5CADA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADA1) < 0x4
	.space 0x4 - (. - gText_Rom_5CADA1)
	.endif
	@ analyzed canonical ROM range 0x085CADA5-0x085CADA9
sAnalyzedData_085CADA5: @ 0x085CADA5
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x89, 0x7B, 0xAE, 0x96, 0x79
	.globl gText_Rom_5CADAA
gText_Rom_5CADAA: @ 0x085CADAA
	.string "モード$"
	.if (. - gText_Rom_5CADAA) > 0x4
	.error "gText_Rom_5CADAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADAA) < 0x4
	.space 0x4 - (. - gText_Rom_5CADAA)
	.endif
