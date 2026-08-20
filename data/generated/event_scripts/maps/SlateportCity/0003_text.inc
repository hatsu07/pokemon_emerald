	@ data/maps/SlateportCity/scripts.inc:920 SlateportCity_Text_EnergyGuruSellWhatYouNeed
	.globl gText_Rom_1DC9BE
gText_Rom_1DC9BE: @ 0x081DC9BE
	.string "わし がんばりや!\nがんばって いろいろ うりますよ!{EOS}"
	.if (. - gText_Rom_1DC9BE) > 0x1c
	.error "gText_Rom_1DC9BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DC9BE) < 0x1c
	.space 0x1c - (. - gText_Rom_1DC9BE)
	.endif
