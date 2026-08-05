	@ src/data/text/match_call_messages.h:179 gText_MatchCallFisherman_Elliot_Intro2
	.globl gText_Rom_5F309A
gText_Rom_5F309A: @ 0x085F309A
	.string "つったのは せかいで オレだけ$"
	.if (. - gText_Rom_5F309A) > 0x10
	.error "gText_Rom_5F309A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F309A) < 0x10
	.space 0x10 - (. - gText_Rom_5F309A)
	.endif
