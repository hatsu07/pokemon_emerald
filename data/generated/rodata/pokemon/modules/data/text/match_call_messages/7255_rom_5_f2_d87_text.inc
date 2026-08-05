	@ src/data/text/match_call_messages.h:108 gText_MatchCallCamper_Ethan_Intro1
	.globl gText_Rom_5F2D87
gText_Rom_5F2D87: @ 0x085F2D87
	.string "しぜんの なかで そだてた$"
	.if (. - gText_Rom_5F2D87) > 0xe
	.error "gText_Rom_5F2D87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D87) < 0xe
	.space 0xe - (. - gText_Rom_5F2D87)
	.endif
