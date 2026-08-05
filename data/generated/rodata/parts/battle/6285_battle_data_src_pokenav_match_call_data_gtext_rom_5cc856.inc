	@ src/pokenav_match_call_data.c:655 gText_MatchCallMay_Intro1
	.globl gText_Rom_5CC856
gText_Rom_5CC856: @ 0x085CC856
	.string "ポケモン つれて おとうさんの$"
	.if (. - gText_Rom_5CC856) > 0x10
	.error "gText_Rom_5CC856 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC856) < 0x10
	.space 0x10 - (. - gText_Rom_5CC856)
	.endif
