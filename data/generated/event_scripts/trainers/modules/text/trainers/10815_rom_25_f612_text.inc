	@ data/text/trainers.inc:2306 Route121_Text_JoyIntro (+1 aliases)
	.globl gText_Rom_25F612
gText_Rom_25F612: @ 0x0825F612
	.string "ユイ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!{EOS}"
	.if (. - gText_Rom_25F612) > 0x2c
	.error "gText_Rom_25F612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F612) < 0x2c
	.space 0x2c - (. - gText_Rom_25F612)
	.endif
