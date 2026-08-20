	@ data/maps/SlateportCity/scripts.inc:955 SlateportCity_Text_SeaweedFullOfLife
	.globl gText_Rom_1DCABE
gText_Rom_1DCABE: @ 0x081DCABE
	.string "ほれ みてみろ!\pこのあたりで とれる かいそうは\nしんせん ピチピチ!\pいまにも おそい かかって きそうだ!{EOS}"
	.if (. - gText_Rom_1DCABE) > 0x39
	.error "gText_Rom_1DCABE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DCABE) < 0x39
	.space 0x39 - (. - gText_Rom_1DCABE)
	.endif
