	@ data/text/trainers.inc:647 Route109_Text_LolaRematchPostBattle
	.globl gText_Rom_25B05D
gText_Rom_25B05D: @ 0x0825B05D
	.string "うきわ もってると あたしと ポケモンの\nかわいさが ぐぐーんと アップするの!{EOS}"
	.if (. - gText_Rom_25B05D) > 0x29
	.error "gText_Rom_25B05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B05D) < 0x29
	.space 0x29 - (. - gText_Rom_25B05D)
	.endif
