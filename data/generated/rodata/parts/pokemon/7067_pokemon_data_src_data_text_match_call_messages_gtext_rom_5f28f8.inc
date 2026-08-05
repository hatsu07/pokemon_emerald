	@ src/data/text/match_call_messages.h:1 gText_MatchCallAromaLady_Rose_Strategy
	.globl gText_Rom_5F28F8
gText_Rom_5F28F8: @ 0x085F28F8
	.string "やさしい きもちに しちゃう$"
	.if (. - gText_Rom_5F28F8) > 0xf
	.error "gText_Rom_5F28F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F28F8) < 0xf
	.space 0xf - (. - gText_Rom_5F28F8)
	.endif
