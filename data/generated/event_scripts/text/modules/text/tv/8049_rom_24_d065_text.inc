	@ data/text/tv.inc:1096 SlateportCity_PokemonFanClub_Text_LikenMonToSomethingYouLike
	.globl gText_Rom_24D065
gText_Rom_24D065: @ 0x0824D065
	.string "きみの かわいがってる {STR_VAR_1}!\pもし なにか すきなものに たとえると\nすれば なんだと おもう?$"
	.if (. - gText_Rom_24D065) > 0x32
	.error "gText_Rom_24D065 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D065) < 0x32
	.space 0x32 - (. - gText_Rom_24D065)
	.endif
