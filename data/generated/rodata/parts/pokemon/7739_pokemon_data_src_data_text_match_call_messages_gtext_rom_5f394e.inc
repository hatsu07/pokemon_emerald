	@ src/data/text/match_call_messages.h:382 gText_MatchCallEliteFour_Drake_Pokemon
	.globl gText_Rom_5F394E
gText_Rom_5F394E: @ 0x085F394E
	.string "ドラゴンタイプの そこぢから!$"
	.if (. - gText_Rom_5F394E) > 0x10
	.error "gText_Rom_5F394E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F394E) < 0x10
	.space 0x10 - (. - gText_Rom_5F394E)
	.endif
