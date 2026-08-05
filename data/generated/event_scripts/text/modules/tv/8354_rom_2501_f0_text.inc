	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2501F0
gText_Rom_2501F0: @ 0x082501F0
	.string "みなさん　こんにちは！\n『ひみつきち　ほうもん！』の　じかんです\pきょうは　{0xFD}{0x02}さんの　ひみつきちに\nおじゃま　させて　いただきます\p{0xFD}{0x02}さんの　きちは　どんな\nおへやに　なっている　のでしょうか？\pさっそく　はいって　みましょう！\n………　………　………　………$"
	.if (. - gText_Rom_2501F0) != 0x85
	.error "gText_Rom_2501F0 must retain its original byte length"
	.endif
