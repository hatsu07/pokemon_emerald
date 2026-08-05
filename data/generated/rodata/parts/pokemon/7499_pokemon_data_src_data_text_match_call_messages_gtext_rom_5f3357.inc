	@ src/data/text/match_call_messages.h:244 gText_MatchCallSwimmer_Jenny_Intro2
	.globl gText_Rom_5F3357
gText_Rom_5F3357: @ 0x085F3357
	.string "テレビの しゅざいも うけたし$"
	.if (. - gText_Rom_5F3357) > 0x10
	.error "gText_Rom_5F3357 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3357) < 0x10
	.space 0x10 - (. - gText_Rom_5F3357)
	.endif
