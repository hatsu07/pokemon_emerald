	@ data/text/tv.inc:202 LilycoveCity_PokemonTrainerFanClub_HopeYouCatchTVSpecial
	.globl gText_Rom_24DF29
gText_Rom_24DF29: @ 0x0824DF29
	.string "もうすぐ {STR_VAR_1}に ついての\nテレビ ばんぐみが ほうそう されるんだ!\pきみも ぜひ みてね!$"
	.if (. - gText_Rom_24DF29) > 0x30
	.error "gText_Rom_24DF29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DF29) < 0x30
	.space 0x30 - (. - gText_Rom_24DF29)
	.endif
