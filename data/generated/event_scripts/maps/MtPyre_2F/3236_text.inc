	@ data/maps/MtPyre_2F/scripts.inc:88 MtPyre_2F_Text_DezIntro (+1 aliases)
	.globl gText_Rom_216479
gText_Rom_216479: @ 0x08216479
	.string "マコ『かれしと きもだめしに きたの\nすっごく こわいけど\lかれしが いるから だいじょうぶ!\pそうだ! あなたを たおす\nかれしの かっこいい ところ みせて!{EOS}"
	.if (. - gText_Rom_216479) > 0x52
	.error "gText_Rom_216479 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216479) < 0x52
	.space 0x52 - (. - gText_Rom_216479)
	.endif
