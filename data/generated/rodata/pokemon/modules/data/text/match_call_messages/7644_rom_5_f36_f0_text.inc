	@ src/data/text/match_call_messages.h:328 gText_MatchCallRockinWhiz_Roxanne_Intro1
	.globl gText_Rom_5F36F0
gText_Rom_5F36F0: @ 0x085F36F0
	.string "おおきな まちの リーダーは$"
	.if (. - gText_Rom_5F36F0) > 0xf
	.error "gText_Rom_5F36F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36F0) < 0xf
	.space 0xf - (. - gText_Rom_5F36F0)
	.endif
