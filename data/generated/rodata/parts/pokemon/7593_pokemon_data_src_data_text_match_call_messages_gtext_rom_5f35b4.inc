	@ src/data/text/match_call_messages.h:298 gText_MatchCallLass_Haley_Intro1
	.globl gText_Rom_5F35B4
gText_Rom_5F35B4: @ 0x085F35B4
	.string "たたかった あとは ポケモンと$"
	.if (. - gText_Rom_5F35B4) > 0x10
	.error "gText_Rom_5F35B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35B4) < 0x10
	.space 0x10 - (. - gText_Rom_5F35B4)
	.endif
