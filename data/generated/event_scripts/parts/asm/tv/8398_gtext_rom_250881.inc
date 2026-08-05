	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	.globl gText_Rom_250881
gText_Rom_250881: @ 0x08250881
	.string "この　なかで　いちばん　よいのは\n…………………………………………\p「{0xFD}{0x02}」　ですね！\p「{0xFD}{0x03}」より\nぜったい　「{0xFD}{0x02}」です\pテレビの　まえの　みなさんも\nよーく　かんがえて　バトルを　しましょう！\pそれでは　さようなら！$"
	.if (. - gText_Rom_250881) > 0x70
	.error "gText_Rom_250881 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250881) < 0x70
	.space 0x70 - (. - gText_Rom_250881)
	.endif
