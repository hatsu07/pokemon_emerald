	@ src/data/text/match_call_messages.h:78 gText_MatchCallSwimmer_Tony_Intro1
	.globl gText_Rom_5F2C40
gText_Rom_5F2C40: @ 0x085F2C40
	.string "およげない ときには$"
	.if (. - gText_Rom_5F2C40) > 0xb
	.error "gText_Rom_5F2C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C40) < 0xb
	.space 0xb - (. - gText_Rom_5F2C40)
	.endif
