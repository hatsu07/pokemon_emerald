	@ src/data/text/match_call_messages.h:154 gText_MatchCallPokefan_Isabel_Intro2
	.globl gText_Rom_5F2F8B
gText_Rom_5F2F8B: @ 0x085F2F8B
	.string "ひとしょうぶ してますの$"
	.if (. - gText_Rom_5F2F8B) > 0xd
	.error "gText_Rom_5F2F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F8B) < 0xd
	.space 0xd - (. - gText_Rom_5F2F8B)
	.endif
