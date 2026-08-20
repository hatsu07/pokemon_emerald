	@ data/text/trainers.inc:2189 Route120_Text_JenniferPostBattle
	.globl gText_Rom_25F0E2
gText_Rom_25F0E2: @ 0x0825F0E2
	.string "そう ポケモンの とくせいに よって\nたたかいかたも いろいろ かわってくるわ!{EOS}"
	.if (. - gText_Rom_25F0E2) > 0x29
	.error "gText_Rom_25F0E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F0E2) < 0x29
	.space 0x29 - (. - gText_Rom_25F0E2)
	.endif
