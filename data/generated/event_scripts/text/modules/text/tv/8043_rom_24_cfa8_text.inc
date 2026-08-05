	@ data/text/tv.inc:1087 SlateportCity_PokemonFanClub_Text_InterviewRequestHasName
	.globl gText_Rom_24CFA8
gText_Rom_24CFA8: @ 0x0824CFA8
	.string "わあ!\pきみ その {STR_VAR_1}を とても\nだいじに している みたいね!\p{STR_VAR_2} って いうんだ……\pそうだ!\pいま わたし テレビの しゅざいで\nポケモンの アンケートを してるんだけど\pすこしだけ しつもんに\nこたえて くれないかな?$"
	.if (. - gText_Rom_24CFA8) > 0x74
	.error "gText_Rom_24CFA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CFA8) < 0x74
	.space 0x74 - (. - gText_Rom_24CFA8)
	.endif
