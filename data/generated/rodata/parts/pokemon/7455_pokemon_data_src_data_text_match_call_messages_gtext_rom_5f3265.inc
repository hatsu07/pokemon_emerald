	@ src/data/text/match_call_messages.h:222 gText_MatchCallBirdKeeper_Robert_Pokemon
	.globl gText_Rom_5F3265
gText_Rom_5F3265: @ 0x085F3265
	.string "とりポケの かれいなる まい!$"
	.if (. - gText_Rom_5F3265) > 0x10
	.error "gText_Rom_5F3265 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3265) < 0x10
	.space 0x10 - (. - gText_Rom_5F3265)
	.endif
