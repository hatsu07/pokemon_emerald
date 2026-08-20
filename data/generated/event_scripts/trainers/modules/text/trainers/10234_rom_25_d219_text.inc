	@ data/text/trainers.inc:1463 Route115_Text_NobIntro (+1 aliases)
	.globl gText_Rom_25D219
gText_Rom_25D219: @ 0x0825D219
	.string "オレの とくいわざは\nずつきで レンガを くだく ことだ!{EOS}"
	.if (. - gText_Rom_25D219) > 0x1e
	.error "gText_Rom_25D219 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D219) < 0x1e
	.space 0x1e - (. - gText_Rom_25D219)
	.endif
