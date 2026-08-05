	@ src/data/text/match_call_messages.h:153 gText_MatchCallPokefan_Isabel_Intro1
	.globl gText_Rom_5F2F7B
gText_Rom_5F2F7B: @ 0x085F2F7B
	.string "ゆうはんの かいもの ついでに$"
	.if (. - gText_Rom_5F2F7B) > 0x10
	.error "gText_Rom_5F2F7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F7B) < 0x10
	.space 0x10 - (. - gText_Rom_5F2F7B)
	.endif
