	@ data/text/trainers.inc:1331 Route114_Text_SteveRegister
	.globl gText_Rom_25CCAA
gText_Rom_25CCAA: @ 0x0825CCAA
	.string "お おぼえてろっ! ……いや\nわすれられない ように こうしてやる!{EOS}"
	.if (. - gText_Rom_25CCAA) > 0x23
	.error "gText_Rom_25CCAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CCAA) < 0x23
	.space 0x23 - (. - gText_Rom_25CCAA)
	.endif

	@ data/text/trainers.inc:1334 Route114_Text_SteveRematchIntro (+1 aliases)
	.globl gText_Rom_25CCCD
gText_Rom_25CCCD: @ 0x0825CCCD
	.string "うふふふふふ……\nボクの ポケモンと しょうぶ しようよ{EOS}"
	.if (. - gText_Rom_25CCCD) > 0x1d
	.error "gText_Rom_25CCCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25CCCD) < 0x1d
	.space 0x1d - (. - gText_Rom_25CCCD)
	.endif
