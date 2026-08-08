	@ data/text/trainers.inc:2330 Route121_Text_JessicaRematchIntro (+1 aliases)
	.globl gText_Rom_25F707
gText_Rom_25F707: @ 0x0825F707
	.string "だいじな ポケモン そだったのよ!\nちょっと みていきなさいよ!$"
	.if (. - gText_Rom_25F707) > 0x21
	.error "gText_Rom_25F707 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F707) < 0x21
	.space 0x21 - (. - gText_Rom_25F707)
	.endif
