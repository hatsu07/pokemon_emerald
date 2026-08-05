	@ src/data/text/match_call_messages.h:156 gText_MatchCallPokefan_Miguel_Strategy
	.globl gText_Rom_5F2F98
gText_Rom_5F2F98: @ 0x085F2F98
	.string "あいじょうで しょうぶ!$"
	.if (. - gText_Rom_5F2F98) > 0xd
	.error "gText_Rom_5F2F98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F98) < 0xd
	.space 0xd - (. - gText_Rom_5F2F98)
	.endif
