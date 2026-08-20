	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:983 LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum
	.globl gText_Rom_2074A1
gText_Rom_2074A1: @ 0x082074A1
	.string "どうかな? じしんさく なんだけど\nきにいったろ?\pこれくらいの でき なら\nびじゅつかんに かざられて いても\lふしぎじゃ ないね!\p……え ほんとに びじゅつかんで\nえを さがして いるって?\lじゃあ これ もっていって みようかな?{EOS}"
	.if (. - gText_Rom_2074A1) > 0x78
	.error "gText_Rom_2074A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2074A1) < 0x78
	.space 0x78 - (. - gText_Rom_2074A1)
	.endif
