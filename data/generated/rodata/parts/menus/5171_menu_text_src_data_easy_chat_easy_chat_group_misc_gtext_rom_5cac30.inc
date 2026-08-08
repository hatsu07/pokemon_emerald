	@ src/data/easy_chat/easy_chat_group_misc.h:244 easy_chat_group_misc_line_244 (+1 aliases)
	.globl gText_Rom_5CAC30
gText_Rom_5CAC30: @ 0x085CAC30
	.string "ひだり$"
	.if (. - gText_Rom_5CAC30) > 0x4
	.error "gText_Rom_5CAC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAC30) < 0x4
	.space 0x4 - (. - gText_Rom_5CAC30)
	.endif
	@ Decoded text from ROM range: offset=0x5CAC34, size=0x50
	.string "わざマシン32　　1500まい$"
	.string "わざマシン29　　3500まい$"
	.string "わざマシン35　　4000まい$"
	.string "わざマシン24　　4000まい$"
	.string "わざマシン13　　4000まい$"
