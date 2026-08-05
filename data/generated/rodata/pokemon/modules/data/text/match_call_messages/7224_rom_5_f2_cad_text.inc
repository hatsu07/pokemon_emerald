	@ src/data/text/match_call_messages.h:89 gText_MatchCallBlackBelt_Koji_Intro2
	.globl gText_Rom_5F2CAD
gText_Rom_5F2CAD: @ 0x085F2CAD
	.string "かたりあって みないか?$"
	.if (. - gText_Rom_5F2CAD) > 0xd
	.error "gText_Rom_5F2CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CAD) < 0xd
	.space 0xd - (. - gText_Rom_5F2CAD)
	.endif
