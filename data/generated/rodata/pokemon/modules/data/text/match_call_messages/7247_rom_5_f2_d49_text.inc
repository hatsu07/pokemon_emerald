	@ src/data/text/match_call_messages.h:103 gText_MatchCallKindler_Bernie_Intro1
	.globl gText_Rom_5F2D49
gText_Rom_5F2D49: @ 0x085F2D49
	.string "キャンプファイヤーの ときは$"
	.if (. - gText_Rom_5F2D49) > 0xf
	.error "gText_Rom_5F2D49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D49) < 0xf
	.space 0xf - (. - gText_Rom_5F2D49)
	.endif
