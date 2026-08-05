	@ src/data/text/match_call_messages.h:177 gText_MatchCallFisherman_Elliot_Pokemon
	.globl gText_Rom_5F307C
gText_Rom_5F307C: @ 0x085F307C
	.string "みずポケモンで しょうぶ!$"
	.if (. - gText_Rom_5F307C) > 0xe
	.error "gText_Rom_5F307C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F307C) < 0xe
	.space 0xe - (. - gText_Rom_5F307C)
	.endif
