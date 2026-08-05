	@ src/data/text/match_call_messages.h:169 gText_MatchCallExpert_Shelby_Intro2
	.globl gText_Rom_5F3032
gText_Rom_5F3032: @ 0x085F3032
	.string "たたかいかたが あるのじゃ$"
	.if (. - gText_Rom_5F3032) > 0xe
	.error "gText_Rom_5F3032 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3032) < 0xe
	.space 0xe - (. - gText_Rom_5F3032)
	.endif
