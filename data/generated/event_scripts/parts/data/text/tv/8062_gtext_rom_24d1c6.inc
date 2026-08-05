	@ data/text/tv.inc:1108 SlateportCity_PokemonFanClub_Text_InterviewRequest
	.globl gText_Rom_24D1C6
gText_Rom_24D1C6: @ 0x0824D1C6
	.string "きみの その {STR_VAR_1}と\nとても なかが よさそうね\pそうだ! いま わたし\nテレビの しゅざいで\pいろんな ポケモンの はなしを\nきいて まわってるんだけど\pよかったら きみの {STR_VAR_1}の\nはなしを きかせて くれないかな?$"
	.if (. - gText_Rom_24D1C6) > 0x6e
	.error "gText_Rom_24D1C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D1C6) < 0x6e
	.space 0x6e - (. - gText_Rom_24D1C6)
	.endif
