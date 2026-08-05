	@ data/text/apprentice.inc:775 gText_ApprenticePickWinSpeech1
	.globl gText_Rom_272825
gText_Rom_272825: @ 0x08272825
	.string "{PLAYER}せんせい こんにちは!\nぼく きめたい ことが あるの!\pあのね!\nぼく しょうぶに かった とき\lなにか かっこいい セリフを いいたいの!\pせんせい おすすめの\nかっこいい セリフって あるかな?$"
	.if (. - gText_Rom_272825) > 0x67
	.error "gText_Rom_272825 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272825) < 0x67
	.space 0x67 - (. - gText_Rom_272825)
	.endif
