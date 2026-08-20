	@ data/maps/MtPyre_Summit/scripts.inc:591 MtPyre_Summit_Text_HearTheNewLegendOfHoenn
	.globl gText_Rom_2177A2
gText_Rom_2177A2: @ 0x082177A2
	.string "ホウエンに のこされた いいつたえを\nかたりつぐのが わたしの やくめ\pそして いま\nルネで おこった じけんは まくを とじ\lいいつたえは また ぬりかえられた……\pあらたな ホウエンの いいつたえを\nきいて いきなされ……{EOS}"
	.if (. - gText_Rom_2177A2) > 0x72
	.error "gText_Rom_2177A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2177A2) < 0x72
	.space 0x72 - (. - gText_Rom_2177A2)
	.endif
