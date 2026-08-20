	@ data/text/trainers.inc:1979 Route119_Text_GregPostBattle
	.globl gText_Rom_25E835
gText_Rom_25E835: @ 0x0825E835
	.string "キミが どこかに いくまで\nボクらは マネを つづけるよ!{EOS}"
	.if (. - gText_Rom_25E835) > 0x1e
	.error "gText_Rom_25E835 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E835) < 0x1e
	.space 0x1e - (. - gText_Rom_25E835)
	.endif
