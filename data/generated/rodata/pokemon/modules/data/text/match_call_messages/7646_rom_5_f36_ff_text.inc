	@ src/data/text/match_call_messages.h:329 gText_MatchCallRockinWhiz_Roxanne_Intro2
	.globl gText_Rom_5F36FF
gText_Rom_5F36FF: @ 0x085F36FF
	.string "せきにん じゅうだいよ$"
	.if (. - gText_Rom_5F36FF) > 0xc
	.error "gText_Rom_5F36FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36FF) < 0xc
	.space 0xc - (. - gText_Rom_5F36FF)
	.endif
