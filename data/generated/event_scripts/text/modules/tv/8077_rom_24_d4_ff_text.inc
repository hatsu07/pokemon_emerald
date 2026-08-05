	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D4FF
gText_Rom_24D4FF: @ 0x0824D4FF
	.string "んー？　まだ　つづきが　ありますねー\nよんで　みましょう！\pえーと……\p{0xFD}{0x02}さんに　とって　ポケモンを\nひとことで　たとえると　すれば　それは！\l……\p「{0xFD}{0x04}！！」\pブラボー！！\pいままでの　なかで　いちばん\nいい　さけび　だったー！\p「{0xFD}{0x04}！！」\pなんども　さけびたくなる　ことばだねー！\pそれでは　いいさけびと　であった　ところで\nまた　じかい　おあいしましょう！\pさいごに　もういちど\nみんなで　さけびましょう！\p「{0xFD}{0x04}！！」$"
	.if (. - gText_Rom_24D4FF) > 0xd9
	.error "gText_Rom_24D4FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D4FF) < 0xd9
	.space 0xd9 - (. - gText_Rom_24D4FF)
	.endif
