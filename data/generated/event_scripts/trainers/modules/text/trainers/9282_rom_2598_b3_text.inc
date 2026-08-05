	@ data/text/trainers.inc:82 Route103_Text_AmyLivRegister
	.globl gText_Rom_2598B3
gText_Rom_2598B3: @ 0x082598B3
	.string "ルミ『あたしたち ほんとは\nもっと つよいんだもん……\lほんとうだから! こんど みせるから!"
	.byte EOS
	.if (. - gText_Rom_2598B3) > 0x30
	.error "gText_Rom_2598B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2598B3) < 0x30
	.space 0x30 - (. - gText_Rom_2598B3)
	.endif
