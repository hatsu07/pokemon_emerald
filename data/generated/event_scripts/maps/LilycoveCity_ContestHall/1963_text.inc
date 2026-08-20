	@ data/maps/LilycoveCity_ContestHall/scripts.inc:397 LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter
	.globl gText_Rom_208109
gText_Rom_208109: @ 0x08208109
	.string "どなたの ポケモンも\nほんとうに かわいいわねえ\pでも わたしの ポケモンが\nかわいく アピール すれば……\pきっと もっと かわいい はずよ{EOS}"
	.if (. - gText_Rom_208109) > 0x48
	.error "gText_Rom_208109 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208109) < 0x48
	.space 0x48 - (. - gText_Rom_208109)
	.endif
