	@ src/data/text/match_call_messages.h:389 gText_MatchCallChampion_Wallace_Intro2
	.globl gText_Rom_5F39A4
gText_Rom_5F39A4: @ 0x085F39A4
	.string "かねそなえた わたし……$"
	.if (. - gText_Rom_5F39A4) > 0xd
	.error "gText_Rom_5F39A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F39A4) < 0xd
	.space 0xd - (. - gText_Rom_5F39A4)
	.endif
	.space 0x3, 0x00
