	@ data/text/trainers.inc:16 Route102_Text_CalvinRematchIntro (+1 aliases)
	.globl gText_Rom_2595D1
gText_Rom_2595D1: @ 0x082595D1
	.string "キミに まけてから ひっしに\nポケモン そだてたんだ! もちろん\lボクの ちょうせん うけるよね!"
	.byte EOS
	.if (. - gText_Rom_2595D1) > 0x32
	.error "gText_Rom_2595D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2595D1) < 0x32
	.space 0x32 - (. - gText_Rom_2595D1)
	.endif
