	@ data/text/trainers.inc:2756 Route125_Text_ErnestRematchIntro (+1 aliases)
	.globl gText_Rom_2608E8
gText_Rom_2608E8: @ 0x082608E8
	.string "おっと ここで あったが 100ねんめ!\nとにかく ポケモンしょうぶ だっ!$"
	.if (. - gText_Rom_2608E8) > 0x27
	.error "gText_Rom_2608E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2608E8) < 0x27
	.space 0x27 - (. - gText_Rom_2608E8)
	.endif
