	@ data/text/trainers.inc:965 Route111_Text_TravisPostBattle
	.globl gText_Rom_25BD9E
gText_Rom_25BD9E: @ 0x0825BD9E
	.string "げんき いっぱいに はしりまわる\nトレーナーが いると\lつい そっちを みちゃうよね!{EOS}"
	.if (. - gText_Rom_25BD9E) > 0x2c
	.error "gText_Rom_25BD9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BD9E) < 0x2c
	.space 0x2c - (. - gText_Rom_25BD9E)
	.endif
